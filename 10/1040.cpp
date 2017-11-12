/* As Easy As A+B */
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int kase, num[1005];
    cin >> kase;
    while (kase--)
    {
        int cnt;
        cin >> cnt;
        for (int i = 0; i < cnt; i++) 
            cin >> num[i];
        sort(&num[0], &num[cnt]);
        for (int i = 0; i < cnt; i++)
        {
            if (i) cout << " ";
            cout << num[i];
        }
        cout << endl;
    }
}
