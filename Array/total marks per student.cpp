#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int marks = 50; marks <= 100; marks++)
    {
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == marks)
                c++;
        }
        cout << marks << " " << c << endl;
    }
}