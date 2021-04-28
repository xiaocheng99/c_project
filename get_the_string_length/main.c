#include <stdio.h>

int strlen (char *s)
{
	int n;
	for( n= 0; *s != '\0'; s++)
	{
		n++;
	}

	return 0;
}

int main()
{
	
	printf("this function will count the char number\n");
	printf("please enter the charcters:\n");
	printf("the string have %d characters\n",strlen("hello world"));
}
