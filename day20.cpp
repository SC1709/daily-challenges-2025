#include<bits/stdc++.h>
using namespace std;

void insertAtCorrectPosition(stack<int> &st,int element){
    if(st.empty() || st.top()>element){ 
        st.push(element);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtCorrectPosition(st,element);
    st.push(temp);
}
void sortStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    sortStack(st);
    insertAtCorrectPosition(st, temp);
}
int main(){
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);
    sortStack(st);
    cout<<"After Sorting:"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0; 
}