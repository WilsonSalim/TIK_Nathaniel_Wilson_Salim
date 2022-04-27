#include <iostream>
using namespace std;
int main(){
    
    //menambahkan batas bawah
    //menambahkan batas batas
    //namun batas bawah tidak boleh lebih dari batas atas
    int batasbawah, batasatas;
    cout<<"masukkan batas bawah = ";cin>>batasbawah;
    cout<<"masukkan batas atas = ";cin>>batasatas;
    if(batasbawah>batasatas){
        cout<<"batas bawah tidak boleh lebih dari batas atas"<<endl;
    }
    else{
    while (batasbawah++ <batasatas){
        cout<<"Data ke -"<<batasbawah<<endl;
    }
   
    return 0;
}

}
