#include"quiz_header.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct web
{
    char name[30];
    char pass[30];
}w;


int reg(char name[], char pass[])

  {
    
    int flag=0;
    int finalflag=0;



    FILE *fp;
    
    int n;
    int l;
    char line[255];     //to retrieve data from file
    char* pch;
    
    int nameflag=1;
   

    fp=fopen("users.txt","a+");

      
  //to check username availability
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


  if(nameflag==1)
  {
    printf("\n\n\t\t\t\t***************************");
    printf("\n\n\t\t\t\t  USERNAME AVAILABLE ");
   ;
    strcpy(w.name,name);
    strcpy(w.pass,pass);
    
    fprintf(fp, "%s,%s\n", w.name, w.pass); 

    printf("\n\n\t\t\t\t***************************");
    printf("\n\n\t\t\t\t  YOU ARE SUCCESSFULLY REGISTERED");      
    
    finalflag=1;


   }


  else
  {
    printf("\n\n\t\t\t\t***************************");
    printf("\n\n\t\t\t\t  USERNAME NOT AVAILABLE ");
    printf("\n\t\t\t\t  CHOOSE OTHER USERNAME ");
    finalflag=0;
  }

          
  return finalflag;       //returning final status

  }
  
