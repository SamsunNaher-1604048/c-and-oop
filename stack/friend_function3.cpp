#include<iostream>
using namespace std;

class track;//froword declaration;

class car{
    int passengrs;
    int speed;
public:
    car (int p,int s){
        passengrs=p;
        speed=s;
    }
    int sp_greater(track t);
};

class track{
    int weight;
    int speed;
public:
    track(int w,int s){
        weight=w;
        speed = s;
    }
    friend int car::sp_greater(track t);
};

int car::sp_greater(track t){
    return speed-t.speed;
}
int main(){
    int t2;
    car c1(6,55);
    track t1(1000,55);

    cout<<"comparing c1 and t1"<<endl;
    t2= c1.sp_greater(t1);
    if(t2<0){
        cout<<"track is frast"<<endl;
    }
    else if(t2==0){
        cout<<"both are same"<<endl;
    }
    else{
        cout<<"car is faster"<<endl;
    }

return 0;
}
