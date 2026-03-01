#include <stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void quicksort(int arr[], int l, int h){
    int low = l;
    int high = h;

    int mid = l + (h - l) / 2;
    int pivot = arr[mid];

    while(l <= h){
        while(arr[l] < pivot) l++;
        while(arr[h] > pivot) h--;

        if(l <= h){
            swap(&arr[l], &arr[h]);
            l++;
            h--;
        }
    }

    // recursion
    if(low < h) quicksort(arr, low, h);
    if(l < high) quicksort(arr, l, high);
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
