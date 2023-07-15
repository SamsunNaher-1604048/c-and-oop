#include<iostream>
using namespace std;

float f(float i){
    cout<<"float"<<endl;
    return i/2.0;
}

float d(double i){
    cout<<"double"<<endl;
    return i/3.0;
}

int main(){
    float x = 10.09;
    float y = 10.09;

    cout<<f(x)<<endl;
    cout<<f(y)<<endl;

    cout<<f(10);

return 0;
}
