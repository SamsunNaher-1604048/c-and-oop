#include<iostream>
using namespace std;
int main(){

    int n,i,a,b,c,d,cnt=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        if(a<b){
            cnt++;
        }
        if(a<c){
            cnt++;
        }
        if(a<d){
            cnt++;
        }
        cout<<cnt<<endl;
        cnt=0;
    }

return 0;
}
