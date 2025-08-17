#include<bits/stdc++.h>
using namespace std;
//using xor
int Duplicates(vector<int> arr,int n){
    int xor1=0,xor2=0; 
    for(int i=0;i<n;i++){ 
        xor2=xor2 ^ arr[i];
        xor1=xor1 ^ (i+1);
    }
    xor2=xor2 ^ arr[n];
    return xor1 ^ xor2;
}
int main(){
    vector<int> a={1, 4, 4, 2, 3};
    // sort(a.begin(),a.end());  //if not sorted
    int n = a.size();
    cout<<Duplicates(a,n-1)<<endl;
    return 0;
}