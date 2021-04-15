#include"quiz_header.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void play_game()
{

    
    char userans[10];
    char ch;
    int a;
    

    firstpage:
    printf("\n\n\t\t\t\tWELCOME TO QUIZ GAME");

    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^");
    int choice;
    
    printf("\n\n\t\t\t\t1. VIEW INSTRUCTIONS");

    printf("\n\n\t\t\t\t2. ATTEMPT QUIZ");

    printf("\n\n\t\t\t\t3. EXIT\n");
    scanf("\n%d", &choice);

    switch(choice)
    {
        case 1:
        view_instructions();
        break;
        
        case 2:
        attempt_quiz();
        break;

        case 3:
        quit();
        break;

        default:
        printf("\n\n\t\t\t\tENTER FROM GIVEN CHOICES ONLY\n");
        goto firstpage;
    }

}


    void view_instructions()
    {
        char anychar;
        printf("\n\n\t\t\t\t****************");

        printf("\n\n\t\t\t\tYOU HAVE TOTAL 5 QUESTIONS TO SOLVE RELATED TO C PROGRAMMING LANGUAAGE.");
        printf("\n\n\t\t\t\tTEST YOUR KNOWLEDGE NOW");
        printf("\n\n\t\t\t\tANSWER WITH THE OPTION NO. ONLY IN CAPITAL LETTERS");
        printf("\n\n\t\t\t\tALL THE BEST");

        printf("\n\n\t\t\t\t****************");
        play_game();  //going back to quiz game menu zone

        
    }

    void quit()
    {
        printf("\n\n\t\t\t\t****************");
        printf("\n\n\t\t\t\tHOPE YOU ENJOYED!!! BYE");
        printf("\n\n\t\t\t\t****************");
        
    }


   
   void attempt_quiz()
    {
        
        int score=0;
        char actualans[]={'C','A','C','A','C'};
        int i=0;
        char ans;
        char c;
        

        //question-1
        q1:
            printf("\n\n 1. Which of the following is not a valid variable name declaration?");
		printf("\n\nA. int _a3;\t\tB. int a_3;\n\nC. int 3_a;\t\tD. int _3a\n");
		scanf("\n%c", &ans);

		
        

        if(ans==actualans[i])
        {
            printf("\n\n\t\t\t\t****************");
             printf("\n\n\t\t\t\tCORRECT");
            printf("\n\n\t\t\t\t****************");
            score++;
        }

        else if(ans!='A' && ans!='B' && ans!='C' && ans!='D')
        {
            printf("\n\n\t\t\t\t****************");
            printf("\n\n\t\t\t\tCHOOSE FROM GIVEN 4 OPTIONS");
            printf("\n\n\t\t\t\t****************");
        
            goto q1;
        }
        else
        {
           printf("\n\n\t\t\t\t****************");
           printf("\n\n\t\t\t\tSORRY ACTUAL ANS IS %c", actualans[i]);
           printf("\n\n\t\t\t\t****************");
        }
        i++;
        


//question-2
    q2:
        printf("\n\n 2. What is required in each C program?");
		printf("\n\nA. The program must have at least one function.\t\tB. The program does not require any function.\n\nC. Input data\t\tD. Output data\n");
		scanf("\n%c", &ans);
		
        

        if(ans==actualans[i])
        {
           printf("\n\n\t\t\t\t****************");
           printf("\n\n\t\t\t\tCORRECT");
           printf("\n\n\t\t\t\t****************");
            
            score++;
        }

        else if(ans!='A' && ans!='B' && ans!='C' && ans!='D')
        {
            printf("\n\n\t\t\t\t****************");
            printf("\n\n\t\t\t\tCHOOSE FROM GIVEN 4 OPTIONS");
            printf("\n\n\t\t\t\t****************");
            goto q2;
        }

        else
        {
           printf("\n\n\t\t\t\t****************");
           printf("\n\n\t\t\t\tSORRY ACTUAL ANS IS %c", actualans[i]);
           printf("\n\n\t\t\t\t****************");
        }
        i++;
        


//question-3
        q3:
            printf("\n\n 3. In the C language, the constant is defined _______.");
		printf("\n\nA. Before main\t\tB. After main\n\nC. Anywhere, but starting on a new line\t\tD. None of the these.\n");
		scanf("\n%c", &ans);
		
        

        if(ans==actualans[i])
        {
            printf("\n\n\t\t\t\t****************");
            printf("\n\n\t\t\t\tCORRECT");
            printf("\n\n\t\t\t\t****************");
            score++;
        }

        else if(ans!='A' && ans!='B' && ans!='C' && ans!='D')
        {
            printf("\n\n\t\t\t\t****************");
            printf("\n\n\t\t\t\tCHOOSE FROM GIVEN 4 OPTIONS");
            printf("\n\n\t\t\t\t****************");
            goto q3;
        }
   
   
        else
        {
             printf("\n\n\t\t\t\t****************");
             printf("\n\n\t\t\t\tSORRY ACTUAL ANS IS %c", actualans[i]);
            printf("\n\n\t\t\t\t****************");
        }
        i++;
        


//question-4
        q4:
            printf("\n\n 4. Directives are translated by the_");
		printf("\n\nA. Pre-processor\t\tB. Compiler\n\nC. Linker\t\tD. Editor\n");
		scanf("\n%c", &ans);
		
        

        if(ans==actualans[i])
        {
            printf("\n\n\t\t\t\t****************");
            printf("\n\n\t\t\t\tCORRECT");
            printf("\n\n\t\t\t\t****************");
            score++;
        }

        else if(ans!='A' && ans!='B' && ans!='C' && ans!='D')
        {
            printf("\n\n\t\t\t\t****************");
            printf("\n\n\t\t\t\tCHOOSE FROM GIVEN 4 OPTIONS");
            printf("\n\n\t\t\t\t****************");
            goto q4;
        }
        else
        {
            printf("\n\n\t\t\t\t****************");
            printf("\n\n\t\t\t\tSORRY ACTUAL ANS IS %c", actualans[i]);
            printf("\n\n\t\t\t\t****************");
        }
        i++;
        

//question-5
        q5:
            printf("\n\n 5. Which of the following will copy the null-terminated string that is in array src into array dest?");
		printf("\n\nA. dest = src;\t\tB. dest == src;\n\nC. strcpy(dest, src);\t\tD. strcpy(src, dest);\n");
		scanf("\n%c", &ans);
		
        

        if(ans==actualans[i])
        {
           printf("\n\n\t\t\t\t****************");
            printf("\n\n\t\t\t\tCORRECT");
           printf("\n\n\t\t\t\t****************");
            score++;
        }

        else if(ans!='A' && ans!='B' && ans!='C' && ans!='D')
        {
            printf("\n\n\t\t\t\t****************");
            printf("\n\n\t\t\t\tCHOOSE FROM GIVEN 4 OPTIONS");
            printf("\n\n\t\t\t\t****************");
            goto q5;
        }
        else
        {
             printf("\n\n\t\t\t\t****************");
             printf("\n\n\t\t\t\tSORRY ACTUAL ANS IS %c", actualans[i]);
             printf("\n\n\t\t\t\t****************");
        }
        i++;
        


//get score
printf("\n\n\t\t\t\t****************");
printf("\n\n\t\t\t\tSCORE=%d", score);
printf("\n\n\t\t\t\t****************");
play_game();



}

    