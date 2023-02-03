#include<iostream>
using namespace std;
class base{
    protected:
    int x;
    public:
   void getdata(){
    cin>>x;
   }

};

class derived:public base{
    private:

    protected:
    int y;
    public:
    void input(){
        cin>>y;
    }
   void display(){
    cout<<x+y;
    
    
   }

};
int main(){
    derived aa;
    aa.getdata();
    aa.input();
    aa.display();
    
return 0;
}