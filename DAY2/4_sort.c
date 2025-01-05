//contd: function callback
// program to sort an array in either ascending or descending order using the mechanism of function callback.

#include<stdio.h>
#include<stdbool.h>
#define SIZE 10

typedef int (*rank)(int, int);

int asc(int, int);
int desc(int, int);
void swap(int*, int*);
void bubble_sort(int*, int, rank);

int main(int argv, char** argc){

    int arr[SIZE], len;
    printf("Enter the total numbers of element you want to arrange: ");
    scanf("%d", &len);

    printf("Enter values: ");
    for (int i= 0; i< len; i++)
    {
        scanf("%d", &arr[i]);
    }

    puts("");
    printf("Before sorting:\n");
    for(int i= 0; i< len; i++) printf("%d\t", arr[i]);
    puts("");

    bubble_sort(arr, len, asc);
    printf("Ascending:\n");
    for(int i= 0; i< len; i++) printf("%d\t", arr[i]);
    puts("");

    bubble_sort(arr, len, desc);
    printf("Descending:\n");
    for(int i= 0; i< len; i++) printf("%d\t", arr[i]);
    puts("");


    return 0;
}

void bubble_sort(int* arr, int len, rank ptr){
    for(int i=0; i<len-1; i++)
    {
        bool flag= false;
        for(int j=0; j<len-i-1; j++)
        {
            if(ptr(arr[j], arr[j+1]))
            {
                swap(&arr[j], &arr[j+1]);
                flag= true;
            }
        }
        if(!flag) return;
    }
}

void swap(int* val1, int* val2){
    int temp= *val1;
    *val1= *val2;
    *val2= temp;
}

int asc(int val1, int val2){
    return val1> val2;
}

int desc(int val1, int val2){
    return val2> val1;
}

// the overall workflow is inefficient since after sorting array in ascedning order we can simply reverse it instead of performing entire bubble sort.