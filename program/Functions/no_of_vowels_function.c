#include<stdio.h>
#include<string.h>
int isvowels()
{
    int count=0,i;
    char ch[50];
    gets(ch);
    for(i=0;i<strlen(ch);i++)
    {
        if((ch[i]>=65 && ch[i]<=90)||(ch[i]>=97 && ch[i]<=122))
    {
        if(ch[i]=='a'||ch[i]=='e'|| ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        count++;
    }
    
    }
    printf("%d",count);
    
}
void main()
{
isvowels();
}