#include<iostream>
using namespace std;
class one{
    protected:int x;
    public: void display1(){
        cout<<x;
    }

};
class two{
    protected:int y;
    public:
    void display2()
    {
        cout<<y;

    }

};
class derived :public one,public two{
    int z;
    public:void enter()
    {
        cin>>x>>y;

    }
    void display3(){
        z=x+y;
        cout<<x;
    }
};


int main(){
    derived obj;
    obj.enter();
    obj.display1();
    obj.display2();
    obj.display3();


    
return 0;
}