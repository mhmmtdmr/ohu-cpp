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

    ogrenci1.isim = "Recai";
    ogrenci1.soyisim = "Sinekli";
    ogrenci1.numara = 123456;

    cout<<"Ogrenci1"<<endl<<"--------------"<<endl;
    cout<<ogrenci1.isim<<endl;
    cout<<ogrenci1.soyisim<<endl;
    cout<<ogrenci1.numara<<endl<<endl;

    return 0;
}
