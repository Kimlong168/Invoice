#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void optionTwo(){
 startopt2:
    system("cls");
    printf("\t\t****************\n");
    printf("\t\t** OPTION TWO **\n");
    printf("\t\t****************\n");
    printf("1.game1\n2.game2\n3.game3\n0. Exit\n");

    int option2;
    printf("\n\n===Choose option ===\n");
    scanf(" %d", &option2);
    int exitOpt2;
    switch(option2){
case 0:
    break;
a2:
case 1:{
system("cls");
printf("we have not built yet1\n");
printf(" Do you want to exit?(yes=0/no=1)\n");
scanf(" %d", &exitOpt2);
if(exitOpt2==0) goto startopt2;
if(exitOpt2==1) goto a2;
break;
}
b2:
case 2:{
system("cls");
printf("we have not built yet2\n");
printf(" Do you want to exit?(yes=0/no=1)\n");
scanf(" %d", &exitOpt2);
if(exitOpt2==0) goto startopt2;
if(exitOpt2==1) goto b2;
break;
}
c2:
case 3:{
system("cls");
printf("we have not built yet3\n");
printf(" Do you want to exit?(yes=0/no=1)\n");
scanf(" %d", &exitOpt2);
if(exitOpt2==0) goto startopt2;
if(exitOpt2==1) goto c2;
break;
}

    }
}

