#include<stdio.h>
void insertion(int arr[], int *n){
    int index, value;
    printf("Enter the index to insert: ");
    scanf("%d", &index);
    if(index < 0 || index > *n){
        printf("Invalid position\n");
        return;
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    for(int i=*n; i>index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    (*n)++;
}
void deletion(int arr[], int *n, int index){
    if(index < 0 || index >= *n){
        printf("Invalid index\n");
        return;
    }
    for(int i=index; i<*n-1; i++){
        arr[i] = arr[i+1];
    }
    (*n)--;
}
void linear_search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}
int main(){
    int arr[100], n, choice, index, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    do{
        printf("\nMenu:\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Linear Search\n");
        printf("4. Display Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                insertion(arr, &n);
                printf("Array after insertion: ");
                for(int i=0; i<n; i++){
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("Enter the index to delete: ");
                scanf("%d", &index);
                deletion(arr, &n, index);
                printf("Array after deletion: ");
                for(int i=0; i<n; i++){
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Enter the element to search: ");
                scanf("%d", &key);
                linear_search(arr, n, key);
                break;
            case 4:
                printf("Array elements: ");
                for(int i=0; i<n; i++){
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }while(choice != 5);
}
