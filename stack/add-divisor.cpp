#include<iostream>
using namespace std;
int main(){
    int test_case,i;
    long long int test;
    cin>>test_case;
    for(i=0;i<test_case;i++){
        cin>>test;
        while(test>=0){
            if(test%2 == 0){
                test = test/2;
                if(test == 0 || test==1){
                    cout<<"no"<<endl;
                    break;
                }
            }else{
                cout<<"yes"<<endl;
                break;
            }

        }
    }

return 0;
}
