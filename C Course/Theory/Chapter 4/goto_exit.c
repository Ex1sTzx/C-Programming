#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Enter a number : ");

    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("You entered the number 1\n");
        // Jump to the label 'label1'
        goto label1;
    case 2:
        printf("You entered the number 2\n");
        // Jump to the label 'label2'
        goto label2;
    case 3:
        printf("You entered the number 3\n");
        // Jump to the label 'label3'
        goto label3;
    case 4:
        printf("You entered the number 4\n");
        // Jump to the label 'label4'
        goto label4;
    case 5:
        printf("You entered the number 5\n");
        // Jump to the label 'label5'
        goto label5;
    
    default:
        printf("Nothing matched\n");
        // Jump to the label 'label_default'
        goto label_default;
    }

label1:
    // Print a message when the program jumps to this label
    printf("Label 1 reached\n");
    // Jump to the 'end' label
    goto end;
label2:
    // Print a message when the program jumps to this label
    printf("Label 2 reached\n");
    // Jump to the 'end' label
    goto end;
label3:
    // Print a message when the program jumps to this label
    printf("Label 3 reached\n");
    // Jump to the 'end' label
    goto end;
label4:
    // Print a message when the program jumps to this label
    printf("Label 4 reached\n");
    // Jump to the 'end' label
    goto end;
label5:
    // Print a message when the program jumps to this label
    printf("Label 5 reached\n");
    // Jump to the 'end' label
    goto end;
label_default:
    // Print a message when the program jumps to this label
    printf("Label default reached\n");
    // Jump to the 'end' label
    goto end;

end:
    // Print a message when the program reaches this label
    printf("End of program\n");

    return 0;
}