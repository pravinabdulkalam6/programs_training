#include<stdio.h>
void main()
{
    int numgrade;
    scanf("%d",&numgrade);
    if(numgrade==1)
    printf("A");
    else if(numgrade==2)
    printf("B");
    else if(numgrade==3)
    printf("C");
    else if(numgrade==4)
    printf("D");
    else if(numgrade==5)
    printf("E");
    else
    printf("F");
}