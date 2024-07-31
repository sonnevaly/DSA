/*
Write a C program to compute the sum of the two input values. 
If the two values are the same, then return triple their sum.
Expected Output:

3
12
*/

#include <stdio.h>

int test(int a, int b){
    if(a == b){
        return (a + b) * 3;
    }else {
        return a + b;
    }
}

int main(){

    printf("%d\n",test(1 , 2));
    printf("%d",test(2 , 2));

    return 0;
}