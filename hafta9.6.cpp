#include <iostream>
using namespace std;

class Nokta
{
public:
    int x,y;
    Nokta(int, int);
    Nokta operator+ (Nokta);
};
Nokta::Nokta(int a=0, int b=0){
    x=a;
    y=b;
}
Nokta Nokta::operator +(Nokta p){
    x +=p.x;
    y +=p.y;
    return *this;
}

int main()
{
    Nokta a(3,2);
    Nokta b(4,7);
    Nokta c;
    c=a+b; //c=a.operator +(b);
    cout << c.x<<","<<c.y<< endl;
    return 0;
}
