#include <stdio.h>
int main(){
    int arr[6] = {5,8,2,4,6,1};
    int temp;
    
    for(int i=0; i<6; i++){
        for(int j=0; j<6 ; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j+1] = arr[j];
                arr[j] = temp;

            }
        }
    }
   
    printf("Sorted array is: %d", arr[]);
    return 0;
}