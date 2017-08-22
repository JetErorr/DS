#include <stdio.h>
#include "StackFull.h"

int main ()
{
    STACK *s;
    int choice;
    int option = 1;

    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("----\n");
        printf ("1. PUSH\n");
        printf ("2. POP\n");
        printf ("3. DISPLAY\n");
        printf ("4. EXIT\n");
        printf ("----\n");

        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    }
    return(0);
}
