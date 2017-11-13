#include <iostream>
using namespace std;

class Nokta
{
public:
    int x,y,z;
    Nokta(int, int, int);
    void operator++ ();
    void operator-- ();
};

Nokta::Nokta(int a=0, int b=0, int c=0){
    x=a;
    y=b;
    z=c;
}
void Nokta::operator ++(){
    x++;
    y++;
    z++;
}

void Nokta::operator --(){
    x--;
    y--;
    z--;
}

int main()
{
    Nokta a;
    ++a;
    cout <<a.x<<","<<a.y<<","<<a.z<< endl;
    --a;
    cout <<a.x<<","<<a.y<<","<<a.z<< endl;
    return 0;
}
