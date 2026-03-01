#include <stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// simple sorting (selection style)
void sorting(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(&a[i],&a[j]);
            }
        }
    }
}

// merge two sorted arrays
void mergesort(int arr1[], int n, int arr2[], int m){
    int arr[n+m];

    // sort both arrays first
    sorting(arr1, n);
    sorting(arr2, m);

    int i=0, j=0, k=0;

    // merge logic
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }

    // remaining elements
    while(i<n){
        arr[k++] = arr1[i++];
    }

    while(j<m){
        arr[k++] = arr2[j++];
    }

    // print merged array
    printf("Merged array: ");
    for(int x=0; x<n+m; x++){
        printf("%d ", arr[x]);
    }
}

int main() {
    int arr1[] = {5, 2, 8};
    int arr2[] = {1, 3, 7};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    mergesort(arr1, n, arr2, m);
}
