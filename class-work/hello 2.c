 main()
 {
     int i=2,n;
     printf("Enter a number");
     scanf("%d",&n);
     while(i<=n)
     {
         if(n%i==0)
            break;

         i++;
     }
     if(n==i)
        printf("Number is prime ");
     else
        printf("Number is not prime");
     getch();
 }
