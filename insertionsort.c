#include <stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
   int arr[] = {5, 2, 8, 1, 3};
   
   int n=sizeof(arr)/sizeof(arr[0]);
   
   
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if(arr[j] < arr[j-1]){
                swap(&arr[j], &arr[j-1]);
                
            }
        }
    }
       
   
   for(int i=0;i<n;i++){
       printf("%d",arr[i]);
   }
}
