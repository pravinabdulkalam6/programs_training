#include<stdio.h>
#include<math.h>
void main()
{
    int n,k,temp,i,sum,power;
    int a[50];
    scanf("%d",&n);
    k=0;
    for(temp=n;temp!=0;temp=temp/10)
    {
        a[k]=temp%10;
        k++;
    }
    sum=0;
    for(i=0;i<k;i++)
    {
        power=a[i]*(pow(2,i));
        sum=sum+power;
    }
    printf("%d",sum);
}