//Boolean data type(_Bool) was introduced in ISO C11

/*
#include<stdio.h>
int main(int argc, char** argv)
{
    _Bool isEven= (10%2==0) ? 1:0;

    if(isEven)
        printf("10 is a even number");
    else
        printf("10 is a odd number");

    return 0;
}
*/

// Alternatively we can also use bool data type defined in <stdbool.h> header file to deal with boolean value

/*
#include<stdio.h>
#include<stdbool.h>

int main(int argv, char** argc){

    bool isEven= (10%2==0)? 1:0;

    if(isEven)
        printf("10 is a even number");
    else
        printf("10 is a odd number");

    return 0;
}
*/

// Even more simple approach is to use enum data type as follow:

#include<stdio.h>

int main(int argv, char** argc){

    typedef enum {false, true} bool;

    bool isEven= false;

    if(isEven)
        printf("10 is a even number");
    else
        printf("10 is a odd number");

    return 0;
    
}

// At last if nothing fits then macro can also be used to deal with boolean data type