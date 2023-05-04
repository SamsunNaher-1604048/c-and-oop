#include<iostream>
#include<cstdlib>
using namespace std;

class Array{
    int Size;
    char *p;
public:
    Array(int num);
    ~Array(){delete []p;}
    char &put(int i);
    char get(int i);
};

Array::Array(int num){
    p = new char[num];
    if(!p){
        cout<<"error in allocation"<<endl;
        exit(1);
    }
    Size = num;
}

char &Array::put(int i){
    if(i<0||i>=Size){
        cout<<"boundary error"<<endl;
        exit(1);
    }
    return p[i];
}

char Array::get(int i){
      if(i<0||i>=Size){
        cout<<"boundary error"<<endl;
        exit(1);
    }
    return p[i];
}
int main(){
    Array a(10);
    a.put(3) = 'B';
    a.put(7) = 'c';

    cout<<a.get(3)<<endl;
    cout<<a.get(7)<<endl;

    a.put(11) = 'O';
    cout<<a.get(11)<<endl;

return 0;
}
