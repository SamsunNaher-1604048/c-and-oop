#include<iostream>
using namespace std;

class coord{
    int x,y;
public:
    coord(){
        x=0;
        y=0;
    };
    coord(int i,int j){
        x = i;
        y = j;
    }
    void get_xy(int &i, int &j){
        i = x;
        j = y;
    }
    int operator==(coord ob2);
    int operator&&(coord ob2);
};

int coord::operator==(coord ob2){
    return x == ob2.x &&  y == ob2.y;
}

int coord::operator && (coord ob2){
    return (x && ob2.x) &&  (y && ob2.y);
}
int main(){
    coord o1(10,10),o2(5,3),o3(10,10),o4(0,0);

    if(o1 == o2){
        cout<<"this o1 and o2 object is same"<<endl;
    }else{
        cout<<"this o1 and o2 object is not same"<<endl;
    }


    if(o1 == o3){
        cout<<"this o1 and o3 object is same"<<endl;
    }else{
        cout<<"this o1 and o3 object is not same"<<endl;
    }


    if(o1 && o2){
        cout<<"this o1 and o2 object is true"<<endl;
    }else{
        cout<<"this o1 and o2 object is not true"<<endl;
    }


    if(o1 && o4){
        cout<<"this o1 and o4 object is true"<<endl;
    }else{
        cout<<"this o1 and o4 object is not true"<<endl;
    }
return 0;
}
