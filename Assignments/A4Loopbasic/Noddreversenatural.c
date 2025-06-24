//WAP to print first N odd natural numbers in reverse order.
main()
{
    int N;
    printf("Enter value of N:");
    scanf("%d",&N);
    while(N)
    {
        printf(" %d",2*N-1);
        N--;

    }
    getch();

}
