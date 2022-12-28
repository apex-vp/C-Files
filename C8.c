#include<stdio.h>

int main( )
{
    int num = 10;
    char ch = 'A';
    float fvar = 1.2;
    double dvar = 13.33;
    
    //sizeof() => 

    printf("%d\n", sizeof (num)); //int => 4 Bytes   (32 bit)
    printf("%d\n", sizeof (ch)); //char => 1 Bytes
    printf("%d\n", sizeof (fvar)); //float => 4 Bytes
    printf("%d\n", sizeof (dvar)); //double => 8 Bytes

    return 0;
}