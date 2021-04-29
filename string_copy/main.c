#include <stdio.h>
#include <stddef.h>
#include <string.h>


/*the first version*/

void strcpy_1(char *s, char *t)
{
	int i;
	i = 0;
	while((s[i] = t[i]) !='\0')
		i++;
}

/* the second version*/
void strcpy_2(char *s ,char *t)
{
	int i=0;
	while(( *s = *t) != '\0')
	{
		s++;
		t++;
	}
}

/* the third version*/
void strcpy_3(char *s, char *t)
{
	while( *s++ = *t++ );
}

int main()
{	
	char src[10];
	char *str = src;
	char *temp = "tempt str\n";
	strcpy(str, temp);
	printf(str);
}
