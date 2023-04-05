#include <bits/stdc++.h>
using namespace std;
int main()
{
    double loan, interest, n;
    cin >> loan >> interest >> n;
    double r = interest / 100;
    double k = loan * (1 + r);
    double l = pow(k, n);
    cout << l << endl;
}