main()
{
   int n,num,diff,s=0,r;
  scanf("%d",&n);
  num=n;
  while(n)
  {
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  diff=num-s;
  printf("%d",diff);
}
