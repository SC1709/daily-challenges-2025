#include<bits/stdc++.h>
using namespace std;

//using dequeue
vector<int> maxSlidingWindow(vector<int> &arr, int n, int k){
    vector<int> ans;
    deque<int> dq; //store index of element
    for(int i=0;i<n;i++){
        if(!dq.empty() && dq.front() == i-k){ 
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()] <= arr[i]){ 
            dq.pop_back();
        }
        dq.push_back(i);
        if(i >= k-1){
            ans.push_back(arr[dq.front()]);
        }
    }
    return ans;
}
int main(){
    vector<int> arr={7,7,7,7};
    int n=arr.size();
    int k=1;
    vector<int> ans=maxSlidingWindow(arr,n,k);
    for(auto it:ans) cout<<it<<" ";
    return 0; 
}