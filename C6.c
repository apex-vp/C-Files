#include<stdio.h>

int main( )
{
    //Escape Sequence
    //\n, \b, \r, \t
    
    //New Line
    //printf("Hello \n World");
    
    //\b => backspace (Only One Backspace)
    //printf("Hello Wor\bld"); // Hello Wold
 
    //\"\" => Double Quote
    //printf("\"Hello World\""); //"Hello Wolrd"

    //\'\' => Single Quote
    //printf("\'Hello World\'"); //'Hello World'

    //\t => tab Spaces (add 8 spaces)
    //printf("\nHello \t World");  //Hello        World

    //\r => carriage return (It takes curser to the begining of the line)
    // printf("LC12 Batch"); // LC12 Batch ==> OC12 Batch

    // \ => Escape charater
    // printf("\\n is new line"); //\n is new line

    printf("Discount is 10%");      //Discount is 10
    printf("Discount is 10%%");     //Discount is 10% (your have to add extra percent symbol %)

    


    return 0;

}