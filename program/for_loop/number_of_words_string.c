#include<stdio.h>
#include<string.h>
void main()
{
    int i,count=0;
    char a[50];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(((a[i]==' ')&&((a[i-1]>=65 && a[i-1]<=90)||(a[i-1]>=97 && a[i-1]<=122)))||(a[i+1]=='\0'))
        count++;
    }
    printf("%d",count);
}