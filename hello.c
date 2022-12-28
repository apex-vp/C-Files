#include<stdio.h>           //Header File
    //stdio.h header file contains Standard Function Declaration (NOT Defination its 📝Declaration)

int main( )                 // User Defined function
{
    printf("Hello.World");  //Library Function
    return 0;               //return is a jump statement
}

/*
    🔴 What happens in computer After writing program
    *Compilation and Execution in C Programms:- 1st Follow that pdf/img

    🟢 hello.c (Source Code) --> 
    
    🟢Preprocessor ( 1. removing commments 
                      2. Handle the statement starting with # )

    🟢 hello.i (Expanded Source code) [i = intermidiate]
         🏆 To see 🏆(.i) file ==> gcc hello.c -E -o hello.i (It shows 472 Lines of code in that No comments are there)
                This why hello.i file is Expanded Source Code 👍
    
    🟢 Compiler --> ( 1. Converts into Low Level lang
                       2. Check the syntax eg. ;)

    🟢 hello.s (Assembly Code) 
         🏆 To See Assembly Code of hello.c ==> gcc -S hello.c (hello.s file is created 👍)
                📝 Assembly lang is Low language level language and It is Machine Dependant Lang 
                📝 C Program is Machine Independant, we can run C in any Machine/comp.
                📝 Assembler internally taking care of C so that we can run that in any computer.
                📝 Machine Can Not understand Assembly code so for that we need Assembler
    
    🟢 Assembler --> Converts Assembly code to Machine/Binary Code 

    🟢 hello.o (Object Code) --> Here are machine Level Code

    🟢 .lib (Predefined Functions) 
            Here are some Predefined function in C such as scanf, printf .....etc.
    
    🟢 Linker:-
            Linker Combine Obove two points i.e Combines user Object Codes with .lib Codes 
            📝 So if print capital 'P' instaed of small 'p' in printf line, 
                then Linker gives you error i.e undefined reference to 'Printf'
                                                error: ld returned 1 exit status 
                                                        ld means Dynamic Linker

    🟢 a.exe ( Here is our code but its in hard disk, in hard disk no ocde is execute so,)
    
    🟢 Loader ( Unit of Operating System)
            Now here Loader which is unit of OS took that code in RAM coz Programs runs in RAM.

    🟢 RAM (Programs always runs in RAM in the form of Process)
    🟢 Process (here our code runs now and we can see it)
*/

/*
    1. 🎯 Program compilation starts form line no. 1
    2. 🎯 Program execution starts from main( )
    3. main ( ) is a entry point function 
    4. 🎯 Only One [ main ( ) ] function is allowed in program
    5. return 0; Indiactes successful execution of program

SYMBOL USED:
🔴
🟢
🏆
📝
🎯
•


*/