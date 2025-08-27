#include<bits/stdc++.h>
using namespace std;

void fun(string &s,int n,int l,int r,int &st,int &maxlen){
    while(l>=0 && r<n){
        if(s[l]==s[r]){
            l--;
            r++;
        }
        else break;
    }
    int len=r-l-1;
    if(len>maxlen){
        maxlen=len;
        st=l+1;
    }
}
string longestPalindrome(string s) {
    int n=s.length();
    if(n<=1) return s;
    int st=0;
    int maxLength=0; 
    //odd case 
    for(int i=0;i<n;i++){
        fun(s,n,i,i,st,maxLength);
    }
    //even case
    for(int i=0;i<n;i++){
        fun(s,n,i,i+1,st,maxLength);
    }
    return s.substr(st,maxLength);
}

int main(){
    string s="babad";
    cout<<longestPalindrome(s)<<endl;
    return 0;
}