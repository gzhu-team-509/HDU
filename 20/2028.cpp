/* Lowest Common Multiple Plus */
#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    int cnt;
    while (cin >> cnt)
    {
        int rst;
        cin >> rst;

        for (int i = 1; i < cnt; i++)
        {
            int num;
            cin >> num;
            rst = rst / gcd(rst, num) * num;
        }

        cout << rst << endl;
    }
}
