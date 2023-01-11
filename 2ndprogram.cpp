#include<iostream>
using namespace std;
class time{
    int hours,minutes;
    public:
    void gettime(int h,int m){
        hours=h;
        minutes=m;
    }
    void display(){
        cout<<"\n hours"<<hours<<"\n minutes"<<minutes<<endl;
    }
    void sum(time t1,time t2){
        minutes=t1.minutes+t2.minutes;
        hours=minutes/60;
        minutes=minutes%60;
        hours=hours+t1.hours+t2.hours;

    }
};
int main(){
    time t1,t2,t3;
    t1.gettime(34,67);
    t2.gettime(56,90);
    t3.sum(t1,t2);
    cout<<"t1=";
    t1.display();
    cout<<"t2=";
    t2.display();
    cout<<"t3=";
    t3.display();
    
return 0;
}