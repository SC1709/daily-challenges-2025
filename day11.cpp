#include<bits/stdc++.h>
using namespace std;

void solve(string &s,string &curr,vector<bool> &vis,vector<string> &ans) {
    if(curr.size() == s.size()){
        ans.push_back(curr);
        return;
    }
    for(int i=0;i<s.size();i++){
        if(vis[i]) continue;
        if(i>0 && s[i] == s[i-1] && !vis[i-1]) continue; //duplicate
        vis[i]=true;
        curr.push_back(s[i]);
        solve(s,curr,vis,ans);
        curr.pop_back();
        vis[i]=false;
    }
}

void permutation(string &s,vector<string> &ans) {
    sort(s.begin(),s.end());
    string curr;
    vector<bool> vis(s.size(),false);
    solve(s,curr,vis,ans);
}

int main(){
    string s= "abc";
    vector<string> ans;
    permutation(s,ans);
    int n=ans.size();
    cout<<"[";
    for(int i=0;i<n;i++){
        if(i==n-1) cout<<ans[i];
        else cout<<ans[i]<<" , ";
    }
    cout<<"]";
    return 0;
}