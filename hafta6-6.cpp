#include <iostream>

using namespace std;

struct Zaman
{
    int saat;
    int dakika;
    int saniye;
};

int main()
{
    Zaman zaman1,zaman2;
    
    zaman1.saat=2;
    zaman1.dakika=14;
    zaman1.saniye=55;
    
    cout<<"Zaman1"<<endl<<"-------------"<<endl;
    cout<<"Saat :"<<zaman1.saat<<endl<<"Dakika : "<<zaman1.dakika<<endl<<"Saniye : "<<zaman1.saniye<<endl<<endl;
    
    zaman2.saat=3;
    zaman2.dakika=43;
    zaman2.saniye=27;
    
    cout<<"Zaman2"<<endl<<"-------------"<<endl;
    cout<<"Saat :"<<zaman2.saat<<endl<<"Dakika : "<<zaman2.dakika<<endl<<"Saniye : "<<zaman2.saniye<<endl<<endl;
    
    return 0;
}
