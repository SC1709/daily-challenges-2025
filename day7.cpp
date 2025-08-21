#include<bits/stdc++.h>
using namespace std;
int TrappedWater(vector<int> arr,int n){
    int ans=0;
    int left=0,right=n-1;
    int leftMax=INT_MIN,rightMax=INT_MIN;
    while(left<=right){
        if(arr[left]<=arr[right]){
            if(arr[left]>=leftMax){
                leftMax=arr[left];
            }
            else{
                ans+=leftMax-arr[left];
            }
            left++;
        }
        else{
            if(arr[right]>=rightMax){
                rightMax=arr[right];
            }
            else{
                ans+=rightMax-arr[right];
            }
            right--;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=arr.size();
    cout<<TrappedWater(arr,n);
}