#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include"option3ofOne.h"

 void wel_in_opt1(){
     HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hConsole,11);
    printf("\n\t\t\t\t\t\t    **************************    \n");
    printf("\t\t\t\t\t\t    ** WELCOME TO CADT-SHOP **    \n");
    printf("\t\t\t\t\t\t    **************************    \n");
    SetConsoleTextAttribute(hConsole,241);
}

void optionOne(){
    HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
int count=0;
double total1;       //problem of total1 is solved in line 67
    startopt1:
   // re:           //press item=0 in opt1 of option1 to start here

    system("cls");
    printf("\t\t\t\t\t\t\t****************\n");
    printf("\t\t\t\t\t\t\t*** SHOPPING ***\n");
    printf("\t\t\t\t\t\t\t****************\n");
int option1;
printf("\n\t\t\t\t\t\t");
    SetConsoleTextAttribute(hConsole,96);
    for(int i=0;i<34;i++) printf("%c",16);
    SetConsoleTextAttribute(hConsole,244);
printf("\n\n\t\t\t\t\t\t1.Invoice \n\t\t\t\t\t\t2.Visit last invoice \n\t\t\t\t\t\t3.Order product\n\t\t\t\t\t\t0. Exit\n");
printf("\n\t\t\t\t\t\t");
    SetConsoleTextAttribute(hConsole,96);
    for(int i=0;i<34;i++) printf("%c",17);
    SetConsoleTextAttribute(hConsole,241);
printf("\n\n\t\t\t\t\t\tSelect one option>>");
scanf(" %d", &option1);
int exitOpt1;
//variable in case 1 and 2
int qty[5],dis,item;
char name[20][20],code[5][5];
double price[5],total[5],payment;
char date[20],cName[20];

switch(option1){
case 0:
    break;
a1:
case 1:{
total1=0;         //to make the new invoice correct
    system("cls");
    system(" color F1");

    wel_in_opt1();
//algorithm
SetConsoleTextAttribute(hConsole,245);
printf("\n\n\t\t\t\t\t\t       How many items?(1-5)>>");  //i want to fix this. when we press 0 and go to Last invoice has a problem bcoz(item=0)
SetConsoleTextAttribute(hConsole,241);
scanf(" %d",&item);
if(item==0) goto startopt1;

printf("\n\t\t\t\t\t\t     Press ENTER to continue...");
getch();
system("cls");
    wel_in_opt1();
    printf("\n\n\t\t\t\t\t\t Date:");scanf(" %s", &date);fflush(stdin);
    printf("\t\t\t\t\t\t Customer's Name:");gets(cName);
    for(int i=0;i<item;i++){
    system("cls");
    wel_in_opt1();
    SetConsoleTextAttribute(hConsole,244);
    printf("\n\t\t\t\t\t    ========INPUT INFORMATION OF ITEM%d========\n\n",i+1);
    SetConsoleTextAttribute(hConsole,241);
	printf("\t\t\t\t\t\t Code     :");
	scanf(" %s", &code[i]);fflush(stdin);
	printf("\t\t\t\t\t\t Name     :");
	gets(name[i]);fflush(stdin);
	printf("\t\t\t\t\t\t Quantity :");
	scanf(" %d", &qty[i]);
	printf("\t\t\t\t\t\t Price    :");
	scanf(" %lf", &price[i]);
	printf("\n\n");
    }
    system("cls");
    wel_in_opt1();

    printf("\n\n\t\t\t\t\t\t Discount:");     //check this part again if possible
	scanf(" %d", &dis);
//a1:
system("cls");
    SetConsoleTextAttribute(hConsole,11);
	printf("\t\t\t\t\t\t=====================\n");
    printf("\t\t\t\t\t\t>>>>>>>INVOICE<<<<<<<\n");
    printf("\t\t\t\t\t\t=====================\n");
        SetConsoleTextAttribute(hConsole,244);
for(int i=0;i<item;i++){
        printf("\n\t\t\t\t\t\t========ITEM%d========\n\n",i+1);
        SetConsoleTextAttribute(hConsole,241);
	printf("\t\t\t\t\t    Code     : %s\n", code[i]);
	printf("\t\t\t\t\t    Name     : %s\n", name[i]);
	printf("\t\t\t\t\t    Quantity : %d\n", qty[i]);
	printf("\t\t\t\t\t    Price    : %.2lf Riel\n", price[i]);

	total[i]=price[i]*(double)qty[i];
	total1+=total[i];
}
    SetConsoleTextAttribute(hConsole,244);
	payment=total1-(total1*(double)dis/100);
	printf("\n\t\t\t\t\t   ----------------------------\n");
	SetConsoleTextAttribute(hConsole,241);
    printf("\t\t\t\t\t    Date     : %s\n",date);
    printf("\t\t\t\t\t    Customer : %s\n",cName);
    SetConsoleTextAttribute(hConsole,244);
    printf("\t\t\t\t\t   ----------------------------");
    SetConsoleTextAttribute(hConsole,241);
	printf("\n\t\t\t\t\t    Total    = %.2lf Riel\n", total1);
	printf("\t\t\t\t\t    Discount = %d%%\n", dis);
	printf("\t\t\t\t\t    Payment  = %.2lf Riel\n\n", payment);
    count++;
//******************************************************************************
FILE *fp;
fp=fopen("Invoice 1.txt","w");
    fprintf(fp,"\t\t=====================\n");
    fprintf(fp,"\t\t>>>>>>>INVOICE<<<<<<<\n");
    fprintf(fp,"\t\t=====================\n\n");
for(int i=0;i<item;i++){
        fprintf(fp,"\n\t\t========ITEM%d========\n\n",i+1);
	fprintf(fp," Code     : %s\n", code[i]);
	fprintf(fp," Name     : %s\n", name[i]);
	fprintf(fp," Quantity : %d\n", qty[i]);
	fprintf(fp," Price    : %.2lf Riel\n", price[i]);
}
	fprintf(fp,"\n------------------------------------------------\n");
    fprintf(fp," Date     : %s\n",date);
    fprintf(fp," Customer : %s\n",cName);
    fprintf(fp,"-------------------------------------------------");
	fprintf(fp,"\n Total    = %.2lf Riel\n", total1);
	fprintf(fp," Discount = %d%%\n", dis);
	fprintf(fp," Payment  = %.2lf Riel\n\n", payment);
	fprintf(fp,"\n Thank You!!!\n");
	fprintf(fp,"__________________________________________________\n\n");
    fclose(fp);
//******************************************************************************
    //*********************************************
  FILE *fp1;
  fp1=fopen("Invoice1 history.txt","a");
    fprintf(fp1,"\t\t=============================\n");
    fprintf(fp1,"\t\t=======Invoice History=======\n");
    fprintf(fp1,"\t\t=============================\n\n");
    fprintf(fp1," Date     : %s\n",date);
    fprintf(fp1," Customer : %s\n",cName);
    fprintf(fp1,"-------------------------------------------------------\n");
    if(count!=0){
    for(int i=0;i<item;i++){
    fprintf(fp1,"\t\t      >>>>>ITEM%d<<<<<\n",i+1);
	fprintf(fp1," Code     : %s\n",code[i]);
	fprintf(fp1," Name     : %s\n",name[i]);
	fprintf(fp1," Quantity : %d\n",qty[i]);
	fprintf(fp1," Price    : %.2lf Riel\n",price[i]);
	fprintf(fp1,"\n");
    }
    fprintf(fp1,"-------------------------------------------------------\n");
	fprintf(fp1," Discount = %d%%\n", dis);
	fprintf(fp1," Total    = %.2lf Riel\n", total1);
	fprintf(fp1," Payment  = %.2lf Riel\n\n", payment);
    }else if(count==0){
    fprintf(fp1,"\t\t====Have No Data====\n");
    }
    fclose(fp1);
    //*********************************************
    SetConsoleTextAttribute(hConsole,243);
    printf("\t\t\t\t\tDo you want to exit or make new invoice?(EXIT=0,NEW=1)>>");
    SetConsoleTextAttribute(hConsole,241);
    scanf(" %d", &exitOpt1);
    if(exitOpt1==0) goto startopt1;    //yes
    if(exitOpt1==1) goto a1;           //no
     break;
  }
b1:
case 2:{
    system("cls");
    if(count!=0){
    system(" color F1");
    SetConsoleTextAttribute(hConsole,11);
    printf("\t\t\t\t\t\t   ==========================   \n");
    printf("\t\t\t\t\t\t   =======Last Invoice=======   \n");
    printf("\t\t\t\t\t\t   ==========================   \n\n");
    SetConsoleTextAttribute(hConsole,244);
    printf("\t\t\t\t\t\t Date     : %s\n",date);
    printf("\t\t\t\t\t\t Customer : %s\n",cName);
    SetConsoleTextAttribute(hConsole,241);
    printf("\t\t\t\t\t\t--------------------------------\n");
    SetConsoleTextAttribute(hConsole,245);
    for(int i=0;i<item;i++){
    printf("\t\t\t\t\t\t         >>>>>ITEM%d<<<<<\n",i+1);
    SetConsoleTextAttribute(hConsole,244);
	printf("\t\t\t\t\t\t Code     : %s\n",code[i]);
	printf("\t\t\t\t\t\t Name     : %s\n",name[i]);
	printf("\t\t\t\t\t\t Quantity : %d\n",qty[i]);
	printf("\t\t\t\t\t\t Price    : %.2lf Riel\n",price[i]);
	printf("\n");
    }
    SetConsoleTextAttribute(hConsole,241);
    printf("\t\t\t\t\t\t--------------------------------\n");
    SetConsoleTextAttribute(hConsole,244);
	printf("\t\t\t\t\t\t Discount = %d%%\n", dis);
	printf("\t\t\t\t\t\t Total    = %.2lf Riel\n", total1);
	printf("\t\t\t\t\t\t Payment  = %.2lf Riel\n\n", payment);
	SetConsoleTextAttribute(hConsole,241);
    }else if(count==0){
    printf("\n\n\n\t\t\t\t\t\t\t====Have No Data====\n\n\n\n");
    }

    SetConsoleTextAttribute(hConsole,243);
    printf("\t\t\t\t\t\t Do you want to exit?(yes=0/no=1)>>");
    SetConsoleTextAttribute(hConsole,241);
    scanf(" %d", &exitOpt1);
    if(exitOpt1==0) goto startopt1;
    if(exitOpt1==1) goto b1;
    break;
    }
case 3:{
option3ofOne();
goto startopt1;
    break;
    }
  }
}

