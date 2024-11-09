#include <stdio.h>

int main()
{
    int celsius;
	printf("The temp in celsius is : ");
	scanf("%d",&celsius);
	double fahrenheit = celsius*(9.0/5.0) + 32.0;
	printf("The temp in fahrenheit is : %f",fahrenheit);
    
    return 0;
}