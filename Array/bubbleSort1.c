#include <stdio.h>

int main(){
    int number;
    
        printf("How many number in list?\nEnter: ");
        scanf("%d", &number);

    int array[number];

        for(int i = 0; i < number; i++){
            printf("Enter Number%d: ",i+1);
            scanf("%d",&array[i]);
        }
        
        for(int i = 0; i < number; i++){
            for(int j = 0; j < number - 1; j++){
                if(array[j] > array[j + 1]){
                    int highest = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = highest;
                }
            }
        }
        printf("\nSorted array: ");
        for(int i = 0; i < number; i++){
            printf("%d ", array[i]);
        }
        printf("\n");
    return 0;
}