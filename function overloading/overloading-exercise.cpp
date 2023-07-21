#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string Reverse(string str ,int Count = 0){
    if(Count==0){
       reverse(str.begin(), str.end());
       return str;
    }
    else{
        int i,j;
        for (int i = 0, j = Count-1 ; i < j; i++, j--){
            swap(str[i], str[j]);
        }
        return str;
    }
}
int main(){
    string str,result1,result2;
    cin>>str;
    result1 = Reverse(str,4);
    result2 = Reverse(str);

    cout<<result1<<endl;
    cout<<result2<<endl;

return 0;
}
