#include<iostream>
using namespace std;


int main(){
    int A[9] = {7,5,6,2,10,12,1,3,4};
    int ayam,sapi,babi;
    bool kosong = false;
    int E,F,G;


    cout << "masukan A yang di cari = ";
    cin >> ayam;

    for(int i = 0; i < 9; i++){
        sapi = i;
        for(int j = i+1; j < 10; j++){
            if(A[sapi] > A[j]){
                sapi = j;
            }
        }
        babi = A[sapi];
        A[sapi] = A[i];
        A[i] = babi;
    }

    E = 0; G=8;
    do{
        F = (E+G)/2;
        if(A[F] > ayam){
            G = F-1;
        }else if(A[F] < ayam){
            E = F+1;
        }else{
            kosong = true;
        }
    }while(kosong == false && E <= G);

    if (kosong == true)
    {
        cout << "A "<< ayam << " ditemukan" << endl;
    }else{
        cout << "A "<< ayam << " tidak ditemukan" << endl;

    }


}