#include<stdio.h> 
#include<limits.h> 

int main( )
{
    /*
        type modifiers 
            1. signed (%d)
            2. unsigned (%d)
            3. long (%d)
            4. short (%d)
    */
    signed int num = 2147483647;// num can store 📌+ve as well as 📌-ve  ( 4 bytes )
    printf("%d ",num); 
    //signed int num; 
    // by default it is considered as signed 
    //printf("%d ",INT_MAX);//2147483647📌
    //printf("%d ",INT_MIN);//-2147483648📌
    

    unsigned int num2 =4294967295; // 🔴it can only store +ve values  
    //printf("%u ",UINT_MAX); //4294967295 => 🔴max range of Unsigned Integer
    // min range => 0 
    
    printf("%u ",num2);
    
    return 0; 
}