#include<stdio.h>
void main()
{
    int temp,i,j,n;
    int a[50];
    scanf("%d",&n);
    i=0;
    for(temp=n;temp!=0;temp=temp/10)
    {
        a[i]=temp%10;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        if(a[j]==0)
        printf("1");
        else
        printf("0");
    }
}