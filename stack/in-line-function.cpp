#include<iostream>
using namespace std;
inline int even(int x){
    return !(x%2);
}
int main()
{
    if(even(10)) cout<<"10 is even"<<endl;
    if(even(11)) cout<<"11 is odd"<<endl;
  return 0;
}
