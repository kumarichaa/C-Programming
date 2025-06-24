main()
{
    int num;
    scanf("%d",&num);
    halistone(num);
    getch();
}
void halistone(int n)
{
    printf("%d ",n);
    if(n==1)
        return 0;
    else{
        if(n%2==0)
        {
            n=n/2;
            halistone(n);
        }
        else
        {
            n=3*n+1;
            halistone(n);
        }
    }
}
