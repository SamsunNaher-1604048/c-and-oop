#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    int length,i=0;
    cin>>s1;
    length = s1.length();

    while(i<length){
        if(s1[i]=='.'){
            cout<<0;
            i++;
        }
        else if(s1[i]=='-' && s1[i+1]=='.'){
            cout<<1;
            i=i+2;
        }
        else if(s1[i]=='-'&& s1[i+1]=='-'){
            cout<<2;
            i=i+2;
        }
    }
return 0;
}
