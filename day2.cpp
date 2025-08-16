#include<bits/stdc++.h>
using namespace std;

//using xor

int missingNumber(vector<int> &arr,int n){
    int xor1=0,xor2=0;
    for(int i=0;i<n-1;i++){
        xor1=xor1^arr[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^n;
    return xor1^xor2;
}

int main(){
    vector<int> arr={1,2,4,5};
    int n=arr.size()+1;
    int missing = missingNumber(arr,n); //assume array is sorted
    cout<<missing;
    return 0;
}