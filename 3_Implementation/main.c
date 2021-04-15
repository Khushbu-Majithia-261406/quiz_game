#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include "quiz_header.h"
#include "test_quiz.h"

int f=0;

int main()
{


    char choice;
    char name[30], pass[30];
    int then;


    //test the system only if user has entered the first time
    if(f==0)
    {  
        test_main();
    } 


    
    printf("\n\n\t\t\t\tWELCOME");
    printf("\n\t\t\t\t=====================");
    printf("\n\n\t\t\t1. REGISTER\t\t2. LOGIN");

    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%c",&choice);



    if(choice=='1')
    {

        registerzone:
        printf("\n\n\n\n\n\t\t\t\tWELCOME TO THE REGISTER ZONE");


        printf("\n\t\t\t\t=====================");

        printf("\n\n\n\t\t\t\tSET YOUR USERNAME ");
        scanf("%s",name);

        printf("\n\n\n\t\t\t\tSET YOUR PASSWORD ");
        scanf("%s",pass);


       
        //registering user to the system
        int (*fp1)(char[], char[])=&reg;
        int flag1=(*fp1)(name,pass);

        //username not avaialable
        if(flag1==0)
        goto registerzone;
 }



else if(choice=='2')
{

    system("cls");


    loginzone:
    printf("\n\n\t\t\t\t***************************");
    printf("\n\n\n\n\n\t\t\t\tWELCOME TO THE LOGIN ZONE");


    printf("\n\t\t\t\t=====================");

    printf("\n\n\n\t\t\t\tENTER YOUR USERNAME ");
    scanf("%s",name);

    printf("\n\n\n\t\t\t\tENTER YOUR PASSWORD ");
    scanf("%s",pass);

    //validate user login credentials
    int (*fp2)(char[], char[])=&login;
    int flag2=(*fp2)(name,pass);


    //invalid credentials
    if(flag2==0)
    {
        
        goto loginzone;
    }


    //valid credentials
    else
    {
        void (*fp3)()=&play_game;
        (*fp3)(name,pass);
    
    }

}


else
{
printf("\n\n\t\t\t\tENTER FROM GIVEN CHOICES ONLY");
f=1;  //so that the project is not tested again
main();
}


}
