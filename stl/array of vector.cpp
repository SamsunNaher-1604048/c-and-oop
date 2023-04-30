#include<iostream>
#include<vector>
using namespace std;

void Printvec(vector<int>v){
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
}

int main(){
    int N;
    cin>>N;
    vector<int> V[N];

    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            V[i].push_back(x);
        }
    }

    for(int i=0;i<N;i++){
        Printvec(V[i]);
    }
 return 0;
}
