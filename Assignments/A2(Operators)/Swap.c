main()
{
    int var_1,var_2,temp;
    printf("Enter two numbers:");
    scanf("%d%d",&var_1,&var_2);
    temp=var_2;
    var_2=var_1;
    var_1=temp;
    printf("First variable=%d and Second Variable=%d",var_1,var_2);
    getch();
}
