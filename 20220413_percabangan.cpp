//nested if
//percabangan bersarang
//if didalam if

#include <iostream>
using namespace std;
int main()
{
    int nilai;
    if (nilai % 2 == 0){
        cout<<"Bilangan Genap"<<endl;
        if (nilai <10){
            cout<<"Bilangan genap kurang dari 10"<<endl;
        }
        else{
            cout<<"Bilangan genap lebih dari 10"<<endl;
        }
    }
    else{
        cout<<"bilangan ganjil"<<endl;
        if (nilai <10){
            cout<<"Bilangan ganjil kurang dari 10"<<endl;
        }
        else{
            cout<<"Bilangan ganjil lebih dari 10"<<endl;
        }
    }
    return 0;
}
