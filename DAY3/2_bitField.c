// While using struct and unions we can specify the number of bits that a variable can represent instead of allocating default size like 2, 4 bytes. It is used to optimize the overall memory uses.

#include<stdio.h>
#define LOOP 20
#pragma pack(1)

struct Flags{
    int states: 3;          // it will only occupy 3 bits in max i.e, -4[-2^(n-2)] -> 3[2^(n-2) -1] in case of signed int 
    unsigned int isOn: 1;   // it will only occupy 1 bt in max i.e, 1[2^n -1] [0, 1]
};

int main(int argc, char** argv){

    struct Flags new_flag= {0, 0};

    // loops over the value it can hold
    for(int i= 0; i< LOOP; i++)
    {
        printf("%d\t%u\n", new_flag.states, new_flag.isOn);
        new_flag.states ++;
        new_flag.isOn++;
    }

    printf("Size of struct Flags= %zu", sizeof(new_flag));  // Size of struct Flags= 4

    return 0;
}

/*
 size without bitfield= 8 bytes
 size with bitfield= 4 bytes which corresponds to number of bytes in word of 32 bit system
*/