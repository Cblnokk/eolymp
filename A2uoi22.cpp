#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
        long long a, b, c,k;
        cin >> a >> b >> c;
        k=0;
        k+=max((a+b),max((b+c),(a+c)));
        cout << k << endl;
    return 0;
}
