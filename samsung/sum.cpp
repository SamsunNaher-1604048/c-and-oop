#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,i,cnt =0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b != c){
           cnt++;
        }
        if(b+c !=a){
            cnt++;
        }
        if(c+a != b){
            cnt++;
        }

        if(cnt==3){
            cout<<"NO"<<endl;
            cnt =0;
        }else{
            cout<<"YES"<<endl;
            cnt = 0;
        }
    }

 return 0;
}
