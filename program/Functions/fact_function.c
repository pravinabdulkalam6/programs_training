#include<stdio.h>
int i;
int isfact(int x)
{
    int fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void main()
{
    int n,v;
    scanf("%d",&n);
    v=isfact(n);
    printf("%d",v);
}