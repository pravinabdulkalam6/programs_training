#include<stdio.h>
int count;
int isPrime(int n)
{
    int i;
    count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    return count;
}
void main()
{
int a,v;
scanf("%d",&a);
v=isPrime(a);
if(v==2)
printf("PRIME");
else
printf("NOT A PRIME");
}