main()
{
    int n,k;
    printf("Enter a number:");
    scanf("%d",&n);
    k=octal(n);
    printf("Octal number=%d",k);
    getch();
}
int octal(int n)
{
    int k=0,s;
    if(n<=8)
        return k*10+n;
    k=octal(n/8);
    s=n%8;
    return k*10+s;
}
