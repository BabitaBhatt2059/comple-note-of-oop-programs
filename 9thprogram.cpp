#include<iostream>
using namespace std;
class constructor{
    int x,y;
    public:
    constructor();
    constructor(int, int);
    void display(){
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }


};
constructor::constructor()
{
    x=10;
    y=50;
}
constructor::constructor(int a,int b){
    x=a;
    y=b;

}
int main(){
    constructor c1,c2;
    constructor c3(45,56),c4(70,80);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    
return 0;
}