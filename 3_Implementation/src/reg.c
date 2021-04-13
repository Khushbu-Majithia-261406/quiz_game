#include<stdio.h>
#include<string.h>

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
    //char name[30];
    //char pass[30];
    int n;
    char line[255];
      // const char* val1;
       //const char* val2;
       char* pch;
    //int regflag=0;
    int nameflag=1;
   // char c,*username[30], *pwd[30]; 

    fp=fopen("users.txt","a+");

    
//to check username availability
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

if(nameflag==1)
{
  printf("\n\n\t\t\t\t  USERNAME AVAILABLE ");

     strcpy(w.name,name);
     
      
     strcpy(w.pass,pass);

    fprintf(fp, "%s,%s\n", w.name, w.pass); 
    printf("\n\n\t\t\t\t  YOU ARE SUCCESSFULLY REGISTERED");      
         
         finalflag=1;

        
   }


else
{
  printf("\n\n\t\t\t\t  USERNAME NOT AVAILABLE ");
  finalflag=0;
}

          

            

        
  return finalflag;
  }
  


int main()
{
  char name[30], pass[30];
  scanf("%s", name);
  scanf("%s", pass);

  int ans=reg(name,pass);
  printf("\n %d\n", ans);
}