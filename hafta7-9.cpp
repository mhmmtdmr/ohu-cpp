#include <iostream>

using namespace std;

const float PI=3.14159;

class kure{
public:
    float r;
    float hacim();
    float alan();
    
}kure1;

float kure::hacim(){
    return (r*r*r*4*PI/3);
}

float kure::alan(){
    return (r*r*4*PI);
}

int main()
{
    kure1.r=2;
    cout<<"Hacim:"<<kure1.hacim()<<endl;
    cout<<"Alan:"<<kure1.alan()<<endl;
    
    return 0;
}
