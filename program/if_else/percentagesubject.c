#include<stdio.h>
void main()
{
    int physics,chemistry,biology,mathematics,computer_science;
    float percentage;
    scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&mathematics,&computer_science);
    percentage=(physics+chemistry+biology+mathematics+computer_science)/5;
    if(percentage>=90 && percentage<=100)
    printf("grade A");
    else if(percentage>=80 && percentage<90)
    printf("grade B");
    else if(percentage>=70 && percentage<80)
    printf("grade C");
    else if(percentage>=60 && percentage<70)
    printf("grade D");
    else if(percentage>=50 && percentage<60)
    printf("grade E");
    else
    printf("grade F");
}