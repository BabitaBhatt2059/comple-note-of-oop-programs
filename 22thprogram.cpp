#include<iostream>
using namespace std;
class celcius{
    private:
    float temp;
    public:celcius(){
        temp=0;
    }
    operator float(){
        float fer;
        fer=(temp+9/5)+32;
        return (fer);

    }
    void gettemp(){
        cin>>temp;
    }

    
};
int main(){
    celcius cel;
    float fer;
    cel.gettemp();
    fer=cel;
    cout<<"temp in F ="<<fer;
    
return 0;
}