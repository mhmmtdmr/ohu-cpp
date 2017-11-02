#include <iostream>

using namespace std;

class testSinif{
private:
    int sayi;
public:
    testSinif(int n){
        sayi=n;
    }
    int deger(){
        return sayi;
    }
};

int kareal(testSinif d){
    return d.deger()*d.deger();
}

int main(){

    testSinif nesne(5);

    cout<< kareal(nesne) << endl;

    return 0;
}
