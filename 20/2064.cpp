/* 汉诺塔III */
#include <iostream>
#include <cmath>
using namespace std;

enum operations{StoS, StoC, CtoS}; // 分别代表：边到边(Side) 边到中心(Center) 中心到边

long long scheme[(int)CtoS + 1][40]; // scheme[StoS][2] 表示将2个圆盘从边移到边需要操作的次数

long long move(int num, operations oprt)
{
    if (oprt == StoS) {
        if (scheme[StoS][num]) return scheme[StoS][num];
        else {
            scheme[StoS][num] = move(num, StoC) + move(num, CtoS);
            return scheme[StoS][num];
        }
    }
    if (oprt == StoC) {
        if (num == 1) return 1;
        else {
            if (scheme[StoC][num]) return scheme[StoC][num];
            else {
                scheme[StoC][num] = move(num - 1, StoS) + 1 + move(num - 1, StoC);
                return scheme[StoC][num];
            }
            
        }
    }
    if (oprt == CtoS) {
        if (num == 1) return 1;
        else {
            if (scheme[CtoS][num]) return scheme[CtoS][num];
            else {
                scheme[CtoS][num] = move(num - 1, CtoS) + 1 + move(num - 1, StoC) + move(num - 1, CtoS);
                return scheme[CtoS][num];
            }
        }
    }
}

int main()
{
    int n;
    while (cin >> n) cout << move(n, StoS) << endl;
} 
