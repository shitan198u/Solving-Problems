#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = n - 2; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << n - 1 << " " << n << endl;
        }
        else
        {
            for (int i = n - 4; i > 1; i--)
            {
                cout << i << " ";
            }
            cout << "1 " << n - 3 << " " << n - 2 << " " << n - 1 << " " << n << endl;
        }
    }

    return 0;
}