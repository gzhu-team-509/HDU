/* Climbing Worm */
#include <iostream>
using namespace std;

int main()
{
    int tot, up, dwn;
    while (cin >> tot >> up >> dwn && tot)
    {
        int mnt = 0;
        while (true)
        {
            tot -= up;
            mnt++;
            if (tot <= 0) break;
            tot += dwn;
            mnt++;
        }
        cout << mnt << endl;
    }
}
