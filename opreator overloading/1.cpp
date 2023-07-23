#include<iostream>
using namespace std;

class coord{
    int x,y;

public:
    coord(){
         x = 0;
         y = 0;
    }
    coord(int i,int j){
        x=i;
        y=j;
    }

    void get_xy(int &i , int &j){
        i = x;
        j = y;
    }
    coord operator +(coord ob2);
};

coord coord::operator+(coord ob2){
    coord temp;
    temp.x = this->x+ob2.x;
    temp.y = this->y+ob2.y;
    return temp;
}
int main(){
    coord o1(1,2),o2(3,4),o3;
    int x,y;
    o3 = o1+o2;
    o3.get_xy(x,y);
    cout<<"(o1+o2) x:"<<x<<"y: "<<y<<endl;
return 0;
}
