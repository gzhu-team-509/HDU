/* 畅通工程续 - Dijkstra算法 */
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int INF = 0x3F3F3F3F; // 1,061,109,567
//! const int INF = 0x7F7F7F7F; 因为L28出现了两个INF的和，需要确保不会溢出

int n, m, s, t; // 城市数量 道路数量 起始城市 终止城市
int path[205][205];
bool mark[205];
int dis[205];

void dijsktra()
{
    dis[s] = 0;
    for (int i = 0; i < n && !mark[t]; i++)
    {
        int amin = INF, marker = s;
        for (int j = 0; j < n; j++) {
            if (!mark[j] && dis[j] < amin) {
                amin = dis[j];
                marker = j;
            }
        }
        mark[marker] = true;
        for (int j = 0; j < n; j++) {
            if (mark[j]) continue;
            dis[j] = min(dis[j], dis[marker] + path[marker][j]);
        }
    }
}

int main()
{
    while (scanf("%d%d", &n, &m) == 2)
    {
        memset(path, 0x3F, sizeof(path));
        memset(mark, false, sizeof(mark));
        memset(dis, 0x3F, sizeof(dis));

        for (int i = 0; i < n; i++) path[i][i] = 0;
        for (int i = 0; i < m; i++)
        {
            int a, b, c; scanf("%d%d%d", &a, &b, &c);
            path[a][b] = min(path[a][b], c);
            path[b][a] = path[a][b]; // 关键细节
        }

        scanf("%d%d", &s, &t);
        dijsktra();

        dis[t] == INF ? printf("-1\n") : printf("%d\n", dis[t]);
    }
}
