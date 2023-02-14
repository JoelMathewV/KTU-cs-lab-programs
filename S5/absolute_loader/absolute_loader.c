#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp1, *fp2;
    int i, j, hexaddr;
    char ch, line[50], staddr[10];
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("temp.txt","r+");
    while (!feof(fp1))
    {
        fscanf(fp1, "%s", line);
        if (line[0]=='T')
        {
            for (i = 1,j=0; i <= 6; i++,j++)
            {
                staddr[j] = line[i];
            }
            staddr[j]='\0';

            //convert to hex
            rewind(fp2);
            fprintf(fp2,"%s \n",staddr);
            rewind(fp2);
            fscanf(fp2,"%x",&hexaddr);

            i = 9;
            while (line[i]!='\0')
            {
                printf("%x \t %c%c \n",hexaddr,line[i],line[i+1]);
                i+=2;
                hexaddr+=1;
            }
            
            
        } 
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}