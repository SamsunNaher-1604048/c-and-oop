#include<iostream>
using namespace std;
int main(){
    int number, result1,left1,result2,left2;
    cin>>number;
    if(number>=0){
        cout<<number;
    }
    else{
        if(number>=-10){
            cout<<0<<endl;
        }else{
            result1 = number/10;
            left1 = number%10;

            result2 = result1/10;
            left2 = number%10;

            if(result1>=((result2*10)+left1)){
                cout<<result1<<endl;
            }
            else{
                cout<<(result2*10)+left1<<endl;
            }
        }
    }

return 0;
}
