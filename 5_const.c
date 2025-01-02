// Changing the value of const data type using pointer

#include<stdio.h>
int main(int *argv, char** argc){
    const float PI= 3.14;

    printf("Initial value: %.2f\n", PI);

    float *ptr= &PI;
    *ptr= 3.69;

    printf("Changed Value: %.2f", PI);

    return 0;
}

/*
Output:
PS D:\VN\C> cd "d:\VN\C\" ; if ($?) { gcc 5_const.c -o 5_const } ; if ($?) { .\5_const }
5_const.c: In function 'main':
5_const.c:9:17: warning: initialization discards 'const' qualifier from pointer target type [-Wdiscarded-qualifiers]
     float *ptr= &PI;
                 ^
Initial value: 3.14
Changed Value: 3.69
*/