#include<stdio.h>

int main ( )
{
    int x;  // 🔴variable declare 
    x = 120; // Assignment
    int num = 10; // 🔴variable declaration + initialization
    double dvar = 12.123456;
    char ch = 'A';
    float fvar = 10.12345;

    //Format specifiers:
    // int=>%d, float=>%f, char=>%c, double=>%lf    
    // (\n) called as escape sequence

    printf("%d\n",num);
    printf("%lf\n",dvar);   // "%.2lf\n"  ==>if you add (.2) before "lf" then it will print output till 2 decimal
    printf("%c\n",ch);   
    printf("%f\n",fvar);    // "%.2f\n"  ==>if you add (.2) before "f" then it will print output till 2 decimal 

    //you can also print all using one line

    // printf("%d \n %lf \n %c \n %f \n",num,dvar,ch,fvar);


    return 0;
}

