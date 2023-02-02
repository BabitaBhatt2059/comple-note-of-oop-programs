#include<iostream>
using namespace std;
class polar{
    float radius;
    int angle;
    public:
    polar(){
        radius=0,angle=0;

    }
    polar(float rad,int ang){
        radius=rad;
        angle=ang;

    }
    float return_rad(){
        return radius;
    }
    int return_ang(){
        return angle;
    }
    void display(){
        cout<<radius<<angle;
    }
};
class cartesian{
    float xco,yco;
    public:cartesian()
    {
        xco=0;yco=0;
    }
    cartesian(float x ,float y){
        xco=x;
        yco=y;
    }
    cartesian(polar p){
        xco=p.return_rad()*cos(p.return_ang());
        yco=p.return_rad()*sin(p.return_ang());
    }
    void display(){
        cout<<xco<<yco;
    }
};
int main(){
    polar pol(5.2,4.5);
    cartesian cart;
    cart=pol;
    cout<<"data in polar form:";
    pol.display();
    pol.display();
    cout<<"dam in cartesian form:";
    cart.display();
    
return 0;
}