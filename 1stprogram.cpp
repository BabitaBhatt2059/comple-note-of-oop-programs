#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[15];
    float marks;

public:
    void getdata()
    {
        cout << "\n name"<<endl;
        cin>>name;
        cout<< "\n roll"<<endl;
        cin>>roll;
        cout << "\n marks"<<endl;
        cin>>marks;
        
    }
    char mail[20];
    void display()
    {
        cout<<"Enter email :"<<endl;
        cin >> mail;
        cout << "the data of student are:" << name << "\t" << roll << "\t" << marks << "\t" << mail;
    }
};
int main()
{
    student aa;
    aa.getdata();
    aa.display();

    return 0;
}