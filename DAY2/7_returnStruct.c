#include<stdio.h>
typedef struct Person{
    char* name;
    int age;
    _Bool eligible;
}Person;

Person create_struct(char*, int, _Bool);

int main(int argv, char** argc){

    Person person1= create_struct("Hari", 12, 0);

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    (person1.eligible)? printf("Eligible to vote"): printf("Not eligible to vote.");

    return 0;
}

Person create_struct(char* name, int age, _Bool eligible){
    Person new;
    new.name= name;
    new.age= age;
    new.eligible= eligible;

    return new;
}

// Struct is not similar to array in a sense that when you try to return an array to a calling function it only returns memory address i.e pointer, but incase of struct it returns entire copy of struct to the calling function, similar to what happens with other primitive data types (int, float, char).