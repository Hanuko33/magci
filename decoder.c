#include <stdio.h>

char input[4096];
char output[4096];

int main() 
{
    for (int i = 0; i<4096; i++)
    {
        input[i] = 0;
    }
    for (int i = 0; i<4096; i++)
    {
        output[i] = 0;
    }

    printf("Input type (f - file/ i - input): ");
    fflush(stdout);

    char type;
    scanf("%c", &type);
    
    while ((getchar()) != '\n');
    
    if (type == 'f')
    {
        FILE * f = fopen("OUTPUT", "r");
        fread(input, sizeof(input), 1, f);
        fclose(f);
    }
    
    else if (type == 'i')
    {
        fgets(input, 4096, stdin);
    }
    
    //printf("%s", input);

    int i=0;
    int oi=0;
    while (i < 4096)
    {
        if
        (
            input[i+oi] != 'a' &&
            input[i+oi] != 's' &&
            input[i+oi] != 'd' &&
            input[i+oi] != 'f' &&
            input[i+oi] != 'g' &&
            input[i+oi] != 'h' &&
            input[i+oi] != 'j' &&
            input[i+oi] != 'k' &&
            input[i+oi] != 'l' &&
            input[i+oi] != ';'
         )
        {
            output[i]=input[i+oi];
            switch (input[i+oi])
            {
                case '0':
                    output[i] = ';';
                    break;
                case '1':
                    output[i] = 'a';
                    break;
                case '2':
                    output[i] = 's';
                    break;
                case '3':
                    output[i] = 'd';
                    break;
                case '4':
                    output[i] = 'f';
                    break;
                case '5':
                    output[i] = 'g';
                    break;
                case '6':
                    output[i] = 'h';
                    break;
                case '7':
                    output[i] = 'j';
                    break;
                case '8':
                    output[i] = 'k';
                    break;
                case '9':
                    output[i] = 'l';
                    break;
            }
            i++;
        }
        else 
        {
            oi++;
        }

    }
    printf("%s\n", output);
}
