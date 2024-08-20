#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int h1, m1, s1, h2, m2, s2,h,m,s;
    scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
    h=h2-h1;
    m=m2-m1;
    s=s2-s1;
    
    if(s<0){
        s+=60;
        m--;
    }
    if(m<0){
        m+=60;
        h--;
    }
    if(h<0){
        h+=24;
    }
    
    printf ("%02d:%02d:%02d\n",h,m,s);
    return 0;
}
