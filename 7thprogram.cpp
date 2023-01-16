#include<iostream>
using namespace std;
class student{
    int roll;
    char name[20];
    public:
    void enter(){
        cout<<"enter name and roll no. of student ";
        cin>>name;
        cin>>roll;
    }
    void display(){
        cout<<"\n name="<<name<<endl;

    }
    class date{
        int day,month,year;
        public:
        void getdata();
        void showdata();
    };

};
void student::date::getdata(){
    cout<<"enter day=";
    cin>>day>>month>>year;

}
void student::date::showdata(){
    cout<<day<<month<<year;
}
int main(){
    student Babita;
    student::date d1;
    Babita.enter();
    d1.getdata();
    Babita.display();
    d1.showdata();
    
return 0;
}