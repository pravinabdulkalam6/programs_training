#include<stdio.h>
void main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{	
		if(a<c)
		printf("%d is smallest",a);
	}
	else if(b<c)
	{
	printf("%d is smallest",b);
	}
	else
	printf("%d is smallest",c);
}
