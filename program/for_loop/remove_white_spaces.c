#include<stdio.h>
#include<string.h>
void main()
{
    int i,k;
    char b[50];
    char a[50];
    gets(a);
    k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        continue;
        b[k]=a[i];
        k++;
    }
    for(i=0;i<strlen(b);i++)
    {
        printf("%c",b[i]);
    }

}