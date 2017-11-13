/**
 * 参考资料：
 *
 * - MSDN博客 http://blog.csdn.net/zhengxu001/article/details/8026148
 * - 《平面上n條直線最多分割區域數的公式的推演》  http://www.sec.ntnu.edu.tw/Monthly/101(346-355)/347-PDF/04-100044-%E5%B9%B3%E9%9D%A2%E5%88%86%E5%89%B2%E5%85%AC%E5%BC%8F%E4%B9%8B%E6%BC%94%E7%AE%97(%E6%9C%88%E5%88%8A).pdf
 * - 《具体数学》
 *
**/
#include <iostream>
using namespace std;

int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        int n;
        cin >> n;
        cout << 2 * n * n - n + 1 << endl;
    }
}
