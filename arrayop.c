#include <stdio.h>

int arr[100];
int n=0;

void push(int val,int pos){
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    n++;
}

void dlt(int pos){
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

void search(int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at position %d\n",i+1);
            return;
        }
    }
    printf("Element not found\n");
}

void display(){
    if(n==0){
        printf("Array is empty\n");
        return;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int choice,val,pos,key;

    while(1){
        printf("\n1 Insert\n2 Delete\n3 Search\n4 Display\n5 Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                printf("Enter position and value: ");
                scanf("%d %d",&pos,&val);
                push(val,pos);
                break;

            case 2:
                printf("Enter position to delete: ");
                scanf("%d",&pos);
                dlt(pos);
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d",&key);
                search(key);
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
