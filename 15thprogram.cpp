#include<iostream>
using namespace std;
class demo
{
private:
int x,i;
public:
void getdata(){
    cout<<"the numbers are:";
    cin>>x>>i;
}
void display(){
    cout<<"\n x"<<x<<"\n i"<<i;
}
demo operator+(demo bb)
{
    demo cc;
    cc.x= x + bb.x;
    cc.i=i+bb.i;

    return cc;
}
};

int main(){
    demo aa,bb, cc;
    aa.getdata();
    bb.getdata();
    cout<<"display initial number";
    cc=aa+bb;
    cout<<"final numbers:";
    aa.display();
    bb.display();
    cc.display();
    
return 0;
}