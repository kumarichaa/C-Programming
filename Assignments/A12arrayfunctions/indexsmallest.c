main()
{
    int a[10];
    input(a,10);
    display(a,10);
    getch();
}
void input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
}
void display(int b[],int n)
{
    int min,i,t;
    min=b[0];
    for(i=1;i<n;i++)
    {
        if(b[i]<min)
        {
            min=b[i];
            t=i;
        }
    }
    printf("smallest element Index number is %d",t);
}
