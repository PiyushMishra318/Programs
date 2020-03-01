#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main()
{
  int i,f=0;
  char str[10];
  gets(str);
  for(i=0;i<strlen(str);i++)
  {
    if(isdigit(str[i]))
    {
      
    }
    else
    {
      f=1;
    }
  }
    if(f==1)
      printf("not a constant\n");
    else
      printf("constant\n");
    if(strcmp(str,"if")==1 || strcmp(str,"else")==1 || strcmp(str,"for")==1 || strcmp(str,"while")==1)
      printf("keyword\n");
    else
      printf("not a keyword\n");
    if(strcmp(str,"int")==1 || strcmp(str,"float")==1 || strcmp(str,"double")==1 || strcmp(str,"long")==1)
      printf("identifier\n");
    else
      printf("not an identifier\n");
}
