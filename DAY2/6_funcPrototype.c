// Modern C standards requires explicit function definition (prototype) if that particular function is called before function decleartion.
// That means if you are calling a function first and then in later code has it's implementation, in such scenario you must define function prototype before actually calling that function. 

#include<stdio.h>

int main(int argv, char** argc){

    float result= myFunc();
    printf("%f", result);

    return 0;
}

float myFunc(){
    return 10.1;
}

// in above program, function `myFunc()` doesn't have any prototype defined before it is actually called. As a result compiler just assumes it return type to be default `int`. But in our case that it is not true, `myFunc()` actually returns `float`. As a mismatch compiler throws an error.

/*
#include<stdio.h>

int main(int argv, char** argc){

    float result= myFunc();
    printf("%d", result);

    return 0;
}

int myFunc(){
    return 10;
}
*/

// Then you might think this code logic is correct because if a function doesn't have any pre definition; then when it is called, by default it will have `int` as return type which match to our `myFunc()` function decleration. But you will still see an warning, cause as stated on top __Modern C standards requires explicit function definition (prototype) if that particular function is called before function decleartion.__.


// As per that statement: the program below is correct because the function `myFunc()` is declared before it is called.
/*
#include<stdio.h>

float myFunc(){
    return 10.1;
}

int main(int argv, char** argc){

    float result= myFunc();
    printf("%f", result);

    return 0;
}
*/
