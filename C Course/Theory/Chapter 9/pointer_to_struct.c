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
    struct employee e1, *ptr;
    e1.code = 7;
    ptr = &e1;
    printf("%d\n", ptr->code); // arrow operator can be used to dereference the pointer
}