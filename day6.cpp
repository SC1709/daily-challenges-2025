#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Subarray(vector<int> arr,int n){
    unordered_map<int,vector<int>> mpp;//store current sum and its index 
    vector<vector<int>> ans;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0) ans.push_back({0,i});
        if(mpp.find(sum)!=mpp.end()){//sum in map 
            vector<int> v = mpp[sum];
            for(auto it:v){
                ans.push_back({it+1,i});
            }
        }
        mpp[sum].push_back(i);
    }
    return ans;
}
int main(){
    vector<int> arr={0,0,0};
    vector<vector<int>> ans= Subarray(arr,arr.size());
    cout << "The Subarray are: " << "\n";
    if(ans.size()==0) cout<<"[ ]";
    for (int i = 0; i < ans.size(); i++) {
        cout<<"[ ";
        for (int j = 0; j < 2; j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
    return 0;
}