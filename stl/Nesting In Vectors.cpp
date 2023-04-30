#include<iostream>
#include<vector>
using namespace std;

void Printvec( vector<pair<int,int>> Vec){
    int i;
    cout<<"size of vector"<<Vec.size()<<endl;
    for( i=0;i<Vec.size();i++){
        cout<<Vec[i].first<<" "<<Vec[i].second<<endl;
    }
}

int main(){
    vector<pair<int,int>> v;
    Printvec(v);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      v.push_back({x,y});
    }
    Printvec(v);
return 0;
}
