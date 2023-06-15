#include<iostream>
#include<string>
using namespace std;
int main(){
int i,n;
cin>>n;
string str;
for(i=1;i<=n;i++){
    cin>>str;
    if((str[0]=='Y'||str[0]=='y')&&(str[1]=='E'||str[1]=='e')&&(str[2]=='S'||str[2]=='s')){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

return 0;
}
