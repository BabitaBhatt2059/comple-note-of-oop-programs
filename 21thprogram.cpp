#include<iostream>
using namespace std;
class time{
    int hh,mm,ss;
    public:time():hh(0),mm(0),ss(0){

    }
    time (int s){
        hh=s/3600;
        s=s%3600;
        mm=s/60;
        ss=s%60;
    }
    void show(){
        cout<<hh<<mm<<ss;
    }
};

int main(){
    time t1,t2;
    t1=6093;
    t2=9076;
    cout<<"time 1=";
    t1.show();
    cout<<"time 2=";
    t2.show();
    
return 0;
}