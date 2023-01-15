#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include"optionOne.h"
#include"optionTwo.h"
#include"optionThree.h"
#include"login.h"
#include"loading.h"u
#include"mainDisplay.h"

int main(){
    HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    system(" color F1");
    login:
    system("cls");
    login();
    loading();
    mainScreen:
    mainDisplay();
    int selectedOpt;
    printf("\n\n\t\t\t\t\t       PLEASE SELECT(1-4,0 to exit programm):");
    scanf("%d",&selectedOpt);

    int exit;
    switch(selectedOpt){
        case 0:{
                break;
        }
        case 1:{
                optionOne();    //Shopping
                goto mainScreen;
        }
        case 2:{
                optionTwo();    //Game
                goto mainScreen;
        }
        case 3:{
                optionThree();  //View Member
                goto mainScreen;
        }
        case 4:{
            goto login;         //Lock
        }
        default :{
            SetConsoleTextAttribute(hConsole,244);
          printf("\n\n\t\t\t\t\t        >>>>>>>There is no option %d<<<<<<<<",selectedOpt);
          SetConsoleTextAttribute(hConsole,241);
          printf("\n\n\t\t\t\t\t    Please press any keys to select option again!!!");
          getch();
          goto mainScreen;
        }

     }
    printf("\n\n");

    return 0;
}
