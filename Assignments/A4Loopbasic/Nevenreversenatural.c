//WAp to print first N even natural numbers in reverse order.
main()
{
    int n;
    printf("Enter value of N:");
    scanf("%d",&n);
    while(n)
    {
        printf(" %d",2*n);
        n--;
    }
    getch();
}
