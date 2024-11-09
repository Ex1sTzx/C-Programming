#include <stdio.h>

int main()
{
    char n;
    printf("Enter an alphabet: ");
    scanf("%c", &n);
    char letter = 'a';
    for (int i = 1; letter <= n; i++)
    {
        for (int j = 0; j < i && letter <= n; j++)
        {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
    return 0;
}
