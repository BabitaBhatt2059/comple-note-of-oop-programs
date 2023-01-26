#include<iostream>
using namespace std;
class demo{
    int x;
    public:
    void getdata(){
        cout<<"the number is:";
        cin>>x;
    }
        void display(){
            cout<<"\n x"<<x;

        }
        demo operator++(int)

        {
    
            x=x+1;
        }


    

};
int main(){
    demo aa;
    aa.getdata();
    cout<<"the original value is:";
    aa.display();
    aa++;
    cout<<"the final value is:";
    aa.display();


return 0;
}