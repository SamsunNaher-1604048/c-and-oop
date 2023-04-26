#include<iostream>
#include <utility>
#include <vector>
using namespace std;

void PrintVec(vector<int> v){
    cout<<v.size();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}

int main(){
    pair<int,string> p;
    p={5,"mishi"};
    cout<<p.first<<" "<<p.second<<endl;

    //pair array
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={3,4};
    p_array[2]={5,6};

    swap(p_array[0],p_array[2]);

    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }


    //verctor

    vector<int> v;
    int n;
    for(int i=0;i<3;i++){
        cin>>n;
        v.push_back(n);
    }
    v.pop_back();

    PrintVec(v);

    vector<int> v2(10,5);
    PrintVec(v2);

    //vector copy

    //o(n)
    vector<int> v3 = v;
    PrintVec(v3);


return 0;
}
