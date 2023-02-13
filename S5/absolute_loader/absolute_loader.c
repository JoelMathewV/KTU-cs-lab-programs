
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    FILE *fp;
    int i, j, staddr1;
    char ch, name[10], name1[10], line[50], staddr[10];

    printf("Enter the program name : ");
    scanf("%s", name);

    fp = fopen("input.txt", "r");
    fscanf(fp, "%s", line);

    for (i = 2, j = 0; i < 8, j < 6; i++, j++)
        name1[j] = line[i];

    name1[j] = '\0';
    printf("Name from obj file is : %s\n", name);

    if (strcmp(name, name1) == 0)
    {
        do
        {
            fscanf(fp, "%s", line);
            if (line[0] == 'T')
            {
                for (i = 2, j = 0; i < 8, j < 6; i++, j++)
                    staddr[j] = line[i];

                staddr[j] = '\0';

                staddr1 = atoi(staddr);

                i = 12;

                while (line[i] != '$')
                {
                    if (line[i] != '^')
                    {
                        printf("%d\t%c%c\n", staddr1, line[i], line[i + 1]);
                        staddr1++;
                        i = i + 2;
                    }
                    else
                        i++;
                }
            }
            else if (line[0] == 'E')
                break;
        } while (1);
    }
    fclose(fp);
    return 0;
}