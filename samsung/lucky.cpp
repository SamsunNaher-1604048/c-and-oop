#include<iostream>
using namespace std;
int main(){
    int n,digit,i;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>digit;
        int reminder,result1=0,result2=0;

        reminder = digit%10;
        digit = digit/10;
        result1 = result1 + reminder;

        reminder = digit%10;
        digit = digit/10;
        result1 = result1 + reminder;

        reminder = digit%10;
        digit = digit/10;
        result1 = result1 + reminder;

        reminder = digit%10;
        digit = digit/10;
        result2 = result2 + reminder;

        reminder = digit%10;
        digit = digit/10;
        result2 = result2 + reminder;

        reminder = digit%10;
        digit = digit/10;
        result2 = result2 + reminder;

        if(result1 == result2){
            cout<<"yes"<<endl;

        }else{
            cout<<"no"<<endl;
        }

    }
return 0;
}
