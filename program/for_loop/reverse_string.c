#include<stdio.h>
#include<string.h>
void main()
{
int i;
char str[50];
gets(str);
for(i=strlen(str)-1;i>=0;i--)
{
    printf("%c",str[i]);
}
}