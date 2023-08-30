#include<stdio.h>
void main()
{
    int n1,n2,i,max;
    scanf("%d%d",&n1,&n2);
    max=n1;
    if(max<n2)
        max=n2;
        // printf("%d",max);
    for(i=max;i>0;i=i*2)
    {
        if(i%n1==0 && i%n2==0)
        {
        printf("%d",i);
        break;
        }
        
    }
}