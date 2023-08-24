#include<stdio.h>
void main()
{
    int i,count1=0,count2=0,count3=0,count4=0,total;
    char a[50];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=65 &&a[i]<=90)||(a[i]>=97 && a[i]<=122))
        count1++;
        else if(a[i]>=48 && a[i]<=57)
        count2++;
        else if(a[i]==' ')
        count4++;
        else
        count3++;
    }
    total=count1+count2+count3+count4;
    printf("total number of characters are :%d\n",total);
    printf("number of alphabets are :%d\n",count1);
    printf("number of numerics are :%d\n",count2);
    printf("number of special characters are :%d\n",count3);
    printf("number os spaces  are :%d\n",count4);
}