#include<iostream>
using namespace std;
class vector{
    int a[10];
    float avg;
    public:
    void getdata();
    friend void average(vector);


};
void vector::getdata(){
    for(int i=0;i<10;i++)
cin>>a[i];
    
}
void average(vector v)
{
    float sum=0.0;
    for (int i=0; i<10; i++)
    sum=sum+v.a[i];
    v.avg=sum/10;
    cout<<"average="<<v.avg;
}

int main(){
    vector aa;
    cout<<"Enter 10 integers ";
    aa.getdata();
    average(aa);
return 0;
}