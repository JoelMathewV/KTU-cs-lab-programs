#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char a[10], ad[10], label[10], opcode[10], operand[10], mnemonic[10], symbol[10];
	int i, address, code, add, len, actual_len;
	FILE *fp1, *fp2, *fp3, *fp4;
	fp1 = fopen("assmlist.dat", "w");
	fp2 = fopen("symtab.dat", "r");
	fp3 = fopen("intermediate.dat", "r");
	fp4 = fopen("optab.dat", "r");
	fscanf(fp3, "%s%s%s", label, opcode, operand);
	if (strcmp(opcode, "START") == 0)
	{
		fprintf(fp1, "\t%s\t%s\t%s\n", label, opcode, operand);
		fscanf(fp3, "%d%s%s%s", &address, label, opcode, operand);
	}
	while (strcmp(opcode, "END") != 0)
	{
		if (strcmp(opcode, "BYTE") == 0)
		{
			fprintf(fp1, "%d\t%s\t%s\t%s\t", address, label, opcode, operand);
			len = strlen(operand);
			actual_len = len - 3;
			for (i = 2; i < (actual_len + 2); i++)
			{
				sprintf(ad, "%d", operand[i]);
				fprintf(fp1, "%s", ad);
			}
			fprintf(fp1, "\n");
		}
		else if (strcmp(opcode, "WORD") == 0)
		{
			len = strlen(operand);
			sprintf(a, "%d", atoi(operand));
			fprintf(fp1, "%d\t%s\t%s\t%s\t00000%s\n", address, label, opcode, operand, a);
		}
		else if ((strcmp(opcode, "RESB") == 0) || (strcmp(opcode, "RESW") == 0))
		{
			fprintf(fp1, "%d\t%s\t%s\t%s\n", address, label, opcode, operand);
		}
		else
		{
			rewind(fp4);
			fscanf(fp4, "%s%d", mnemonic, &code);
			while (strcmp(opcode, mnemonic) != 0)
				fscanf(fp4, "%s%d", mnemonic, &code);
			if (strcmp(operand, "**") == 0)
			{
				fprintf(fp1, "%d\t%s\t%s\t%s\t%d0000\n", address, label, opcode, operand, code);
			}
			else
			{
				rewind(fp2);
				fscanf(fp2, "%s%d", symbol, &add);
				while (strcmp(operand, symbol) != 0)
				{
					fscanf(fp2, "%s%d", symbol, &add);
				}
				fprintf(fp1, "%d\t%s\t%s\t%s\t%d%d\n", address, label, opcode, operand, code, add);
			}
		}
		fscanf(fp3, "%d%s%s%s", &address, label, opcode, operand);
	}
	fprintf(fp1, "%d\t%s\t%s\t%s\n", address, label, opcode, operand);
	printf("Finished");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fclose(fp4);
	return 0;
}
