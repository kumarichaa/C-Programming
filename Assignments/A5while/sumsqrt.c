//WAP to calculate sum of squares of first N natural numbers.
main()
{
    int N,sum=0,i=1;
    printf("Enter value of N:");
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+i*i;
        printf("% d",sum);
        i++;
    }
    //printf("\nTotal sum of sqrt=%d",sum);
    getch();
}
