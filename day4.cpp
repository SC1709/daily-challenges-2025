#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr1, vector<int> &arr2, int n, int m) {
    int r = n - 1; //at last of array 1 
    int l = 0;    //at first of array 2
    while (r >= 0 && l < m) {
        if (arr1[r] > arr2[l]) {
            swap(arr1[r], arr2[l]);
            r--;
            l++;
        }
        else {
            break;
        }
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}
int main(){
    vector<int> arr1={1,3,5,7};
    vector<int> arr2={2,4,6,8};
    int n = arr1.size(), m = arr2.size();
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "\narr1 = ";
    for (int i = 0; i < n; i++) {
        if(i==n-1) cout<<arr1[i];
        else cout << arr1[i] << " , ";
    }
    cout << "\narr2 = ";
    for (int i = 0; i < m; i++) {
        if(i==m-1) cout<<arr2[i];
        else cout << arr2[i] << " , ";
    }
    return 0;
}