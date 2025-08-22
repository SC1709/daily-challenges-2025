#include<bits/stdc++.h>
using namespace std;

string reverseString(string &s,int n){
    int i=0;
    string res="";
    while(i<n){
        while(i<n && s[i]==' '){
            i++;
        }
        if(i>=n){ //edge case 
            break;
        }
        int j=i+1;
        while(j<n && s[j]!=' '){
            j++;
        }
        string word=s.substr(i,j-i);
        if(res.size()==0){//first word 
            res=word;
        }
        else{
            res=word + " " + res;
        }
        i=j+1;
    }
    return res;
}
int main(){
    string s="the sky is blue";
    int n= s.size();
	string ans = reverseString(s,n);
    if(ans.size()==0) cout<<" ";
    else cout<<ans;
    return 0;
}