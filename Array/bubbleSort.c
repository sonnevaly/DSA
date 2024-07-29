#include <stdio.h>

int main(){
    int array[]={2,5,8,1,4,0,9,12,10,7};
    int size = sizeof(array) / sizeof(array[0]);
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(array[j] > array[j + 1]){
                int highest = array[j];
                array[j] = array[j + 1];
                array[j + 1] = highest;
            }
        }
    }
    printf("Sorted array: ");
    for(int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}