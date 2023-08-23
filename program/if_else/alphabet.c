#include<stdio.h>
void main()
{
    char character;
    scanf("%c",&character);
    if((character>=65 && character<=90)||(character>=97 && character<=122))
    printf("alphabet");
    else
    printf("not a alphabet");
}