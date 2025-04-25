//PROGRAM FOR BUBBLE SORT


#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of an array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i = 0; i < n; i++){
    scanf("%d", &arr[n]);

}
  // Bubble Sort 

  for(int i = 0;i < n - 1; i++){        //Here this loop is used to count the number of phases.
   for(int j = 0; j < n-i-1  ; j++){
    if(arr[j] > arr[j + 1]){
    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[ j + 1] = temp;
   }
 }
 }

  printf("After Sorting Array element are : \n");
  for(int i = 0; i < n; i++){
    printf("%d", arr[i]);
  }

  return 0;
}

