#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,count=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        count++;
    }
    printf("%d",count);
}