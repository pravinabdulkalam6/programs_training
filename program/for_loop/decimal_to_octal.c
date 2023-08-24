#include<stdio.h>
void main()
{
    int i,temp,n,j;
    int a[50];
    scanf("%d",&n);
    i=0;
    for(temp=n;temp!=0;temp=temp/8)
    {
        a[i]=temp%8;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}