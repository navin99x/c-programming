// understanding concept of structure padding and packing

#include<stdio.h>
// #pragma pack(1)

struct Person{
    char gender;
    int age;
    char class;
};

int main(int argc, char** argv){

    printf("%zu", sizeof(struct Person));

    return 0;
}

// Even though the total size of struct Person should be 6 bytes, it uses 12 bytes. The reason for that is to save overall CPU cycle required to access the elements. This concept is known as structure padding.
// To change it's behaviour we can simply use #pragma pack(1) miscallenous directives. The overall process is known as structure packing.

/*
 Alternatively on gcc based compiler we can directly perform structure packing during it's decleration as follow: 
struct __attribute__((packed)) Person{
...
}
*/