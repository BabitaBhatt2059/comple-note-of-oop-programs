#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    space(){
        x=0;
        y=0;
        z=0;
    }
    space(int a, int b, int c);
    void display();
    void operator-();
};
void space::display()
{
    cout << "c" << x << "," << y << "," << endl;
}
void space::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    space s1, s2(10, -20, 30);
    cout << "s2=";
    s2.display();
    -s2;
    cout << "-s2=";
    s2.display();

    return 0;
}