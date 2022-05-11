#include <iostream>
using namespace std;

int main(){
    int angka[]{
    };
    for (int j = 0; j <5; j++){
        cout<<"masukkan angka = "; cin>>angka[j];
    }
    
    for (int i = 0; i<5 ; i++){
        cout<<"Angka Ke - "<<i<<"="<<angka[i]*angka[i]<<endl;
    }
    return 0;
    }
