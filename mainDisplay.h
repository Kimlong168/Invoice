#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void mainDisplay(){
    HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    char opt[5][20] =
    {
    " 0. EXIT",
    " 1. Shopping",
    " 2. Game",
    " 3. View Member",
    " 4. LOCK"
    };
    printf("\t\t\t\t\t\t      ********************\n");
    printf("\t\t\t\t\t\t      **   MY PROJECT   **\n");
    printf("\t\t\t\t\t\t      ********************\n");
    printf("\n\t\t\t\t\t\t");
    SetConsoleTextAttribute(hConsole,111);
    for(int i=0;i<34;i++) printf("%c",16);
    printf("\n");
    SetConsoleTextAttribute(hConsole,244);
    printf("\n");
    for(int i=0; i<5;i++){
        printf("\t\t\t\t\t\t %s \n",opt[i]);
    }
    printf("\n\t\t\t\t\t\t");
    SetConsoleTextAttribute(hConsole,111);
    for(int i=0;i<34;i++) printf("%c",17);
    SetConsoleTextAttribute(hConsole,241);
}
