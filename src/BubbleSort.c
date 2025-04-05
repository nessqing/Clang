#include<stdio.h>

void bubbleSort(int arr[], int countArrLen){
    for(int i = 0; i < countArrLen - 1; i++){
    //第一圈是從陣列左到右的 count
        for(int j = 0 ; j < countArrLen - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr);

    //observe arr size is 28 bytes
    int test = sizeof(arr[0]);
    //observe arr[0] one element is 4 bytes
    int countArrLen = n / test;
    //--------check point--------
    printf("The sizeof arr is %d, then the siezof arr[0] is %d\n", n, test);
    printf("Finally, there have %d elements.\n", countArrLen);


    printf("Before bubble sort is : \n");
    for(int i = 0; i < countArrLen ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, countArrLen);

    printf("After bubble sort is : \n");
    for(int i = 0; i < countArrLen ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");



}