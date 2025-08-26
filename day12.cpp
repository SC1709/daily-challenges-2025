#include<bits/stdc++.h>
using namespace std;

bool valid(string s){
    stack<char> st;  
    for(char it:s){
        if(it=='(' || it=='{' || it=='['){
            st.push(it);
        }
        else{
            if(st.empty()) return false; 
            char top = st.top();
            st.pop();
            if((it==')' && top=='(') || (it=='}' && top=='{') || (it==']' && top=='[')){
                continue;
            }
            else{ 
                return false;
            }
        }
    }
    return st.empty();
} 

int main(){
    string s= "[{()}]";
    bool ans=valid(s);
    if(ans) cout<<"True";
    else cout<<"False";
    return 0;
}