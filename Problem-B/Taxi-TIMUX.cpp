#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "rt", stdin);
//     freopen("output.txt", "wt", stdout);
// #endif
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll t = 0;
    while (1)
    {
        if ((a + b * t) >= (c - d * t))
        {
            cout << (a + b * t) << endl;
            break;
        }
        if (c - d * t <= a + b * (t + 1))
        {
            cout << c - d * t << endl;
            break;
        }
        t++;
    }

    return 0;
}