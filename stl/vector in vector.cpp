#include<iostream>
#include<vector>
using namespace std;

void PrintVec(vector<int> v){
    cout<<"size of vector"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}

int main(){
    vector <vector<int>> V;
    int N,n;
    cout<<"container vector"<<endl;
    cin>>N;

    for(int i=0;i<N;i++){
        cout<<"inside vector"<<endl;
        cin>>n;
        vector<int>temp;
        for(int j=0;j<n;j++){
            int x;
            cout<<"elenent of vector"<<endl;
            cin>>x;
            temp.push_back(x);
        }
        V.push_back(temp);
    }

    for(int i; i<V.size();i++){
        PrintVec(V[i]);
    }
return 0;
}
