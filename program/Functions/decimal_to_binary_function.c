#include<stdio.h>
int isdecimaltobinary()
{
    int i,temp,n,j;
    int a[50];
    scanf("%d",&n);
    i=0;
    for(temp=n;temp!=0;temp=temp/2)
    {
        a[i]=temp%2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}
void main()
{
    isdecimaltobinary();
}