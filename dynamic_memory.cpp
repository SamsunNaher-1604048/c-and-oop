#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
    char *str;
    //str = malloc(5*sizeof(char));
    str = (char*) malloc(5);

    if(!str){
        cout<<"not succesfully allocated";
    }
    else{
        cout<<"allocated";
    }

  return 0;
}
