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

int p_strlen(char *s)
{
	char *p = s;
	while( *p !='\0' )
	{
		p++;
	}
	return p - s;
}

int main()
{
	char str[] = "i hell0";
	char *p = str;		/* the arry also is a pointer that point the first postion*/
	printf("%c\n",*(p+1));
	printf("this function will count the char number\n");
	printf("the string have %d characters\n",strlen(p));
	printf("the string have %d characters\n",strlen(str));
	printf("the string have %d characters\n",strlen(&str[0]));
	printf("the string have %d characters\n",p_strlen(p));


}
