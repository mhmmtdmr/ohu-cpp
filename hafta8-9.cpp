#include <iostream>

using namespace std;

class testSinif{
private:
    int sayi1,sayi2;
public:
    testSinif(int x,int y){
        this->sayi1=x;
        this->sayi2=y;
    }
    int topla(){
        return this->sayi1+this->sayi2;
    }
    void goruntule();

};

void testSinif::goruntule(){
    cout<<"Toplam="<<this->topla()<<endl;
}

int main(){
    testSinif nesne(10,20);
    nesne.goruntule();

    return 0;
}
