main()
{
    int n,K;
    printf("Enter a number");
    scanf("%d",&n);
    K=binary(n);
    getch();
}
int binary(int n)
{
   int s,k;
   if(n==0)
    return 0;
   k=binary(n/2);
   s=n%2;
   printf("%d",s);
   return k;
}
