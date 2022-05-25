#include <iostream>
#define n 5

int data(float a[n]){
    for(int i=0;i<n;i++){
    std::cout<<"Masukkan Data ke "<<i<<" : ";
    std::cin>>a[i];
    }
}

float meandata(float a[n]){
    float d=0;
    for(int i=0;i<n;i++){
    d+=a[i];
    }
    return d/n;
}

int main(){
    float a[n], mean,tampil;
    data(a);
    mean=meandata(a);

    std::cout<<std::endl;
    std::cout<<"==========================="<<std::endl;
    std::cout<<"Jadi diperoleh nilai Mean adalah \t: "<<mean<<std::endl;

}
