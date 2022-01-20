#include<stdio.h>
#define ANSI_COLOR_RED "\x1b[31m"

void delay();
void new_acct();
void see();

int menu(void){
    int choice;

    printf(ANSI_COLOR_RED "\n\n\t\tWELCOME TO THE BANK BITCH\n");
    printf("\n\t\t1. Create new account\n\t\t2. View details of an existing account\n\t\t3. blah blah blah\n\n\t\tEnter your choice:");

    scanf("%d", &choice);
    delay(1);
    //system("clear");

    switch(choice)
    {
        case 1:new_acct();
        break;
        case 2:see();
        break;
    }

    return 0;
}

