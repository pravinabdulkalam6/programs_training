#include<stdio.h>  
#include<stdlib.h> 
void main()
{
    int n,num,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        num = rand() % 100 + 1; 
        printf (" %d ", num);  
    }
}