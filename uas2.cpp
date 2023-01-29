#include <iostream>
using namespace std;

int main(){
    int array[]={1,5,2,4,3,6,9,7,8};
    int a = (sizeof(array)/sizeof(*array));
    
    for (int i = 0; i < a-1; i++)
    {
        int indx = i;
        for (int j = i+1; j < a; j++)
        {
            if (array[j] > array[indx])
            {
                indx = j;
            }

        }
        swap(array[i],array[indx]);
    }
    for ( int k = 0; k < a; k++)
    {
        int number = k +1;
        cout <<"array "<<number << " nilainya = "<< array[k] << endl;
    }
    return 0;
}