#include<iostream>
using namespace std;
class demo{
    int x;
    public:
void getdata(){
    cout<<"the no. are:";
    cin>>x;

}
void display(){
    cout<<"\n x"<<x;
}
bool operator==(demo bb){
    if(
        x==bb.x)
        return true;
        else 
        return false;
    


}


};
int main(){
    demo aa,bb;
    aa.getdata();
    bb.getdata();
    aa.display();
    bb.display();
    if(aa==bb)
    cout<<"the no. are equal";
    else cout<<"the no are unequal";

    
return 0;
}