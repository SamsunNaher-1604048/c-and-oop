#include<iostream>
#include<math.h>
using namespace std;

void changeSign(int &num){
   num = num-num-num;
}
int main(){
    int x=-2;

    cout<<"brfore change sign"<<x<<endl;
    changeSign(x);
    cout<<"after change sign"<<x<<endl;

    int y =9;
    cout<<"brfore change sign"<<y<<endl;
    changeSign(y);
    cout<<"after change sign"<<y<<endl;

 return 0;
}
