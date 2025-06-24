#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct Book
{
    private:
    int bookid;
    char title[20];
    float price;
    public:
        void input(){
        cout<<"\nEnter Bookid:";
        cin>>bookid;
        cout<<"Enter title of the book:";
        cin.ignore();
        cin.getline(title,20);
        cout<<"Enter price of the book:";
        cin>>price;
        }
        void display()
        {
            cout<<endl<<bookid<<" "<<title<<" "<<price;
        }
};
int main()
{
      Book b1,b2;

    b1.input();
     b1.display();
    getch();
    b2.input();
    b2.display();
    getch();
}
