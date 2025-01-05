#include<stdio.h>
#include<stdarg.h>

int sum(int , ...);

int main(int argv, char** argc){

    int total= sum(4, 10, 20, 30, 40); //first parameter represent variable count
    printf("Total sum is %d.", total);

    return 0;
}

int sum(int count, ...){

    va_list args;
    va_start(args, count);

    int total= 0;
    for (int i=0; i<count; i++){
        total+= va_arg(args, int);
    }
    va_end(args);

    return total;
}