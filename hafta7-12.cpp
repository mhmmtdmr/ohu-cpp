#include <iostream>

using namespace std;

const float PI=3.14159;

class kure{
public:
    float r;
    kure();
    float hacim();
}kure1;

kure::kure(){
    r=2;
}

float kure::hacim(){
    return (r*r*r*4*PI/3);
}

int main()
{
    cout<<"Hacim:"<<kure1.hacim()<<endl;
    
    return 0;
}
