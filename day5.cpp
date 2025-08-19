#include<bits/stdc++.h>
using namespace std;

vector<int> Leader(vector<int>& arr, int n){
	vector<int> ans;
	if(n == 0){
		return {};
	}
	if(n==1) return {arr[0]};
	ans.push_back(arr[n-1]);
    int maxi=arr[n-1];
	for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxi) {
            maxi = arr[i];
            ans.push_back(arr[i]);
        }
    }
	reverse(ans.begin(), ans.end());
	return ans;
}

int main(){
    vector<int> arr={5};
    vector<int> ans= Leader(arr,arr.size());
    cout << "The Leaders array is: " << "\n";
    for (int i = 0; i < ans.size(); i++) {
        if(i==ans.size()-1) cout<<ans[i];
        else cout << ans[i] << " , ";
    }
    return 0;
}