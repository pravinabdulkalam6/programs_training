void main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    printf("alphabets");
    else if(ch>=48 && ch<=57)
    printf("digit");
    else
    printf("special character");
}