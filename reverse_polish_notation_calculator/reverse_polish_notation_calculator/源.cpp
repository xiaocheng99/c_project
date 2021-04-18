#include  <stdio.h>
#include  <stdlib.h>				//for using atof()
#include <ctype.h>					//for using isdigit()

#define MAXOP 100					//the maximum num or opreator
#define NUMBER '0'					//sign a number


#define BUFSIZE 100		
char buf[BUFSIZE];					//use on the next free postion
int bufp = 0;						//the next free postion of buff

//get a characters(it could be a character pressed back)
int getch(void)						
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}
	
//push the characters back into the input
void ungetch(int c)					
{
	if (bufp >= BUFSIZ)
		printf("ungetch:too many characters\n");
	else
		buf[bufp++] = c;
	
}

//get the next opreator or operand
int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t');
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;		//is not a number
	i = 0;
	if (isdigit(c))		//colletct the integer part
		while (isdigit(s[++i] = c = getch()));
	if (c == '.')		//collect the fractional part
		while(isdigit(s[++i] = c = getch()));

	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}

int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type=getop(s))!=EOF)
	{
		switch (type) {
		case NUMBER:
			
		}
	}
	return 0;
}