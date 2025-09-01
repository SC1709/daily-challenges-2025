#include<bits/stdc++.h>
using namespace std;

int printDivisors(int n){
    int count=0; 
    for(int i=1;i*i<=n;i++){ 
        if(n%i==0){
            count++;
            if(n/i != i){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n=997;
    cout<<printDivisors(n);
    return 0; 
}