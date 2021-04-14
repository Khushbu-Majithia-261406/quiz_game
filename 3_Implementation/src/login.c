#include"quiz_header.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct web
{
    char name[30];
    char pass[30];
}w;

int login(char name[30], char pass[30])
{


  int finalflag;

  FILE *fp;
  fp=fopen("users.txt","r");

  int flag=0;
    char line[100];
    char *pch;
    



    int f=0;
    int nameflag=1;
    int passflag=1;
    int l;



  //to check username
  while ( fgets (line , 100 , fp) != NULL ) {
    
        nameflag=1;
          pch = strtok (line,",");
          
          int l1=strlen(name);
          int l2=strlen(pch);   
         
        if(l1>l2)
         l=l1;

         else
         l=l2;

        for(int i=0;i<l;i++)
         {
             if(name[i]==pch[i])
         {
             nameflag=0;
             
         }
         
         else
         {
             nameflag=1;
             break;
         }
         }

       if(nameflag==0)
       break;
 
}

//to set file pointer at beginning of file
rewind(fp);

//check password only if username available
         if(nameflag==0)
         {
             int i=1;
             
    while ( fgets (line , 100 , fp) != NULL ) 
    {      
        passflag=1;
        pch = strtok (line,",");  //retrieving username
        
           
           
        i++;

        pch = strtok (NULL, ",");   //retrieving password
         
        if(i%2==0)  //only check the password column
        {
              
            int l1=strlen(pass);
            int l2=strlen(pch);
                  
            if(l1>l2)
            l=l1;

            else
            l=l2;

            for(int k=0;k<l-1;k++)
            { 
        
            if(pch[k]==pass[k])
            {
                passflag=0;
                
            }
            
            
            else
            {
                passflag=1;
                
                break;
            }
       }


               

       i++;
     }
           
       if(passflag==0)
       break;
       
 }
         }
 
       
       //both username and password matched
        if(nameflag==0 && passflag==0)
        {
          printf("\n\n\t\t\t\t***************************");
          printf("\n\n\t\t\t\t  YOU ARE SUCCESSFULLY LOGIN");
          
          finalflag=1; 
        }


        else
        {
          printf("\n\n\t\t\t\t***************************");
          printf("\n\n\t\t\t\t  INVALID USERNAME OR PASSWORD");
         
          finalflag=0;
    }


    if(finalflag==1)
    return 1;

    else
    return 0;
       }