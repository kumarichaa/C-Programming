main()
{
    int N,i;
    float sum=0,s,n=1;
    printf("Enter a number");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        s=n/i;
        printf("%f ",s);
        sum=sum+s;
    }
    printf("\nSum of harmonic series= %.6f",sum);
    getch();
}
