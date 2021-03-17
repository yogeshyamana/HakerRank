#include<bits/stdc++.h>
using namespace std;

int JumpingCloud(vector<int> c){

    int count=0;
    int start=0;
    while(start<c.size()-1){

        if(c[start+2]==0){
            count++;
            start = start+2;
        }
        else if(c[start+1]==0){
            start++;
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<int> cloud(n);
    for(int i=0;i<n;i++){
        cin>>cloud[i];
    }

    cout<<JumpingCloud(cloud);
}
