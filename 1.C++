#include <stdio.h>
int main(){
    int arr[6] = {3,7,3,8,4,9};
    int k;
    int i;

    printf("Enter the value to search:");
    scanf("%d", &k);

    for(i = 0; i<6 ; i++){
        if(arr[i] == k){
            printf("Element found at index %d", i);
            return 0;
        }

    }
    printf("Not Found");
    return 0;

}