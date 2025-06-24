//WAP to print squares of first N natural numbers.
main()
{
    int N,i=1,j;
    printf("Enter value of N:");
    scanf("%d",&N);
    while(i<=N)
    {
        //j=i*i;
        printf(" %d",i*i);
        i++;
    }
    getch();
}
