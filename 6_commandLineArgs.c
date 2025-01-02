#include<stdio.h>
#include<stdlib.h>

int main(int argv, char** argc){

    if(argv==3){
        int firstNum= atoi(argc[1]);
        int SecNum= atoi(argc[2]);

        int sum= firstNum + SecNum;

        printf("%d + %d = %d", firstNum, SecNum, sum);
    }

    return 0;
}