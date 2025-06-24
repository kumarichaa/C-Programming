main()
{
    int var_1,var_2;
    printf("Enter two variables:");
    scanf("%d%d",&var_1,&var_2);
    var_1=var_1+var_2;
    var_2=var_1-var_2;
    var_1=var_1-var_2;
    printf("First variable is %d and Second variable is %d",var_1,var_2);
    getch();

}
