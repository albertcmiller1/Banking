#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ANSI_COLOR_RED "\x1b[31m"

int menu();
void delay();

void delay(int seconds){
   int clocks = CLOCKS_PER_SEC * seconds; 
   clock_t start_time = clock();
   int end_time = start_time + clocks;
   while (clock() < end_time){}
}

int main(){
    menu();
    return 1;
}
