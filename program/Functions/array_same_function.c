#include<stdio.h>
void main()
{
    int i,n,k,j;
    scanf("%d",&n);
    int a[n],b[50];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]!=a[j])
            {
                b[k]=a[i];
                k++;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}