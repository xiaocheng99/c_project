#include <stdio.h>
#include <string.h>
/* the first version that use arry*/
int strcmp_1(char *s, char *t)
{
	int i;
	for (i = 0; s[i] == t[i]; i++)
	{	
		if(s[i] = '\0')
		  return 0;
	}
	
	return s[i] - t[i];
}

/* the second version that use pointer*/

int strcmp_2(char *s, char *t)
{
	for ( ;*s == *t; s++, t++)
	{	if(*s == '\0')
		{
		return 0;
		}
	}
	return *s - *t;
}


int main()
{
	char s[] = "ac\0";
	char t[] = "bc\0";
	char *ps = "ac\0";
	char *pt = "bc\0";
	printf("the comparision is :%d\n",strcmp_1(s,t));
	printf("the comparision is :%d\n",strcmp_2(s,t));
	printf("the comparision is :%d\n",strcmp(s,t));
}



