#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int spaces,newline,tabs,input;
	spaces = 0;
	newline = 0;
	tabs = 0;
	input = 0;
	while((input = getchar()) != EOF)
	{
		if(input == '\n')
			++newline;
		if(input == '\t')
			++tabs;
		if(input == ' ')
			++spaces;
	}
	printf("Newlines = %d,\n Tabs = %d,\n Spaces = %d",newline,tabs,spaces);
	return 0;
}
