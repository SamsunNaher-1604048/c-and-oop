#include<iostream>
#include<cctype>
using namespace std;

const int ignore = 0;
const int upper = 1;
const int lower = 2;

void print(char *s, int how =-1);

int main(){
    print("Hello world\n",ignore);
    print("Hello world\n",upper);
    print("Hello world\n");
    print("Hello world\n",lower);
    print("Hello World\n");
return 0;
}
void print(char *s,int how){
    static int oldcase = ignore;

    if(how<0) how = oldcase;
    while(*s){
        switch(how){
            case upper:cout<<(char) toupper(*s);
                break;
            case lower:cout<<(char) tolower(*s);
               break;
            default: cout<<*s;

        }
        s++;
    }
    oldcase = how;
}
