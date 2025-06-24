//WAP to print first N even natural numbers.
main()
{
    int n,i=1;
    printf("Enter value of N:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf(" %d",2*i);
        i++;
    }
    getch();
}
