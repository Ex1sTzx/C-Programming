#include <stdio.h>

int main()
{
    int skip = 5;
    int i = 0;
    while (i<10)
    {
        if (i==skip)
        {
            i++;
            continue; // skips the iteration if i is equal to skip
        }
        printf("%d\n ", i);
        i++;   
    }
    
    return 0;
}