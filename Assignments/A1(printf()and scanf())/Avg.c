main()
{
    int val_1,val_2,val_3,Sum;
    float Avg;
    printf("Enter values:");
    scanf("%d%d%d",&val_1,&val_2,&val_3);
    Sum=val_1+val_2+val_3;
    Avg=Sum/3;
    printf("Average of three numbers:%f",Avg);
    getch();

}
