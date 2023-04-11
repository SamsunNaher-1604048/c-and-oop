#include<iostream>
#include<cstring>>
using namespace std;

class address{
    string  name;
    string phone;

public:
    void setdata(string N, string P){
        name = N;
        phone = P;
    }
    void getdata(){
        cout<<name<<endl;
        cout<<phone<<endl;
    }

};
int main(){
    address *nishi;
    nishi = new address;

    nishi->setdata("nishi","01726990636");
    nishi->getdata();
return 0;
}
