#include<iostream>
#include<cmath>
using namespace std;

void Round(double &x){
    double frac;
    double val;

    frac = modf(x,&val);

    if(frac<0.5) x=val;
    else x=val+1.0;
}
int main(){
    double i = 100.4;
    cout<<"actual  value"<<i<<endl;
    Round(i);
    cout<<"round value"<<i<<endl;

return 0;
}
