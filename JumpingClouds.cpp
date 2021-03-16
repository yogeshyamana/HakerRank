#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> c, int k){
    int ans=100;
    int start=0;
    int n = c.size();
    do{
        ans--;
        start = (start+k)%n;
        if(c[start]==1){
            ans = ans-2;
        }
    }while(start != 0)
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
