#include<stdio.h>
#include<time.h>
#include<windows.h>
#define SIZE 20

struct tm *time_info;
time_t raw_time;

void currentDateTime(char *date, _Bool flag);

int main(int argc, char** argv){

    char current_time[SIZE];
    char current_date[SIZE];

    while(1)
    {
        if(GetAsyncKeyState(VK_ESCAPE)) break;      // press ESC or CTRL + C to exit program 
        currentDateTime(current_time, 0);
        currentDateTime(current_date, 1);

        // printf("\x1B[2J\x1B[H");
        system("cls");

        printf("%s\n", current_time);
        printf("%s\n", current_date);

        Sleep(1000);

    }
    return 0;
};

void currentDateTime(char *current, _Bool flag)
{
    time(&raw_time);
    time_info= localtime(&raw_time);

    char *dateTimeFormat= (flag)? ("%Y-%m-%d"): ("%H:%M:%S %p");
    strftime(current, SIZE, dateTimeFormat, time_info);
}


// https://en.cppreference.com/w/cpp/chrono/c/strftime#Format_string