#include <stdio.h>

int linearSearch(int array[], int tarNumber, int size){
for(int i = 0; i < size; i++){
    if(tarNumber == array[i]){
        return i;
    }
}
    return -1;
}

int main(){
    
    int array[]={0,2,6,7,11,1,4,3};
    int tarNumber;
    int size = sizeof(array) / sizeof(array[0]);
    
    printf("Enter a value: ");
    scanf("%d",&tarNumber);

    int result = linearSearch(array, tarNumber, size);
    
        if(result != -1){
            printf("%d found at index %d",tarNumber,result);
        }else{
            printf("%d not found",tarNumber);
        }

    return 0;
}