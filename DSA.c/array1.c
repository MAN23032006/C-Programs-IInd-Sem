//WAP to read and display the elements of array.
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of array:\n");
//     for( int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//      for( int i = 0; i < n; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
void printarray(int arr[], int n) {
     for( int i = 0; i < n; i++){
        printf("%d", arr[i]);
   }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for( int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
     printarray(arr,n);
     return 0;
    
}
