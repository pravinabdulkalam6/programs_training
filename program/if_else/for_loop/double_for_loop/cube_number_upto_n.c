#include<stdio.h>
void main()
{
    int i,n,cube;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cube=1;
        cube=cube*(i*i*i);
        printf("Number is :%d and the cube of %d is:%d \n",i,i,cube);
    }
}