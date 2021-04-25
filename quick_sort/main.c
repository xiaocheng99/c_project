#include <stdio.h>


/*qsort of function: increasing the num with v[left] ... v[right] */

void qsort(int v[],int left ,int right)
{

	void swap (int v[],int i,int j);

	int i,last;

	if (left >= right)	/*if the number of array's element  less than 2*/
		return;
	swap(v,left,(left + right)/2);	/*the elemet that will divide subsets*/
	last = left;			/*move to v[0]*/
	for (i = left+1; i <= right; i++)	/*divide the subsets*/
		if(v[i] < v[left])
			swap(v,++last,i);
	swap(v,left,last);		/*recover the the elements of dividing  subsets*/
	qsort(v, left, last-1);
	qsort(v, last+1, right);
			

	 
}

/*swap the number of i and j*/
void swap (int v[],int i,int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
int main ()
{
	int v[5];
	printf("please enter the array numbers\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&v[i]);
	}
	for(int i=0; i<5; i++)
	{
		printf("%d",v[i]);
	}



}
