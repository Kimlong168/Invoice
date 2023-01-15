
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void login(){
    HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);

system(" color F1");
printf("\n\n\n\t\t\t\t\t\t============================\n");
printf("\t\t\t\t\t\t===WELCOME TO OUR PROJECT===\n");
printf("\t\t\t\t\t\t============================\n");
SetConsoleTextAttribute(hConsole,244);
printf("\n\n\t\t\t\t\t     Press any keys to start the program...\n");
SetConsoleTextAttribute(hConsole,241);
getch();
//loading();
again:
system("cls");
printf("\n\n\t\t\t\t\t\t\t***********\n");
printf("\t\t\t\t\t\t\t***lOGIN***\n");
printf("\t\t\t\t\t\t\t***********\n\n");
int pass;
char username[20];
SetConsoleTextAttribute(hConsole,244);
printf("\n\t\t\t\t\t\tUSERNAME: ");
SetConsoleTextAttribute(hConsole,240);
scanf(" %s", &username);
SetConsoleTextAttribute(hConsole,244);
printf("\t\t\t\t\t\tPASSWORD: ");
SetConsoleTextAttribute(hConsole,240);
scanf(" %d", &pass);
if(strcmp(username, "cadt")==0 && pass==1111){
        SetConsoleTextAttribute(hConsole,250);
        printf("\n\n\t\t\t\t\t\t>>>>>Login sucessfully<<<<<\n");
        SetConsoleTextAttribute(hConsole,241);
        sleep(1);
        fflush(stdout);
        //getch();
}else{
        SetConsoleTextAttribute(hConsole,244);
        printf("\n\t\t\t\t\t  Check your password and username again!!!");
        SetConsoleTextAttribute(hConsole,241);
        getch();
        goto again;
 }

}

