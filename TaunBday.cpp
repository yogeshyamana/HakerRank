#include<bits/stdc++.h>
using namespace std;

long taumBday(int b, int w, int bc, int wc, int z) {
    long ans;
    if(bc==wc){
        ans = b*bc + w*wc;
    }
    else if(z>bc && z>wc){
        ans = b*bc + w*wc;
    }
    else if(bc > wc+z){
        long temp = wc+z;
        ans = b*temp + w*wc;
    }
    else if(wc > bc+z){
        long temp = bc+z;
        ans  =b*bc + w*temp;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long b,w,bc,wc,z;
        cin>>b>>w>>bc>>wc>>z;
        cout<<taumBday(b,w,bc,wc,z);
    }
}