#include<bits/stdc++.h>
using namespace std;

int postFixEvaluation(vector<string> &s){
    stack<int> st; 
    for(auto it:s){
        if(it== "+" || it== "-" || it== "*" || it== "/" || it== "^"){
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            char ch=it[0]; 
            switch(ch){
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            // case '^':  
            //     st.push(pow(val2,val1));
            //     break;
            default:
                return -1;
                break;
            }
        }
        else{
            st.push(stoi(it)); 
        }
    }
    return st.top();
}

int main(){
    vector<string> s={"3","4","2","*","1","5","-","2","3","^","^","/","+"};
    cout<<postFixEvaluation(s);
    return 0; 
}