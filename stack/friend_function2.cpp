#include<iostream>
using namespace std;

class track;//forward declaration

class car{
    int passenger;
    int speed;
public:
    car(int p ,int s){
        passenger = p;
        speed = s;
    }
    friend int sp_genetare(car c, track t);
};

class track{
    int weight;
    int speed;
public:
    track(int w,int s){
        weight = w;
        speed = s;
    }
    friend int sp_genetare(car c, track t);
};

int  sp_genetare(car c,track t){
    return c.speed - t.speed;
}

int main(){
    int t;
    car c1(6,55);
    track t1(1000,55);

    cout<<"comparing speed"<<endl;

    t =  sp_genetare(c1,t1);
    if(t<0) cout<<"track is frist"<<endl;
    else if(t==0) cout<<"both are same"<<endl;
    else cout<<"car is faster"<<endl;

return 0;
}
