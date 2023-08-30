#include<stdio.h>
int i;
int isgcd()
{
    int min,n1,n2;
    scanf("%d%d",&n1,&n2);
    min=n1;
    if(n1>n2)
    min=n2;
    for(i=min;i>0;i--)
    {
        if(n1%i==0 && n2%i==0)
        {
        return i;
        break;
        }
    }
}
void main()
{
    isgcd();
    printf("%d",i);
}