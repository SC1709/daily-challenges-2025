#include<bits/stdc++.h>
using namespace std;

string commonPrefix(vector<string>& arr,int n){
    string s=" "; //stores mini string
    if(n == 0) return "";
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int len=arr[i].size();
        if(len<mini){
            mini=len;
            s=arr[i];
        }
    }
    int cnt=0;
    int flag=0;
    for(int i=0;i<mini;i++){
        for(int j=0;j<n;j++){
            if(arr[j][i]!=s[i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
        cnt++;
    }
    return s.substr(0,cnt);
}
int main(){
    vector<string> s={{"flower"},{"flow"},{"flight"}};
    int n= s.size();
	string ans = commonPrefix(s,n);
    if(ans.size()==0) cout<<"";
    else cout<<ans;
    return 0;
}