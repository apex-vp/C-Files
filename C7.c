#include<stdio.h>

int main ( )
{
    int A = 10;
    int B = 15;
    // printf("          %d",A); //add 10 spaces then print //10 output=> (          10)

    //Width Specifier

    // printf("%10d",A);         //add 10 spaces then print //10 output=> (          10)

    //Right Justified
    // printf("%20d",A);         //add 20 spaces then print 10 // output=> (                    10)
    
    //Left Justified
    // printf("%-20d",A);         //print 10 then add 20 spaces // output=> (10                    )

    // printf("%-10d %d",A,B);  //(10          15)   
    // printf("%10d %-10d",A,B);  //(         10 15         )

    float fvar= 10.33;

    // printf("%f",fvar); //10.330000
    // printf("%.f",fvar); //10  ==> puts round figure 

    printf("%*.*f",10,2,fvar);
                             
    return 0;
}