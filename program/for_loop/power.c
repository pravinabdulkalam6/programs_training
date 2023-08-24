#include<stdio.h>
void main()
{
    int i,base,power,val;
    scanf("%d%d",&base,&power);
    val=1;
    for(i=1;i<=power;i++)
    {
        val=val*base;
    }
    printf("%d",val);
}