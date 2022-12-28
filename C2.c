#include<stdio.h>

int main( )
{
    printf("Program Started..\n");
    int ans;
    ans = 5 / 0; //divide by zero
    //🔴RunTime Error
    printf("%d",ans);
    printf("Programs End..\n");
    return 0; 
}

/*
    1. Compilation (Yes)
    2. Execution Starts (Yes)
    3. Program Successfully executed (NO)
    4. Non-Zero indicate failure, in above programs line 11 not read by program coz its executed line 5
            so runtime error occur

  here code is successfully compiled and .exe file also created but could not proceed further 
  so RunTime error occur 

    //OS main functions:-
      🟢
        int main ( )          //int main is standard declaration
        {
            return 0;  //imp to return '0' in int main (int = integer)
        }
        
        void main( )
        {
                    //in void we don't need to return anything coz its (void = nothing)
        }



*/