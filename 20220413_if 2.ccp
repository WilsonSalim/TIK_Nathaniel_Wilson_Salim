#include <iostream>
using namespace std;

int main(){
    /*
    jika nilai >=90 sangat memuaskan
    jika nilai>=80 memuaskan
    jika nilai >=75 cukup
    jika nilai <75 tidak lulus
    nilai tidak boleh > 100 dan <0 keterangan diluar jangkauan.
    
    */
    int nilai;
    cout<<"masukkan nilai = ";cin>>nilai;
    if (nilai >=100 ){
        cout <<"Diluar jangkauan";
    }
    else if (nilai < 0){
        cout <<"Diluar jangkauan";
    }
    else if (nilai>=90){
        cout<<"Sangat Memuaskan";
    }
    else if (nilai >= 80){
        cout <<"Memuaskan";
    }
    else if (nilai >= 75){
        cout <<"cukup";
    }
    else{
        cout <<"tidak lulus";
    }
    
    
    }
