#include<bits/stdc++.h>
using namespace std;

int  DigitSum(long long n){
    if(n<10){
        return n;
    }
    long long new_num=0;
    while(n){
        new_num += n%10;
        n =n/10;
    }
    //cout<<new_num<<endl;
    return DigitSum(new_num);
}

int main(){
    string s;
    int k;
    cin>>s>>k;
    long long sum=0;
    for(int i=0;i<s.size();i++){
        sum += s[i] - '0';
    }
    sum *=k;
    //cout<<s<<endl;
    cout<<DigitSum(sum);
}