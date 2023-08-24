#include<stdio.h>
#include<math.h>
int i;
void isavgarray(int b[])
{
    int average=0,len;
    len=sizeof(b)/sizeof(b[0]);
    for(i=0;i<len;i++)
    {
        average=(average+b[i])/len;
    }
    printf("%d",average);
}
void main()
{
 int n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
isavgarray(a);
}