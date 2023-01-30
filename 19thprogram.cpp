#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
   void getdata(){
        cout<<"the numbers are";
        cin>>x>>y;
    }
    void display(){
        cout<<"\n x"<<x<<"+"<<"\n iy"<<y;
    }
    demo operator+(demo bb)
    {
        demo cc;
        cc.x= x+bb.x;
        cc.y= y+bb.y;

    }

};
int main(){
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    cc.display();

    
return 0;
}