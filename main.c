#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char input[256];
char output[4096];

int main()
{
    srand(time(NULL));
    for (int i = 0; i<256; i++)
    {
        input[i] = 0;
    }
    for (int i = 0; i<4096; i++)
    {
        output[i] = 0;
    }

    fgets(input, 255, stdin);
    //printf("%s\n", input);
    
    
    int i=0;
    int oi=0;
    while (i < 256)
    {
        if (
                input[i] != 'a' &&
                input[i] != 's' &&
                input[i] != 'd' &&
                input[i] != 'f' &&
                input[i] != 'g' &&
                input[i] != 'h' &&
                input[i] != 'j' &&
                input[i] != 'k' &&
                input[i] != 'l' &&
                input[i] != ';' 
           )
        {
            output[oi+i]=input[i];
        }
        else 
        {
            switch (input[i])
            {
                case 'a':
                    output[oi+i]='1';
                    break;
                case 's':
                    output[oi+i]='2';
                    break;
                case 'd':
                    output[oi+i]='3';
                    break;
                case 'f':
                    output[oi+i]='4';
                    break;
                case 'g':
                    output[oi+i]='5';
                    break;
                case 'h':
                    output[oi+i]='6';
                    break;
                case 'j':
                    output[oi+i]='7';
                    break;
                case 'k':
                    output[oi+i]='8';
                    break;
                case 'l':
                    output[oi+i]='9';
                    break;
                case ';':
                    output[oi+i]='0';
                    break;
            }
        }
        for (int j = 0; j < rand() % 10; j++)
        {
            oi++;
            switch (rand() % 10)
            {
                case 0:
                    output[oi+i]='a';
                    break;
                case 1:
                    output[oi+i]='s';
                    break;
                case 2:
                    output[oi+i]='d';
                    break;
                case 3:
                    output[oi+i]='f';
                    break;
                case 4:
                    output[oi+i]='g';
                    break;
                case 5:
                    output[oi+i]='h';
                    break;
                case 6:
                    output[oi+i]='j';
                    break;
                case 7:
                    output[oi+i]='k';
                    break;
                case 8:
                    output[oi+i]='l';
                    break;
                case 9:
                    output[oi+i]=';';
                    break;
            }
        }
        i++;
    }
    FILE *f = fopen("OUTPUT", "w");
    fwrite(output, sizeof(output), 1, f);
    fclose(f);
    printf("%s", output);
}
