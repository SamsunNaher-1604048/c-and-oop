#include<iostream>
using namespace std;
int main(){
    int *p;
    p = new int[5];

    if(!p){
        cout<<"allocation error"<<endl;
        return 1;
    }
    int i;
    for(i=0;i<5;i++){
        p[i] = i;
    }

    for(i=0;i<5;i++){
        cout<<"the value"<<p[i]<<endl;
    }

    delete []p;
return 0;
}
