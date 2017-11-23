/**
 * 敌兵布阵
 *
 * 基于张伟昆线段树的实现
**/
#include <cstdio>
#include <cstring>
#define sfi(a) scanf("%d", &a);
using namespace std;

const int LEVEL = 5;
const int INDEX = 1 << (LEVEL - 1);
int tree[1 << (LEVEL + 1)];

void build();
void show();
void update(int, int);
int query(int, int);

int main()
{
    int t; // 测试用例的数量
    sfi(t);
    for (int kase = 1; kase <= t; kase++)
    {
        printf("Case %d:\n", kase);

        memset(tree, 0, sizeof(tree));

        int n; // 工兵营地的数量
        sfi(n);
        for (int i = 1; i <= n; i++) sfi(tree[INDEX + i]);

        build(); // 建树
        show();  // 打印树
    }
}

// 建树
void build()
{
    for (int level = LEVEL; level; --level)
    {
        for (int end = 1 << level, head = end >> 1; head < end; head++)
            tree[head >> 1] += tree[head];
    }
}

// 打印树
void show()
{
    for (int level = 1; level <= LEVEL; level++)
    {
        for (int end = 1 << level, head = end >> 1; head < end; head++)
            if (head ^ (1 << (level - 1))) printf(" %d", tree[head]);
            else printf("%d", tree[head]);
        printf("\n");
    }
}

// 将节点node的值增加diff
void update(int node, int diff)
{

}

// 查询开区间(left, right)内元素的和
int query(int left, int right)
{
    return 0;
}
