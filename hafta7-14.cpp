#include <iostream>

using namespace std;

const float PI=3.14159;

class kure{
public:
    float r;
    kure();
    ~kure();
    float hacim();
};

kure::kure(){
    r=2;
}

kure::~kure(){
    cout<<"test"<<endl;
}

float kure::hacim(){
    return (r*r*r*4*PI/3);
}

int main()
{
    kure kure1;
    cout<<"Kurenin Yaricapi="<<kure1.r<<endl;
    cout<<"Kurenin Hacmi="<< kure1.hacim() << endl;
    cout<<"Deneme"<<endl;
    
    return 0;
}
