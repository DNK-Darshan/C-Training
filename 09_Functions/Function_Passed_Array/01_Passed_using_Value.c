#include <stdio.h>

// float average(int arr[], int length);

// float average(int arr[], int length){
//    int sum = 0;
//    int i;
//    printf("Size of array in function: %ld\n", sizeof(arr));
//    for (i = 0; i < length; i++){
//       printf("arr[%d]: %d\n", i, arr[i]);
//       sum += arr[i];
//    }
//    return (float)sum / length;
// }

int main(){
   int arr[] = {10, 34, 21, 78, 5};
   int length = sizeof(arr) / sizeof(int);
   printf("Size of array: %ld\n", sizeof(arr));
   float avg = average(arr, length);
   printf("average: %.2f", avg);
}
