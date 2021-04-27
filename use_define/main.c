#include <stdio.h>

#define dprint(expr)		printf(#expr " = %d\n",expr); 
#define max(A,B) 		((A>B)?( A):( B))
#define paste(front , back)	front ## back

int main()
{
	int a,b,temp;
	printf("%d",paste(1,2));
	printf("please enter the number of a and b:\n");
	scanf("%d %d",&a,&b);
	dprint(a*b);
	//a=max(a,b);
	temp = max(a++,b++);
	printf("the max number is:%d\n",temp);
	return 0;
}
