#include <stdio.h>


void findCommonElements(int array1[], int n1, int array2[], int n2){
    
    int i, j;
    for(i = 0; i < n1; i++){
        
        for(j = 0; j < n2; j++){

            if(array1[i] == array2[j]){
                printf("%d", array1[i]);
            }
        }
    }
}

int main(){
    int num1, num2;
    

    printf("Enter the number for elements for array 1 : ");
    scanf("%d", &num1);
    int array1[num1];
    for(int i = 0; i < num1; i++){

        printf("Enter elements %d :", i+1);
        scanf("%d", &array1[i]);
    }

    
    printf("Enter the number for elements for array 2 : ");
    scanf("%d", &num2);    
    int array2[num2];
    for(int j = 0; j < num1; j++){

        printf("Enter elements %d: ", j+1);
        scanf("%d", &array2[j]);
    }
    findCommonElements(array1, num1, array2, num2);
    return 0;   
}