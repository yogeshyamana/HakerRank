#include<bits/stdc++.h>

using namespace std;

int fn(int x, int n, int c)
{
    if(pow(c,n)<x)
    {
        return fn(x,n,c+1)+ fn(x-pow(c,n), n, c+1);
    }
    else if(pow(c,n)==x)
    {
        return 1;
    }

    else
    {
        return 0;
    }

}

int main()
{

    int x;
    int n;
    int c=1;
    int res;//for result

    cin>>x>>n;

    res=fn(x,n,c);

    cout<<res;

    return 0;
}