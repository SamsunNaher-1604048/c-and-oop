#include<iostream>
using namespace std;

const int SIZE = 5;

class arraytype{
    int a[SIZE];

public:
    arraytype(){
        int i;
        for(i=0;i<SIZE;i++){
            a[i] = i;
        }
    }

    int operator[](int i){
        return a[i];
    }
};

int main(){
    arraytype obj;
    int i;

    for(i=0;i<SIZE;i++){
        cout<<obj[i]<<endl;
    }

return 0;
}
