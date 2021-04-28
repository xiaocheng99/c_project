#include <stdio.h>

int strlen (char *s)
{
	int n;
	for( n= 0; *s != '\0'; s++)
	{
		n++;
	}

	return n;
}

int main()
{
	char str[] = "i hell0";
	char *p = str;		/* the arry also is a pointer that point the first postion*/
	printf("%c\n",*(p+1));
	printf("this function will count the char number\n");
	printf("the string have %d characters\n",strlen(p));
}
