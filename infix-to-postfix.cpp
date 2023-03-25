#include<iostream>
#include <stack>
using namespace std;


int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void InfixtoPostfix(string exp){

    stack <char> st;
    string result;
    int i;

    for(i=0;i<exp.length();i++){
        char c = exp[i];

        if((c>='a'&& c<='z')||(c>='A'&& c<='Z')||(c>='0'&& c<='9')){
            result = result+c;

        }

        //for (;

        else if(c=='('){
            st.push(c);

        }

        else if( c ==')'){
            while(st.top()!= '('){
                    result = result+st.top();
                    st.pop();

            }
            st.pop();
        }

        else{
            while (!st.empty() && prec(c)<=prec(st.top())){
                   result = result+st.top();
                   st.pop();

            }
            st.push(c);

        }

    }

    while(!st.empty()){

        result = result+st.top();
        st.pop();
    }

    cout<<result<<endl;

}
int main(){
    string exp ="";
    InfixtoPostfix(exp);

return 0;
}
