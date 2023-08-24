#include<stdio.h>
#include<string.h>
void ispalindrome()
{
    int i,n,flag=1;
    char str[50];
    gets(str);
    n=strlen(str);
    for(i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-1])
        {
            flag=0;
            break;
        }
        else
        n--;
    }
    if(flag==1)
    printf("palindrome");
    else
    printf("not a palindrome");
}
void main()
{   
        ispalindrome();
}