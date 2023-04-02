#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

void PostfixEva(string exp){
     stack<double> st;
     int i;

     for(i=0;i<exp.size();i++){
        if(isdigit(exp[i])){
            st.push(exp[i]-'0');
        }
        else{
            double a = st.top();
            st.pop();
            double b = st.top();
            st.pop();

            switch (exp[i]){
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(b-a);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(b/a);
                break;
            }
        }
     }
     cout<<st.top()<<endl;
}
int main(){
    string exp ="231*+9-";
    PostfixEva(exp);
return 0;
}
