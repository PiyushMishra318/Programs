#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main()
{
  int i=0;
  char str[20];
  printf("Enter the String:\n");
  gets(str);
  while (str[i]!='\0') {
    if(str[i]=='(' || str[i]=='{')
      printf("4");
    if(str[i]=='}' || str[i]==')')
      printf("5");
    if(isdigit(str[i]))
      printf("1");
    if(ispunct(str[i]) && str[i]!='(' && str[i]!='{' && str[i]!='}' && str[i]!=')')
      printf("2");
    if(isupper(str[i]) || islower(str[i]))
      printf("3");
    i++;
  }
  return 0;
}
