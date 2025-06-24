//WAP to print first N odd natural numbers
main()
{
    int i=1,N;
    printf("Enter value of N:");
    scanf("%d",&N);
    while(i<=N)
    {
        printf(" %d",2*i-1);
        i++;

    }
    getch();

}
