#include <iostream>

using namespace std;

struct OgrYapi
{
    const char *isim;
    const char *soyisim;
    int numara;
};

int main()
{
    OgrYapi ogrenci1;
    
    ogrenci1.isim = "Muhammet";
    ogrenci1.soyisim = "Demir";
    ogrenci1.numara = 150607033;
    
    cout<<"Ogrenci1"<<endl<<"--------------"<<endl;
    cout<<ogrenci1.isim<<endl;
    cout<<ogrenci1.soyisim<<endl;
    cout<<ogrenci1.numara<<endl<<endl;
    
    return 0;
}
