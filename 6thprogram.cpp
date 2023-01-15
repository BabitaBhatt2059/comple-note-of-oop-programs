#include<iostream>
using namespace std;
class mango;
class apple{
int x;
public:
void getdata1(){
    cout<<"Enter the value of x";
    cin>>x;
}
friend void add(apple,mango);
};
class mango{
    int y;
    public:
    void getdata2(){
        cout<<"y="<<endl;
        cin>>y;
    }
    friend void add(apple a1,mango m1){
        int sum= a1.x+m1.y;
        cout<<"sum="<<sum;
    }
};




int main(){
    apple aa;
    mango bb;
    aa.getdata1();
    bb.getdata2();
    add(aa,bb);
    
return 0;
}