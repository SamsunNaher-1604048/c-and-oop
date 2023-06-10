#include<iostream>
#include<cmath>
using namespace std;

int sroot(int a){
    cout<<"int"<<endl;
    return sqrt(a);
}
float sroot(float a){
     cout<<"float"<<endl;
    return sqrt(a);
}
double sroot(double a){
     cout<<"double"<<endl;
    return sqrt(a);
}

int main(){
    cout<<sroot(10)<<endl;
    cout<<sroot(10.04)<<endl;
    cout<<sroot(10.0009)<<endl;
return 0;
}
