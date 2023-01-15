#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void processing(){
HANDLE hConsole;
hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
//SetConsoleTextAttribute(hConsole,241);
system("color 0A");
printf("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t           Processing   \n");
SetConsoleTextAttribute(hConsole,2);
printf("\t\t\t\t\t\t      ____________________\n");
printf("\t\t\t\t\t\t      ");
SetConsoleTextAttribute(hConsole,4);
for(int i=0;i<20;i++){
    printf("%c",178);
    usleep(100000);
    fflush(stdout);
}
system("color F9");
SetConsoleTextAttribute(hConsole,241);
}
void cinfo(){
printf("\n\t\t\t\t\t\t    ============================    \n");
printf("\t\t\t\t\t\t    =======CADT Mini-Mart=======    \n");
printf("\t\t\t\t\t\t    ============================    \n\n");
}
void listing(int option){
HANDLE hConsole;
hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
if(option==49){
    SetConsoleTextAttribute(hConsole,111);
    printf("\n\t\t\t\t\t\t\t  List of drink  \n\n");
    SetConsoleTextAttribute(hConsole,242);
printf("\t\t\t\t\t\t  ____________________________\n");
SetConsoleTextAttribute(hConsole,244);
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","Code","Product","Price");
SetConsoleTextAttribute(hConsole,242);
printf("\t\t\t\t\t\t  ____________________________\n");
SetConsoleTextAttribute(hConsole,241);
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","001","Sting","2000");
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","002","Pepsi","3000");
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","003","Coca Cola","2500");
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","004","M150","2500");
}else if(option==50){
    SetConsoleTextAttribute(hConsole,111);
    printf("\n\t\t\t\t\t\t\t  List of beer  \n\n");
    SetConsoleTextAttribute(hConsole,242);
printf("\t\t\t\t\t\t  ____________________________\n");
    SetConsoleTextAttribute(hConsole,244);
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","Code","Product","Price");
    SetConsoleTextAttribute(hConsole,242);
printf("\t\t\t\t\t\t  ____________________________\n");
    SetConsoleTextAttribute(hConsole,241);
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","007","ABC","5000");
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","008","Anchor","3000");
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","009","Tiger","2500");
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","010","Cambodia","2000");
}else if(option==51){
    SetConsoleTextAttribute(hConsole,111);
    printf("\n\t\t\t\t\t\t\t  List of food  \n\n");
    SetConsoleTextAttribute(hConsole,242);
printf("\t\t\t\t\t\t  ____________________________\n");
    SetConsoleTextAttribute(hConsole,244);
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","Code","Product","Price");
    SetConsoleTextAttribute(hConsole,242);
printf("\t\t\t\t\t\t  ____________________________\n");
    SetConsoleTextAttribute(hConsole,241);
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","011","Cake","10000");
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","012","Bread","3000");
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","013","Sandwich","5000");
printf("\t\t\t\t\t\t   %-8s%-12s%-10s\n","014","Egg","1000");
    }
}
void line(){
HANDLE hConsole;
hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(hConsole,244);
   printf("\t\t\t\t\t\t  ");
for(int i=0;i<29;i++){
printf("%c",22);
}
printf(" ");
SetConsoleTextAttribute(hConsole,241);
}

void option3ofOne(){

    //main function

    system("cls");
    HANDLE hConsole;
hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
system("color F9");

char cname[20],date[20];
int range=0;
SetConsoleTextAttribute(hConsole,71);
cinfo();
SetConsoleTextAttribute(hConsole,241);
printf("\t\t\t\t\t\tDate : ");scanf(" %s",&date);fflush(stdin);
printf("\t\t\t\t\t\tCustomer's name : ");gets(cname);

dispaly_again:
usleep(20000);
fflush(stdout);


char code[20][20],name[20][20];
float total[20],price[20];
int i=1,count=0,qty[20];
start:
system("cls");
SetConsoleTextAttribute(hConsole,175);
printf("\n\n\t\t\t\t\t\tChoose option below to buy product\n");
    printf("\n\t\t\t\t\t\t");
    SetConsoleTextAttribute(hConsole,96);
    for(int i=0;i<34;i++) printf("%c",16);
    SetConsoleTextAttribute(hConsole,244);
printf("\n\n\t\t\t\t\t\t1.Drink \n\t\t\t\t\t\t2.Beer \n\t\t\t\t\t\t3.Food \n\t\t\t\t\t\t0.Exit\n");
    printf("\n\t\t\t\t\t\t");
    SetConsoleTextAttribute(hConsole,96);
    for(int i=0;i<34;i++) printf("%c",17);
    SetConsoleTextAttribute(hConsole,241);
if(i>1) printf("\n\t\t\t\t\t\tPress Enter to order...\n");
int op=getch();
if(op==13){
    system("cls");
    processing();
    goto stop;
}else if(op==48){
goto StopOption;
}else if(op!=49 && op!=50 && op!=51){
system("cls");
goto start;
}
again:
system("cls");
switch(op){
//case 0:
//goto StopOption;
//break;
case 49:
listing(49);
line();
while(i<50){
printf("\n\t\t\t\t\t\tEnter code of product to order: ");
    SetConsoleTextAttribute(hConsole,242);
    scanf("%s",&code[i]);
    SetConsoleTextAttribute(hConsole,241);
if(strcmp(code[i], "001")==0){
    price[i]=2000;
    sprintf(name[i],"Sting");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "002")==0){
    price[i]=3000;
    sprintf(name[i],"Pepsi");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "003")==0){
    price[i]=2500;
    sprintf(name[i],"Coca Cola");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "004")==0){
    price[i]=2500;
    sprintf(name[i],"M150");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "0")==0){
    SetConsoleTextAttribute(hConsole,244);
printf("\n\t\t\t\t\t\tAre you sure you wanna exit?(yes=Enter)");
    SetConsoleTextAttribute(hConsole,241);
int press=getch();
if(press==13) goto start;
else goto again;
}else{
i--;
count-=1;
SetConsoleTextAttribute(hConsole,246);
printf("\r\t\t\t\t\t\t\t    No product\n");
SetConsoleTextAttribute(hConsole,241);
}
count++;
i++;
}
    break;
case 50:

listing(50);
line();
while(i<50){
printf("\n\t\t\t\t\t\tEnter code of product to order: ");
    SetConsoleTextAttribute(hConsole,242);
    scanf("%s",&code[i]);
    SetConsoleTextAttribute(hConsole,241);
if(strcmp(code[i], "007")==0){
    price[i]=5000;
    sprintf(name[i],"ABC");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "008")==0){
    price[i]=3000;
    sprintf(name[i],"Anchor");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "009")==0){
    price[i]=2500;
    sprintf(name[i],"Tiger");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "010")==0){
    price[i]=2000;
    sprintf(name[i],"Cambodia");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "0")==0){
    SetConsoleTextAttribute(hConsole,244);
printf("\n\t\t\t\t\t\tAre you sure you wanna exit?(yes=Enter)");
    SetConsoleTextAttribute(hConsole,241);
int press=getch();
if(press==13) goto start;
else goto again;
}else{
i--;
count-=1;
SetConsoleTextAttribute(hConsole,246);
printf("\r\t\t\t\t\t\t\t    No product\n");
SetConsoleTextAttribute(hConsole,241);
}
count++;
i++;
}
    break;
case 51:
listing(51);
line();
while(i<50){
printf("\n\t\t\t\t\t\tEnter code of product to order: ");
    SetConsoleTextAttribute(hConsole,242);
    scanf("%s",&code[i]);
    SetConsoleTextAttribute(hConsole,241);

if(strcmp(code[i], "011")==0){
    price[i]=10000;
    sprintf(name[i],"Cake");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "012")==0){
    price[i]=3000;
    sprintf(name[i],"Bread");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "013")==0){
    price[i]=5000;
    sprintf(name[i],"Sanvich");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "014")==0){
    price[i]=1000;
    sprintf(name[i],"Egg");
    printf("\t\t\t\t\t\tQuantity: ");scanf("%d",&qty[i]);
    total[i]=qty[i]*price[i];
}else if(strcmp(code[i], "0")==0){
    SetConsoleTextAttribute(hConsole,244);
printf("\n\t\t\t\t\t\tAre you sure you wanna exit?(yes=Enter)");
    SetConsoleTextAttribute(hConsole,241);
int press=getch();
if(press==13) goto start;
else goto again;
}else{
i--;
count-=1;
SetConsoleTextAttribute(hConsole,246);
printf("\r\t\t\t\t\t\t\t    No product\n");
SetConsoleTextAttribute(hConsole,241);
}
count++;
i++;
}
    break;
default :
    printf("\t\tNone\n");
    break;
}

float payment=0;
stop:
//dispaly_again:
    system("cls");
    SetConsoleTextAttribute(hConsole,241);
printf("\n\t\t\t\t\t\t       ======INVOICE=======\n\n");
    SetConsoleTextAttribute(hConsole,6);

printf("\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",201,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);

printf("\t\t\t    %c%-7s%c%-15s%c%-13s%c%-18s%c%-16s%c    \n",186," Code",186,"     Name",186,"   Quantity",186,"    Unit Price",186,"  Total prcie",186);
printf("\t\t\t    %c_______%c_______________%c_____________%c__________________%c________________%c    \n",186,186,186,186,186,186);
for(int i=1;i<=count;i++){
printf("\t\t\t    %c%-7s%c%-15s%c%-13d%c%-14.2f R  %c%-11.2f  R  %c    \n",186,code[i],186,name[i],186,qty[i],186,price[i],186,total[i],186);
payment+=total[i];
}
printf("\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",200,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
printf("\t\t\t    %56s %c%-13.2fR  %c    \n","Total",186,payment,186);
printf("\t\t\t    %56s %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n"," ",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
range++;
SetConsoleTextAttribute(hConsole,241);
//************************************************
FILE *fp;
fp=fopen("ordered product.txt","w");
fprintf(fp,"\n\t\t\t    ======INVOICE=======\n\n");
fprintf(fp," No : 0000%d\n",range);
fprintf(fp,"  _________________________________________________________________________\n");
fprintf(fp," |%-7s|%-15s|%-13s|%-18s|%-16s|\n"," Code","     Name","   Quantity","    Unit Price","  Total prcie");
fprintf(fp," |_______|_______________|_____________|__________________|________________|\n");
for(int i=1;i<=count;i++){
fprintf(fp," |%-7s|%-15s|%-13d|%-14.2f R  |%-11.2f  R  |\n",code[i],name[i],qty[i],price[i],total[i]);
}
fprintf(fp," |_______|_______________|_____________|__________________|________________|\n");
fprintf(fp," %56s |%-13.2fR  |\n","Total",payment);
fprintf(fp," %56s |________________|\n"," ");
fprintf(fp," Date : %s\n",date);
fprintf(fp," Customer : %s\n\n",cname);
fclose(fp);
//************************************************
FILE *fp1;
fp1=fopen("Ordered product history.txt","a");
fprintf(fp1,"\n\t\t\t    =======History=======\n\n");
fprintf(fp1," No : 0000%d\n",range);
fprintf(fp1,"  _________________________________________________________________________\n");
fprintf(fp1," |%-7s|%-15s|%-13s|%-18s|%-16s|\n"," Code","     Name","   Quantity","    Unit Price","  Total prcie");
fprintf(fp1," |_______|_______________|_____________|__________________|________________|\n");
for(int i=1;i<=count;i++){
fprintf(fp," |%-7s|%-15s|%-13d|%-14.2f R  |%-11.2f  R  |\n",code[i],name[i],qty[i],price[i],total[i]);
}
fprintf(fp1," |_______|_______________|_____________|__________________|________________|\n");
fprintf(fp1," %56s |%-13.2fR  |\n","Total",payment);
fprintf(fp1," %56s |________________|\n"," ");
fprintf(fp1," Date : %s\n",date);
fprintf(fp1," Customer : %s\n\n",cname);
fclose(fp1);
//************************************************
re:
printf("\n\t\t\t    Do you want to exit?[Yes(y)/No(n)]\n\n");
int restart=getch();
if(restart==121){ printf("\n\n\n");
}else if(restart==110){ goto dispaly_again;} //check here
else{
goto re;}
StopOption:
printf(" ");
}


