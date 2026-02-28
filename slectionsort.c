// Online C compiler to run C program online
#include <stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
   int arr[] = {5, 2, 8, 1, 3};
   
   int n=sizeof(arr)/sizeof(arr[0]);
   
   int low = arr[0];
   
   for (int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
               swap(&arr[i],&arr[j]);
           }
           }
           
       }
       
   
   for(int i=0;i<n;i++){
       printf("%d",arr[i]);
   }
}
