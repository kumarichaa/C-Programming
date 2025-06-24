class print{
public:
    display()
    {
        cout<<p<<"\n";
    }
};
int main()
{
Print p;
p.display(100);
p.display(32768);
p.display(‘A’);
p.display(‘1’);
p.display("C is Fun");
p.display(3.333333333335);
p.display(8.5);
return 0;
}
