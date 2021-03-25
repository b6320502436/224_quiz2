#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,A[1000]={},x=0;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		d=b;
		g=0;
		//printf("%d",d);
		for(e=1;d!=0;e=e*10)
		{
			g=(d%10)+10*g;
			d=d/10;
			
		}
		if(g==b)
		{
			x++;
		}
		//printf("%d %d\n",b,g);
	}
	printf("%d",x);
	
	
	
}
