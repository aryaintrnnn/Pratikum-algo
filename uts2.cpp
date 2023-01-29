#include <iostream>

using namespace std;

int ganjil_genal(){
    bool berhasil;
    int angka;
    do{
        cout<<"Masukkan Angka =";
        cin>>angka;
        if(angka % 2 == 0){
            cout<<"SELESAI";
            return 0;
        }else{
            ganjil_genal();
        }
    }
    while(berhasil == 1);
    return 0;
}

int main(){
    ganjil_genal();
    return 0;

}