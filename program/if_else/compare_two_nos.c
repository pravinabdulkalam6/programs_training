#include<stdio.h>
void main()
{
    int i,n1,n2;
    scanf("%d%d",&n1,&n2);
    if(n1==n2)
    printf("%d==%d\n",n1,n2);
    if(n1!=n2)
    printf("%d!=%d\n",n1,n2);
    if(n1>n2)
    printf("%d>%d\n",n1,n2);
    if(n1>=n2)
    printf("%d>=%d\n",n1,n2);
    if(n1<n2)
    printf("%d<%d\n",n1,n2);
    if(n1<=n2)
    printf("%d<=%d\n",n1,n2);
}