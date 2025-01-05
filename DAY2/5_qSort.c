//contd: function callback
// using qsort function provided by stdlib.h
// void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *));

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int abs_sort(const void*, const void*);

int main(int argv, char** argc){

    int arr[]= {22, 9, -4, -2, 0, -99, 102};
    int len= sizeof(arr)/sizeof(arr[0]);
    qsort(arr, len, sizeof(int), abs_sort);

    puts("");
    printf("Sorted Array interms of absolute value: \t");
    for (int i=0; i< len; i++) printf("%d\t", arr[i]);

    return 0;
}

int abs_sort(const void* val1, const void* val2){

    int Val1= abs(*((int*)val1));
    int Val2= abs(*((int*)val2));

    return Val1 > Val2;
}