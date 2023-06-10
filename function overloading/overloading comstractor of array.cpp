#include<iostream>
using namespace std;

class myclass{
    int x;

public:
    myclass(){
        x=0;
    }
    myclass(int n){
        x=n;
    }

    int get_x(){
        return x;
    }

};
int main(){
    int i;
    myclass o1[10];
    myclass o2[10] = {1,2,3,4,5,6,7,8,9,0};

    for(int i;i<10;i++){
        cout<<o1[i].get_x()<<endl;
        cout<<o2[i].get_x()<<endl;
    }
 return 0;
}
