#include<iostream>
using namespace std;

class samp{
    int i;
public:
    samp(int n){
        i=n;
        cout<<"constractio"<<endl;
        }

    ~samp(){
        cout<<"destructring"<<endl;
    }
    int get_i(){
        return i;
    }

};

 int sqrt(samp o){
      return o.get_i()*o.get_i();
 }
int main(){
    samp a(10);
    cout<<sqrt(a)<<endl;
    return 0;

return 0;
}
