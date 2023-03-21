#include<iostream>
using namespace std;

inline int min( int a, int b){
    return a<b ? a:b;
}

inline long min(long a, long b){
    return a<b? a:b;
}

inline double min(double a, double b){
    return a<b?a:b;
}
int main(){
    cout<<min(-10,10)<<endl;
    cout<<min(-10.01,10.01)<<endl;
    cout<<min(-10L,10L)<<endl;
 return 0;
}
