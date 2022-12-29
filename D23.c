#include<stdio.h> 

int main( )
{
    //char ch1 = 'A'; // 65 => ( binary of 65 => 1 byte ) [❗ASCII value of A is 65]
    //char ch2 = 65; // char are internally integral constants 
    
    //printf("%d ",'A'); // 65 
    //printf("%c ",65);//A 
    
    // \r \t \b \n => character constants (ASCII value)
    // printf("%d ",'\r');//13 [❗ASCII value of \r is 13]  //short form => 📢Aryan TB (13 10 8 9) 
    // printf("%d ",'\n');//10 [❗ASCII value of \n is 10]
    // printf("%d ",'\t');//9 [❗ASCII value of \t is 9]
    // printf("%d ",'\b');//8 [❗ASCII value of \b is 8]

    //🔴 You have to remember ASCII Values of (A - Z),(a - z), (0 - 9) in short:
    //  printf("%d - %d\n",'A','Z');// 💡 65 - 90 
    //  printf("%d - %d\n",'a','z');// 💡 97 - 122 
    //  printf("%d - %d\n",'0','9');// 💡 48 - 57 
    
    //printf("%d",'\n' - '\r');  //❣️character substraction means their ASCII value Substraction
    //             10  -  13  => -3 

    // char c1='z'; // 122 
    // printf("%d\t%c\t%o",c1-57,c1-'9',c1-32);
    //                   122-57 , 122 - 57 , 122 - 32   //Here they just take 9 ASCII Value i.e. 57 
    //                      65        A         132
    
    
    // char ch2 = 131; // 🔴Range   ( +ve and -ve )(127 to -128 )
    //by default signed 
    /*  
            char => 1 byte 
            1 byte => 8 bits
            (2 to the power 8 - 1) - 1   
            (2 to the power 7 ) - 1 
             128 - 1 => 127 

            max range => 127 
            min range => -128

    */
    // printf("%d",ch2); //-125 🔴 
    
    // unsigned char ch3 = -5;

    // printf("%u",ch3);

    /*
                unsigned char => 1 byte 
                (2 to the power 8) - 1  =>  formula
                256 - 1 => 255 ( max range )
                0 to 255 
    */
    
    
    return 0; 
}
// -128 -127 -126 -125 ....0 1 2 3 4 ...... 127 

//128 => -128 
//129 => -127 
//130 => -126 
//131 => -125 🔴

// char ch = 'A'; // => 65 => binary   

/*
        char ch = 900;  // 127 to -128 ( signed  )

        char => 1 byte => 8 bits 
        2 to the power 8 => 256      => formula

        900 - 256 => 644 ( no )
        644 - 256 => 388 ( no )
        388 - 256 => 132 ( no )
        132 - 256 => -124 ( yes )  


*/