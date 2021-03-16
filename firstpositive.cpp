#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> height ={1,2,1};
    int i=0,j=height.size()-1;
    long long result=0;
    while(i!=j){
        long long temp=0;
        if(height[i]<=height[j]){
            temp = height[i]*(j-i);
           // cout<<temp<<endl;
            i++;
        }
        else if(height[i]>height[j]){
            temp = height[j]*(j-i);
            j--;
            //cout<<temp<<endl;
        }
        if(temp>result){
            result = temp;
        }
    }
    cout<<result;
}