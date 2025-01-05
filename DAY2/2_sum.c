//cont: Variadic Function
//find maximum value from given number of variable arguments

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<assert.h>
#include<stdarg.h>

int findMax(int , ...);

int main(int argv, char** argc){

    int max_value= findMax(0);    
    printf("Maxium value is %d.", max_value);

    return 0;
}

int findMax(int count, ...){

    if(count<1){
        fprintf(stderr, "Error: Not enought arguments.");
        exit(0);
    }
    va_list args;
    va_start(args, count);

    int max= INT_MIN;
    for (int i=0; i<count; i++){
        int current_value= va_arg(args, int);

        if(current_value> max) max= current_value;
    }

    return max;
}