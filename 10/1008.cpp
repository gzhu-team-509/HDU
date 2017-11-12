/* Elevator */
#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n && n)
    {
        int cur = 0, tme = 0;
        while (n--)
        {
            int tar;
            cin >> tar;
            if (tar >= cur)
            {
                tme += (tar - cur) * 6 + 5;
                cur = tar;
                continue;
            }  
            if (tar < cur)
            {
                tme += (cur - tar) * 4 + 5;
                cur = tar;
                continue;
            }
        }
        cout << tme << endl;
    }
}
