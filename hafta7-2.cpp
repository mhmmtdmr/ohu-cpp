#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

struct OgrYapi
{
    const char *isim;
    const char *soyisim;
    int numara;
};

int main()
{
    srand(time(0));
    
    OgrYapi ogrenciler[4];
    
    ogrenciler[0].isim = "Ali";
    ogrenciler[0].soyisim = "Akbas";
    ogrenciler[0].numara = 1;
    
    ogrenciler[1].isim = "Huseyin";
    ogrenciler[1].soyisim = "Bozkurt";
    ogrenciler[1].numara = 2;
    
    ogrenciler[2].isim = "Murat";
    ogrenciler[2].soyisim = "Yilmaz";
    ogrenciler[2].numara = 3;
    
    ogrenciler[3].isim = "Elif";
    ogrenciler[3].soyisim = "Gunes";
    ogrenciler[3].numara = 4;
    
    int ogr1 = rand()%4;
    int ogr2;
    
    do{
        ogr2 = rand()%4;
    }while(ogr1==ogr2);
    
    cout <<"isim : "<< ogrenciler[ogr1].isim << endl;
    cout <<"soyisim : "<< ogrenciler[ogr1].soyisim << endl;
    cout <<"numara : "<< ogrenciler[ogr1].numara << endl;
    cout <<"--------------------------------------------"<< endl;
    
    cout <<"isim : "<< ogrenciler[ogr2].isim << endl;
    cout <<"soyisim : "<< ogrenciler[ogr2].soyisim << endl;
    cout <<"numara : "<< ogrenciler[ogr2].numara << endl;
    cout <<"--------------------------------------------"<< endl;
    
    return 0;
}
