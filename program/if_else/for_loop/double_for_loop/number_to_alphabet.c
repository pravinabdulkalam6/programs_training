#include<stdio.h>
void main()
{
    int i,n,temp,j=0;
    int a[50];
    scanf("%d",&n);
    for(temp=n;temp!=0;temp=temp/10)
    {
        a[j]=temp%10;
        j++;
    }
    for(i=j-1;i>=0;i--)
    {
        if(a[i]==0)
        printf("zero");
        else if(a[i]==1)
        printf("one");
        else if(a[i]==2)
        printf("two");
        else if(a[i]==3)
        printf("three");
          else if(a[i]==4)
        printf("four");
          else if(a[i]==5)
        printf("five");
          else if(a[i]==6)
        printf("six");
          else if(a[i]==7)
        printf("seven");
          else if(a[i]==8)
        printf("eight");
        else
        printf("nine");
    }
}