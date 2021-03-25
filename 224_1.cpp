#include<stdio.h>
int main()
{
	int A[100000]={},a,b=0,c,d,e,B[1000]={},C[10000]={};
	A[0]=1;
	//Cube Free Number ??
	for(a=1;a<10000;a++)
	{
	B[a]=a*a*a;
		for(c=0;c<1000000;c++)
		{
		
		b++;
		printf("%d\n",B[b]);
		}
	}
	for(a=1;a<10000;a++)
	{
	B[a]=a*a*a;
		for(c=0;c<1000000;c++)
		{
		
		b++;
		printf("%d\n",B[b]);
		}
	}
	
	
	
	
	
}
