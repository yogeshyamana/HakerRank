#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

void kaprekarNumber(int lo , int up){
    bool check = true;

    while(lo<=up){
        ll a,b;
        ll sq = pow(lo,2);
        ll p = int(log10(lo)+1);
        ll p1 = pow(10,p);
        b = sq%p1;
        a = (sq-b)/p1;
        if((a+b)==lo){
            cout<<lo<<" ";
            check = false;
        }
        lo++;  
    }
    if(check){
        cout<<"INVALID RANGE";
    }
}

int main(){
    int lower,upper;
    cin>>lower>>upper;

    kaprekarNumber(lower , upper);
}