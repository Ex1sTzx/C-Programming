#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee details[100];

    struct employee e1 = {7, 50000, "samarth"};
    printf("Employee Code: %d\n", e1.code);
    printf("Employee Salary: %.2f\n", e1.salary);
    printf("Employee Name: %s\n", e1.name);
}