#include <stdio.h>
#include <conio.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int main()
{
   int x, y;

   x = 10;
   y = 10;

   gotoxy(x, y);

   printf("C program to change cursor position.");

   getch();
   return 0;
}
