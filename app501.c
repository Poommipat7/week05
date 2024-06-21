#include <stdio.h>
int x = 0b1011;
int y = 0x10;
int z = 10;
int main ()
{
    printf("x in Decimal :%d\n",x);
    printf("x in Octal :%o\n", x);
    printf("x in hexadecimal :%x\n\n" , x);
    //printf("x in Binaryl :%0xb\n", x);

    printf("y in Decimal :%d\n",y);
    printf("y in Octal :%o\n", y);
    printf("y in hexadecimal :%x\n\n" , y);
    //printf("y in Binary :%x\n" , y);

    printf("z in Decimal :%d\n",z);
    printf("z in Octal :%o\n", z);
    printf("z in hexadecimal :%x\n\n" , z);
    return 0;
}
