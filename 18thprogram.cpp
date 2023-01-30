#include<iostream>
using namespace std;
class demo{
   int count;
    public:
     demo():count(0){
        
     }
        
    
    void display(){
        cout<<" \n count="<<count;

    }
    demo operator++(int){
        count++;
    }




};
int main(){
    demo c;
    cout<<"the initial value of count=";
    c.display();
    c++;
    c++;
    c++;
    cout<<"the final value=";
    c.display();
    
return 0;
}