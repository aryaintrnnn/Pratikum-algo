#include <iostream>
using namespace std;

struct Stack{
    int A[5];
    int B;
};

bool IsFull();
bool IsEmpty();
void Push(int c);
int Pop();
void Print();
int infoTop();

Stack S;

int main()
{
    Print();
    Pop();
    Print();
    if (IsEmpty())
    {
        cout << "Data Kosong" << endl;
    }
    
    if (IsFull())
    {
        cout << "Data Terisi" << endl;
    }else{
        cout << "Data Belum Terisi" << endl;
    }
    
    Push(5);
    Push(10);
    Push(1);
    Print();

    //
    cout << "Jumlah Stack : " <<infoTop() << endl;

    return 0;
}



bool IsFull(){
    return (S.B==4);
}
bool IsEmpty(){
    return (S.B==-1);
}
void Push(int c){
    if(!IsFull()){
        S.B++;
        S.A[S.B]=c;
    }else{
        cout<<"Stack Penuh"<<endl;
    }
}
int infoTop(){
    int helper = 0;
    if(!IsEmpty()){
        for(int i=S.B;i>=0;i--){
            helper++;
        }
    }else{
        cout << "Data Kosong" << endl;
    }
    return helper;
}
int Pop(){
    int c=0;
    if(!IsEmpty()){
        c=S.A[S.B];
        --S.B;
    }else{
        cout<<"Stack Kosong\n";
    }
    return c;
}
void Print(){
    if(!IsEmpty()){
        for(int i=S.B;i>=0;i--){
            cout<<"["<< S.A[i] <<"]"<<endl;
        }
    }else{
        cout << "DatData Kosong" << endl;
    }
}