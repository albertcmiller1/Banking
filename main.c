#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ANSI_COLOR_RED "\x1b[31m"

void menu();
void delay();
void new_acct();
void edit();


int main(){
    menu();
    return 1;
}


void menu(void){
    int choice;

    printf(ANSI_COLOR_RED "\n\n\t\tWELCOME TO THE BANK BITCH\n");
    printf("\n\n\t\t1. Create new account\n\t\t2. Update Information of existing account\n\t\t3. Check details of existing account\n\t\tEnter your choice:");

    scanf("%d", &choice);
    delay(2);
    system("clear");

    switch(choice)
    {
        case 1:new_acct();
        break;
        case 2:edit();
        break;
    }
}


void new_acct(){
    printf("welcome to the new account function");
}

void edit(){
    printf("welcome to the edit function");
}



void delay(int seconds){
   int clocks = CLOCKS_PER_SEC * seconds; 
   clock_t start_time = clock();
   int end_time = start_time + clocks;
   while (clock() < end_time){}
}

