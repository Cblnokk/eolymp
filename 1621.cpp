#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
#include <algorithm>
#include <set>
#include <stack>
#include <cstdio>
#include <cstring>
#include <deque>
#include <set>
//#include <bits/stdc++.h>
using namespace std;


int main(int argc, const char * argv[]) {
    long long n,res;
    cin>>n;
    res=0;
    if(n>0)
    {
        if(n%2==0)
        {
            res=(1+n)*n/2;
        }
        else
        {
            res=((1+n)*n/2);
        }
    }
    else
    {
        if(n%2==0)
        {
            res=(((abs(n)+2)*(1+n))/2);
        }
        else
        {
            res=(abs(n)+2)/2*(n+1);
        }
    }
    cout<<res<<endl;
    return 0;
}
