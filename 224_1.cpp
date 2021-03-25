#include<stdio.h>
int main()
{
	int a,b,c,d,e,n,m,p=1;
	int A[10000]={},B[10000]={};
	B[0]=1;
	scanf("%d",&n);
	for(a=2;a<1000;a++)
	{
		A[a]=a*a*a;
	//	printf("%d\n",A[a]);
	}
	for(b=1;b<=n;b++)
	{
		B[b]=b;
		for(a=2;a<1000;a++)
	{
		p=1;
		if(b%A[a]==0)
		{
		p=0;
		B[b]=0;
		m--;
		//printf("Not Cube Free");
		}
	}
	
	m++;
	//printf("%d %d \n",B[b],b);	
		
	}
	if(p!=0)
	printf("%d %d",m,p);
	else 	printf("Not Cube Free");
	
	
}
