#include<stdio.h>
void main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    {
        if(ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u')
        printf("vowels");
        else
        printf("consonants");
    }
    else
    printf("it is not a alphabet");
}