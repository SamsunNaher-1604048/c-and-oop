#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class samp{
    char *s;
public:
    samp(){
        s = "\0";
    }

    ~samp(){
        if(s){
            free(s);
            cout<<"free memory"<<endl;
        }
    }

    void show(){
        cout<<s<<endl;
    }

    void set(char *str);
};

void samp::set(char *str){
    s = (char*) malloc(strlen(str)+1);
    if(!s){
        cout<<"error in menory allocation"<<endl;
        return ;
    }
    strcpy(s,str);
}

samp input(){
    char s[80];
    samp str;

    cout<<"enter the string"<<endl;
    cin>>s;

    str.set(s);
    return str;

}

using namespace std;
int main(){
    samp ob;
    ob= input();

    ob.show();
    return 0;
return 0;
}
