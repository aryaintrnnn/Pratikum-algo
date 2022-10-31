#include <iostream>

using namespace std;

void hitung(){  //Prosedur
    cout<<"2+3="<< (2+3) <<endl;
    cout<<"Selesai"<<endl;
}

int total(int a, int b){
    int c;
    c=a + b;
    return  c;
}

int perulangan(int N){ //Rekursif
    if(N>0){
        cout<<"N="<< N <<endl;
        perulangan(N-1);
    }
    return 0;
}


int main() {
    cout<<"Hi There :)"<<endl;
    hitung();

    int C;
    cout<<"Total = "<< total(3, 6)<<endl;
    cout<<"Rekursif ="<<endl; //Rekursif
    cin>>C; //Rekursif
    perulangan(C); //Rekursif
    return 0;
}
