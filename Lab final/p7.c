#include<stdio.h>

int main(){
  int n, i, j, count=0;
  printf("How many elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d integer numbers: ", n);
  for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  printf("Ascending are: ");
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
  }
   for(i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  printf("\nDescending are: ");
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
        if(arr[i]<arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
  }
   for(i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  
  int max = arr[0];
  for(j=0; j<n; j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
  printf("\nMaximum: %d", max);
  int min = arr[0];
  for(j=0; j<n; j++){
        if(arr[j]<min){
            min = arr[j];
        }
    }
  printf("\nMinimum: %d", min);
  return 0;
}