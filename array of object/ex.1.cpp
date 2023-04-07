#include<iostream>
using namespace std;

class latters{
    char c;
public:
    latters(char ch){
        c=ch;
    }
    char get_ch(){
        return c;
    }
};
int main(){

    latters ob[] ={'A','B','C','D','E'};

    int i;
    for(i=0;i<5;i++){
        cout<<ob[i].get_ch()<<endl;
    }

 return 0;
}
