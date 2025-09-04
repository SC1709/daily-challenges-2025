#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st,int element){
    if(st.empty()){ 
        st.push(element);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtBottom(st,element);
    st.push(temp);
}
void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, temp);
}
int main(){
    stack<int> st,st2;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st2=st;
    cout<<"Before Reversing:"<<endl;
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    cout<<endl;
    reverseStack(st);
    cout<<"After Reversing:"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0; 
}