main()
{
    int x,y,i,n,r,j,count=0;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
   if(x>y)
   {
       for(i=1;i<=x;i++)
       {
           n=x*i;
           for(j=1;j<=y;j++)
           {
               r=y*j;
               if(n==r)
               {
                   count++;
                   break;
               }

           }
           if(count==1)
            break;
       }
   }
   else
   {
       for(i=1;i<=y;i++)
       {
           n=y*i;
           for(j=1;j<=x;j++)
           {
               r=x*j;
               if(r==n)
               {
                   count++;
                   break;
               }
           }
           if(count==1)
            break;
       }
   }
   printf("%d",n);

    getch();
}
