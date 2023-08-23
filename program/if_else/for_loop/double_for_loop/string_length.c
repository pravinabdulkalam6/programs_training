#include<stdio.h>
#include<string.h>
void main()
{
    int i,count=0;
    char a[50];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
}