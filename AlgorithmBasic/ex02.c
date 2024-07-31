/*
Write a C program that will take a number as input and find the absolute difference between the input number and 51.
 If the input number is greater than 51, it will return triple the absolute difference.
Expected Output:

6
21
0
*/

#include <stdio.h>

int Find(int n){
    const int x = 51;
    if(n > x){
        return (n - x)  * 3;
    }else{
        return x - n;
    }
}

int main(){

    printf("%d\n",Find(53));
    printf("%d\n",Find(30));
    printf("%d",Find(51));

    return 0;
}

