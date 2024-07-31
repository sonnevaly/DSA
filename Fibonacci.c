#include <stdio.h>

int main(){
    int Num1 = 1;
    int Num2 = 0;
    int Sum;

        for(int i = 0; i < 18; i++){
            Sum = Num1 + Num2;
            printf("%d\n",Sum);
            Num2 = Num1;
            Num1 = Sum;
        }
    
    return 0;
}