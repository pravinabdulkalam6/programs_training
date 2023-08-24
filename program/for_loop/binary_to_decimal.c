#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,sum,k,j,val,temp;
    int a[50];
    scanf("%d",&n);
    i=0;
    for(temp=n;temp!=0;temp=temp/10)
    {
        a[i]=temp%10;
        i++;
    }
    k=0;
    sum=0;
    for(j=i-1;j>=0;j--)
    {
        val=a[j]*pow(2,k);
        k++;
        sum=sum+val;
    }
    printf("%d",sum);
}