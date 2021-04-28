#include <stdio.h>

#define ALLOCSIZE 10000 /* the available size*/

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;		/* the next available position*/

char *alloc(int n)	/* return the number of point the characters of n*/
{
	if (allocbuf + ALLOCSIZE - allocp >= n)
	{
		allocp += n;
		return allocp - n;	/* the ponit before allocation*/
	} else 
		return 0;
}

void afree(char *p)
{
	if(p >= allocbuf && p < allocbuf + ALLOCSIZE )
		allocp = p;
}
int main()
{
	//printf("the next point number :%s\n",alloc(3));
	afree(allocp);
	//printf("the next point number :%s\n",alloc(5));
} 
