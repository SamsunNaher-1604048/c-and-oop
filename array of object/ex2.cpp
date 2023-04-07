#include<iostream>
using namespace std;

class squere{
    int num,sqrt;

public:
    squere(int a,int b){
        num = a;
        sqrt = b;
    }
    void show(){
        cout<<num<<' '<<sqrt<<endl;
    }
};
int main(){
    squere ob[]={squere(1,1),squere(2,4),squere(3,9)};
     int i;
    for( i=0;i<3;i++){
        ob[i].show();
    }
return 0;
}
