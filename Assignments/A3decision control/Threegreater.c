main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("%d is greater among three numbers",a);
    else if(b>c)
        printf("%d is greater among three numbers",b);
     else
         printf("%d is greater among three numbers",c);
     getch();

}
