#include<iostream>
using namespace std;
class BCE{
int code;
static int count;
public:void setcode()
{
    count++;//set code function defined
    code=count;
}
void showcode()//showcode for display data
{
    cout<<"student code:"<<code<<"BCE 2078"<<endl;
}
static void showcount()//static function defined
{
    cout<<"Records for the Student"<<count<<"Student found"<<endl;
}

};
int BCE::count;//BCE count is defined
int main(){
    BCE c1,c2;
    c1.setcode();
    c2.setcode();
    BCE ::showcount();
    BCE c3;
    c3.setcode();
    BCE::showcount();
    c1.showcode();
    c2.showcode();
    c3.showcode();

    
return 0;
}