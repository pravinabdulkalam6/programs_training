#include<stdio.h>
int isascending()
{
    int i,n,flag=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            flag=0;
            break;
        }
    }
    return flag;
}
void main()
{
    if(isascending()==1)
    printf("ascending order");
    else
    printf("not in ascending order");
}