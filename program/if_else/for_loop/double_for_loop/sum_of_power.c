#include<stdio.h>
#include<math.h>
int i;
int isfact(int j)
{
    int fact;
    if(j==0)
    fact=1;
for(i=1;i<=j;i++)
{
    fact=fact*j;
}
return fact;
}
void main()
{
    int n,x;
    double sum=0;
    scanf("%d%d",&x,&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+(pow(x,i)/isfact(i));
    }
    printf("%lf",sum);
}