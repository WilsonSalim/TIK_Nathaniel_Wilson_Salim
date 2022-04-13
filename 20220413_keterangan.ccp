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
    string keterangan;
    cout<<"masukkan nilai = ";cin>>nilai;
    if (nilai > 100 || nilai <0){
        keterangan = "Diluar Jangkauan";
    }else if (nilai >= 90){
        keterangan = "Sangat Memuaskan";
    }else if (nilai >= 80){
        keterangan = "Memuaskan";
    }else if (nilai >= 75){
        keterangan = "cukup";
    }else{
        keterangan = "tidak lulus";
    }
    cout<<keterangan;
    
    return 0;
    }
