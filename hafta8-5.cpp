#include <iostream>

using namespace std;

class testSinif{
private:
    int a,b;
public:
    friend int fark(testSinif ts);
    testSinif();
};

testSinif::testSinif(){
    a=5;
    b=10;
}

int fark(testSinif ts){
    if (ts.a==ts.b){
        return 1;
    }
    return 0;
}

int main(){
    testSinif nesne;

    if(fark(nesne)){
        cout<<"esit"<<endl;

    }else{
        cout<<"esit degil"<<endl;
    }
    return 0;
}
