#include "quiz_header.h"

#include "stdio.h"

int main()
{
    int choice;
    char name[30], pass[30];

    welcome:
printf("\n\n\n\n\n\t\t\t\tWELCOME TO THE QUIZ GAME");


printf("\n\t\t\t\t=====================");




printf("\n\n\n\t\t\t1. REGISTER\t\t2. LOGIN");

printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");

scanf("%d",&choice);


switch(choice)

  {

    case 1: system("cls");


registerzone:
printf("\n\n\n\n\n\t\t\t\tWELCOME TO THE REGISTER ZONE");


printf("\n\t\t\t\t=====================");

printf("\n\n\n\t\t\t\tSET YOUR USERNAME ");
scanf("%s",name);

printf("\n\n\n\t\t\t\tSET YOUR PASSWORD ");
scanf("%s",pass);


//registering user to the system
int flag1=reg(name,pass);

//username not available
if(flag1==0)
{
    system("cls");
    goto registerzone;
}


//username available
else
{
    goto welcome;
}

break;

case 2: system("cls");


loginzone:
printf("\n\n\n\n\n\t\t\t\tWELCOME TO THE LOGIN ZONE");


printf("\n\t\t\t\t=====================");

printf("\n\n\n\t\t\t\tENTER YOUR USERNAME ");
scanf("%s",name);

printf("\n\n\n\t\t\t\tENTER YOUR PASSWORD ");
scanf("%s",pass);

//validate user login credentials
int flag2=login(name,pass);


//invalid credentials
if(flag2==0)
{
    system("cls");
    goto loginzone;
}

//valid credentials
else
{
    play_game();
}


default:

printf("\n\n\n\t\t\t\tENTER FROM GIVEN CHOICES ");
goto welcome;
break;
  }

}
