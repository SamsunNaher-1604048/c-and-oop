#include<iostream>
#include<stack>
using namespace std;

bool isopreand(char c){
    return isdigit(c);
}

void Prefixevaluation(string exp){
    stack<double> st;
    int i;

    for(i=exp.length()-1;i>=0;i--){
        if(isopreand(exp[i])){

            st.push(exp[i]-'0');

        }else{


            double o1 = st.top();
            st.pop();
            double o2 = st.top();
            st.pop();

            switch(exp[i]){
            case '+':
                st.push(o1+o2);
                break;

            case '-':
                st.push(o2-o1);
                break;

            case '*':
                st.push(o1*o2);
                break;

            case '/':
                st.push(o2/o1);
                break;
            }
        }
    }

    cout<<st.top()<<endl;
}
int main(){
    string exp ="+9*26";
    Prefixevaluation(exp);
 return 0;
 }
