#include <stdio.h>
#define MAXLINE 1000

char pattern[] = "ould";

int getLine(char line[],int max)
{
	int c, i;
	i = 0;
	while (--max > 0 && (c=getchar())!=EOF && c!= '\n')
	{
	line[i++] = c;
	}
	if (c=='\n')
	{
		line[i++] = c;
		line[i] = '\0';
		return i;

	}
}
int strIndex(char source[],char serachfor[])
{
	int i, j, k;
	for (i = 0; source[i] != '\0'; i++)
	{
		for (j = i, k = 0; serachfor[k] != '\0'&&source[j] == serachfor[k];j++,k++);

		if (k>0&&serachfor[k]!='\0')
		{
			//printf("enter");
			return i;
		}
	}
	return -1;
}

int main()
{
	char charLine[MAXLINE];
	int found = 0;

	while (getLine(charLine, MAXLINE)>0)
	{
		//printf("keypress:%s", charLine);
		if (strIndex(charLine,pattern)>=0)
		{
			printf("\"loud\" postion:%s", charLine);
			found++;
		}
	}

	return found;
}