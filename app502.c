#include <stdio.h>
#include <stdbool.h>
int x = 65;//Decimal = 10
int y = 33;//Decimal = 10
bool isMarry = true;
bool isMale = false;

void main()
{
   printf("X in decimal :%d\n", x);
   printf("X in Octal :%o\n", x);
   printf("X in Hexadecimal :%x\n", x);
   printf("X in Character :%c\n", x);
    printf("isMarry in Bool :%d\n\n", isMarry);

   printf("y in decimal :%d\n", y);
   printf("y in Octal :%o\n", y);
   printf("y in Hexadecimal :%x\n", y);
   printf("y in Character :%c\n", y);
   printf("isMale in Bool :%d\n\n", isMale);
   return 0;
}