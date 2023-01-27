#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
    void getdata(){
        cout<<"the number is:";
        cin>>x>>y;
    }
        void display(){
            cout<<"\n x"<<x<<"\n y"<<y;

        }
        demo operator=(demo aa)

        {
    
            x=aa.x;
            y=aa.y;
        }


    

};
int main(){
    demo aa,bb;
    aa.getdata();
    aa=bb;
    
    bb.display();


return 0;
}