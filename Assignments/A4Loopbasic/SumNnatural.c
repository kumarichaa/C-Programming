//WAP to calculate sum of first N natural numbers.
main()
{
    int N,i=1,sum=0;
    printf("Enter value of N:");
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+i;
        printf(" %d",sum);
        i++;
    }
    printf("\n total sum=%d",sum);
    getch();
}
