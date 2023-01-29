#include <iostream>

using namespace std;

int main(){
    int aryaintaran;
    cout<<"Masukan Nilai =";
    cin>>aryaintaran;

    if(aryaintaran <= 100 and aryaintaran >= 0){
        if(aryaintaran > 60){
            cout<<"Anda Dinyatakan Lulus"<<endl;
        }else if(aryaintaran <= 60){
            cout<<"Anda Dinyatakan Tidak Lulus"<<endl;
        }
    }else{
        cout<<"Nilai Salah"<<endl;
    }

    return 0;
}