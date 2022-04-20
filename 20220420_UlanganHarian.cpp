#include <iostream>
using namespace std;

int main(){
    /*
    Buatlah sebuah program sederhana untuk menghitung nilai akhir;
    dengan ketentuan
    nilai akhir = 30% nilai tugas + 30% nilai uts + 40% nilai uas
    jika salah satu nilai lebih dari 100 program,
    program akan langsung berhenti
    dengan memberikan statamen tidak boleh lebih dari 100
    */
    
    int tugas;
    int uts;
    int uas;
    float nilaiakhir;
    
    cout<<"Masukkan nilai tugas = ";cin>>tugas;
    if(tugas >100 ){
        cout<<"Program berhenti"<<endl;
        return 0;
    }
        
    cout<<"Masukkan nilai uts = ";cin>>uts;
    if(uts >100 ){
        cout<<"Program berhenti"<<endl;
        return 0;
    }  
    
    cout<<"Masukkan nilai uts = ";cin>>uas;
    if(uas >100 ){
        cout<<"Program berhenti"<<endl;
        return 0;
    }  
    
    nilaiakhir = tugas*0,3 + uts*0,3 + uas*0,4;
    cout<<nilaiakhir;


    return 0;
}
