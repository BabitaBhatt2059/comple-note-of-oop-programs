#include<iostream>
using namespace std;
class one
{
    public:void display(){
        cout<<"class one";
    }
};
class two{
    public:void display()
    {
cout<<"class two";
    }
};
class derived:public one, public two{
    int x;
};

int main(){
    derived obj;
    obj.one::display();
    obj.two ::display();


    
return 0;
}