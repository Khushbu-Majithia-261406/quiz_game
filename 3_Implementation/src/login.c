#include<stdio.h>

struct web
{
    char name[30];
    char pass[30];
}w;

int login(char name[30], char pass[30])
{

int loginflag=0;
int finalflag;

//char name[30],pass[30];
FILE *fp;
fp=fopen("users.txt","r");
//int checku,checkp;
int flag=0;
  char line[100];
  //const char* val1;
  //const char*val2;
  char *pch;
  



        int f=0;
   int nameflag=1;
   int passflag=1;
  



//to check username
while ( fgets (line , 100 , fp) != NULL ) {
  
  nameflag=1;
       pch = strtok (line,",");
       
       
       int l=strlen(pch);   
         
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
             
 while ( fgets (line , 100 , fp) != NULL ) {
       
passflag=1;
       pch = strtok (line,",");
       
           
           
           i++;

         pch = strtok (NULL, ",");
         
         if(i%2==0)
           {
              
  
         int l2=strlen(pch);
         

        for(int k=0;k<l2-1;k++)
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
          printf("\n\n\t\t\t\t  YOU ARE SUCCESSFULLY LOGIN");
          finalflag=1; 
        }


        else
        {
          printf("\n\n\t\t\t\t  INVALID USERNAME OR PASSWORD");
          finalflag=0;
    }


    if(finalflag==1)
    return 0;

    else
    return 0;
       }