#include<iostream>
#include<cstdlib>
using namespace std;

class Array{
    int *p;
    int size;
public:
  Array(int sz);
  ~Array(){
      delete []p;
  }
  Array(const Array &a);

  void put(int i,int j){
      if(i>=0 &&i<size){
        p[i] = j;
      }
  }

  int get(int i){
    return p[i];
  }
};

Array::Array(int sz){
    size = sz;
    p = new int[sz];
    if(!p){
        return;
    }
    cout<<"constructor"<<endl;
}


Array::Array(const Array &a){
    int i;
    size = a.size;
    p = new int[a.size];
    if(!p){
        return;
    }
    for(i=0;i<a.size;i++){
        p[i] = a.p[i];
    }
    cout<<"cpoying constuctor"<<endl;
}

int main(){

    Array num(10);
    int i;
    for(i=0;i<10;i++){
        num.put(i,i);
    }

    for(i=0;i<10;i++){
        cout<<num.get(i)<<endl;
    }


    Array x = num;//copying constractur

    for(i=0;i<10;i++){
        cout<<x.get(i)<<endl;
    }

 return 0;
}
