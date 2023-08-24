#include<stdio.h>
#include<math.h>
#include <stdlib.h>
void main()
{
    int i,n;
    double sum,val;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        val=1/(pow(i,i));
        sum=sum+val;
    }
    printf("%lf",sum);
}