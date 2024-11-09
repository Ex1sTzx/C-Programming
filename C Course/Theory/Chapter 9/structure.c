#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
};
int main()
{
    struct employee e1; // creating a structure variable
    strcpy(e1.name, "samarth");
    e1.code = 7;
    e1.salary = 50000;

    printf("Name: %s\n", e1.name);
    printf("Code: %d\n", e1.code);
    printf("Salary: %.2f\n", e1.salary);

    return 0;
}