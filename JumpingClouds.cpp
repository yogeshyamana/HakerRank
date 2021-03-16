#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> c, int k){
    int ans=100;
    int i=0;
    while(i){
        i = (i+k)%10;
        if(c[i]==1){
            ans = ans -1-2;
            i +=k;
        }
        else {
            ans = ans-1;
            i+=k;
        }
       
    }
   
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<solve(v,k);

}