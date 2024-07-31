/*
Write a C program that checks two given integers and returns true if at least one of them is 30 or if their sum is 30. 
In other words, if either of the two integers is 30 or if their sum equals 30, the program will return true.
Expected Output:

1
1
0
*/

#include <stdio.h>

int Find(int a, int b){
if(a == 30 || b == 30 || a + b == 30 ){
    return 1;
    }
    else{
        return 0;
    }
}

int main (){

    printf("%d\n",Find(25 , 5));
    printf("%d\n",Find(20, 30));
    printf("%d\n",Find(20 , 25));
    
    return 0;
}