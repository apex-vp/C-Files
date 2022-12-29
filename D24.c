#include<stdio.h>

int main( )
{
    /*
        short , long ====> ( type modifiers )
    */
    //short int num; 
    //signed short int num; // same as above coz its already taken it default as signed
    //printf("%d",sizeof(num)); //2 bytes  //💡here its size is 4 byte but short makes it size minimun which is 2 byte
    
    // short char ch;  // ❌ Not allowed bcoz char size is 1 we cannot short size which is already 1
                        //so it gives error
    //long int num1; 
    //signed long int num1;  
    //printf("%d",sizeof(num1)); //4 bytes 

    //long long int x;
    //signed long long int x;    
    //unsigned long long int x;    
    unsigned long long x;    
    printf("%d",sizeof(x)); //8 bytes 

    
    return 0; 
}
/*
    🔴 You can only signed unsigned to integers and characters
        ❌You can NOT signed unsigned float, double...etc

*/
// 58.43