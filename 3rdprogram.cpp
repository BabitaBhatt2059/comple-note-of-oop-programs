#include <iostream>
using namespace std;
class item
{

    static int count;
    float price;

public:
    void getdata(float a)
    {
        price = a;
        count++;
    }
    void showcount()
    {
        cout << "count=" << count << endl;
    }
};
int item::count;

int main()
{
    item i1, i2, i3;
    i1.showcount();
    i2.showcount();
    i3.showcount();
    i1.getdata(4.7);
    i2.getdata(6.9);
    i3.getdata(8.9);
    cout<<endl<<"after reading data"<<endl;
     i1.showcount();
    i2.showcount();
    i3.showcount();

    return 0;
}