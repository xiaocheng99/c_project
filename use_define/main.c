#include <stdio.h>

#define swap(A,B) ((A>B)?( A):( B))

int main()
{
	int a,b;
	printf("please enter the number of a and b:\n");
	scanf("%d %d",&a,&b);
	a=swap(a,b);
	printf("the number is:%d\n",a);
	return 0;
}
