main()
{
  int N,i,s=0;
  printf("Enter a number");
  scanf("%d",&N);
  for(i=1;i<=N/2;i++)
  {
    if(N%i==0)
      s=s+i;
  }
  if(s==N)
    printf("1");
  else
    printf("-1");
    }
