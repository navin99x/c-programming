// understanding function callback
// defn: A function that is passed as a reference to another function argument through which it is called.

#include<stdio.h>

typedef int (*operation)(int, int);

int add(int, int);
int sub(int, int);
int mul(int, int);
int execute_operation(int, int, operation);

int main(int argv, char** argc){

    int x= 20, y=10;

    int sum= execute_operation(x, y, add);
    int deduct= execute_operation(x, y, sub);
    int product= execute_operation(x, y, mul);

    printf("Sum= %d\n", sum);
    printf("Substraction= %d\n", deduct);
    printf("Multiplication= %d\n", product);

    return 0;
}

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int execute_operation(int a, int b, operation opr){
    return opr(a, b);
}