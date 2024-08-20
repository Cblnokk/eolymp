#include <iostream>

using namespace std;

int ask(int x) {
    assert(1 <= x && x <= 100);
    cout << "? " << x << endl;
    cout.flush();
    int res;
    cin >> res;
    return res;
}

void answer(int x) {
    assert(1 <= x && x <= 100);
    cout << "! " << x << endl;
    cout.flush();
}

int main() {
    ios_base::sync_with_stdio(0);
        cin.tie(0);
    cout.tie(0);
    int l=1;
    int r = 101;
    int mid=1;
    int x=1;
    int k=1;
    bool flag = false;
    
    while ((flag!=true)&&(l<=r))
    {
        k=ask(x);
        if (k == 0)
        {
            flag = true;
        }
        if (k > 0)
        {
            l = mid;
            mid = (l + r) / 2;
            x=mid;
        }
        
        if (k < 0)
        {
            r = mid;
            mid = (l + r) / 2;
            x=mid;
        }
        
    }
    if (flag) answer (x);
}
