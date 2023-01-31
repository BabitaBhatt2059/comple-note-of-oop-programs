#include<iostream>
using namespace std;
class dept{
    int id;
    char item[50];
    float price;
    public:
    dept(){
        id=1;
        str cpy(item,"pen");
        price=10;
    }
    friend istream & operator>>(iostream&,dept&);
    friend ostream & operator <<(ostream&,dept&);
};

istream & operator >>(istream & din,dept &d1)
{
    cout<<"enter id,item name & price:";
    din>>d1.id;
    din>>d1.item;
    din>>d1.price;
    return din;
}
ostream & operator <<(ostream & dout,dept &d2){
    dout<<d2.id;
    dout<<d2.item;
    dout<<d2.price;
    return dout;
}

int main(){
    dept d1,d2;
    cout<<"enter first item details";
    cin>>d1;
    cout<<"enter second item details :"<<endl;
    cin>>d2;
    cout<<"full item details :";

    
return 0;
}