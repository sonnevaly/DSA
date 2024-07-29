#include <stdio.h> //Find The Lowest Value in an Array

int main(){
    int numberList;
    int listNumber[numberList];
    int minVal = listNumber[0];
    
    
    printf("How many number in list?\nEnter: ");
    scanf("%d",&numberList);

        for(int i = 0; i < numberList; i++){
            printf("Number%d: ",i+1);
            scanf("%d",&listNumber[i]);
        }

        for(int i = 0; i < numberList; i++){
            if(numberList >= 0){
                if(listNumber[i] < minVal){
                minVal = listNumber[i];
            }
        }
    }
    printf("The lowest number: %d",minVal);

    return 0;
}