/* 杨辉三角 */
#include <iostream>
using namespace std;

int tri[31][31] = { {1} };

int main()
{
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= 30; j++)
        {
            tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
        }
    }

    int n;
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j-1) cout << " ";
                cout << tri[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
}
