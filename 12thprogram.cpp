#include<iostream>
using namespace std;
class demo{
    int a;
    public:
   void getdata(){
    cout<<"the no are =";
    cin>>a;
     }
     void display()
     {
        cout<<"/a="<<a;
     }
     demo operator-(demo bb){
        demo cc;
        cc.a=a-bb.a;
     }
};
int main(){
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa-bb;
aa.display();
bb.display();
cc.display();
    
return 0;
}