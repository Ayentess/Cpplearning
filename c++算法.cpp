//算法1:快速排序
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void test01() 
//{
//    int n;
//    cout << "请输入数组长度：";
//    cin >> n;
//    vector<int> a(n);  // 改用 vector 动态分配
//
//    cout << "请输入数组元素：";
//    for (int i = 0; i < n; i++) 
//    {
//        cin >> a[i];
//    }
//
//    sort(a.begin(), a.end());// 排序
//
//    for (int i = 0; i < n; i++) 
//    {
//        cout << a[i] << " ";
//    }
//
//    cout << endl;
//}
//
//int main() 
//{
//    test01();
//    system("pause");  // Windows 下防止控制台闪退
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//const int maxn = 100005;
//
//int n, q, x, a[maxn];
//
//int main() 
//{
//    scanf("%d%d", &n, &q);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//
//    while (q--) 
//    {
//        scanf("%d", &x);
//        int l = 0, r = n - 1;
//        while (l < r) 
//        {
//            int mid = l + r >> 1;
//            if (a[mid] < x)
//            {
//                l = mid + 1;
//            }
//            else 
//            { 
//                r = mid; 
//            }
//        }
//        if (a[l] != x) 
//        {
//            printf("-1 -1\n");
//            continue;
//        }
//
//        int l1 = l, r1 = n;
//        while (l1 + 1 < r1) 
//        {
//            int mid = l1 + r1 >> 1;
//            if (a[mid] <= x) 
//            {
//                l1 = mid; 
//            }
//            else 
//            { 
//                r1 = mid;
//            } 
//        }
//        printf("%d %d\n", l, l1);
//    }
//    return 0;
//}

//算法2:二分查找

//int L = -1, R = n;
//while (L + 1 != R)
//{
// 
//    int mid = L + R >> 1;
//    if (check()) L = mid;
//    else R = mid;
//    //最后根据你所分左右两边区间的结果
//    //选取L或者R作为结果
//}模板

//#include<iostream>
//using namespace std;
//const int N = 1e5 + 5;
//int n, m, q[N];
//int main()
//{
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//    while (m--)
//    {
//        int k; scanf("%d", &k);
//        //寻找第一个等于K的坐标 我这边让二分的边界定为 左边为<5 右边>=5 则所求为r
//        int l = -1, r = n;
//        while (l + 1 != r)//当l与r没有相接的时候,求边界
//        {
//            int mid = l + r >> 1;
//            //下面找第一个>=5的坐标
//            if (q[mid] >= k) r = mid;
//            else l = mid;
//        }
//        //此时得到的r是第一个>=5的坐标
//        if (q[r] != k) printf("-1 -1\n");
//        else 
//        {
//            printf("%d ", r);
//            //现在找最后一个<=5的数字 我这边让二分的左边为<=5 右边为>5 则所求为ll
//            int ll = -1, rr = n;
//            while (ll + 1 != rr)
//            {
//
//                int mid = ll + rr >> 1;
//                if (q[mid] <= k) ll = mid;
//                else rr = mid;
//            }
//            if (q[ll] != k) printf("%d\n", r);
//            else printf("%d\n", ll);
//        }
//
//    }
//
//}

//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//vector<int> add(vector<int> &A, vector<int> &B)
//{
//	if (A.size() < B.size())
//	{
//		return add(B, A);
//	}
//
//	vector<int> C;
//
//	int t = 0;
//
//	for (int i = 0; i < A.size(); i++)
//	{
//		t += A[i];
//		if (i < B.size())//如果B还有对应的位
//		{
//			t += B[i];
//		}
//		C.push_back(t % 10);
//		t /= 10;
//	}//循环结束后，t为0，说明没有进位，将C压入C中
//
//	if (t)
//	{
//		C.push_back(t);
//	}//如果循环结束后t不为0，说明还有进位，将其压入C中
//	return C;
//}
//
//int main()
//{
//	string a, b;
//	vector<int> A, B;
//	cin>>a>>b;
//
//	for (int i = a.size() - 1; i >= 0; i--)
//	{
//		A.push_back(a[i]-'0');
//	}
//
//	for (int i = b.size() - 1; i >= 0; i--)
//	{
//		B.push_back(b[i]-'0');
//	}
//
//	auto C = add(A, B);
//
//	for (int i = C.size() - 1; i >= 0; i--)
//	{
//		cout << C[i];//倒序输出C中的数字
//	}
//
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <vector>

using namespace std;

bool cmp(vector <int>& A, vector <int>& B) 
{ // 判断是否A ≥ B
    if (A.size() != B.size())
    {
        return A.size() > B.size();
    }// 如果A、B长度不相同，长度长的那个数大
    for (int i = A.size() - 1; i >= 0; i--) 
    { // 否则就要从最高位开始看（因为执行这个函数前，A和B数组都已经倒序，所以这里要从后往前看）
        if (A[i] != B[i]) return A[i] > B[i]; // 如果A的当前位和B的当前位不相等，当前位大的更大
    }
    return true; // 如果A、B数组都相等，这里可以直接返回true，当然也可以直接输出0
}
vector <int> sub(vector <int>& A, vector <int>& B) 
{ // A - B
    int t = 0; // 每一位上相减得到的数
    vector <int> C; // 最后的答案
    for (int i = 0; i < A.size(); i++) 
    { // 遍历一遍，和高精度加法不一样的是，只要遍历完A就行了，因为这里A肯定比B长
        t = A[i] - t; // t要等于A的当前位减掉自己，因为上一位有可能出现借位的情况
        if (i < B.size())
        {
            t -= B[i];
        }// 如果没有遍历完B，那么t减掉B的当前位
        C.push_back((t + 10) % 10); // 更新C数组
        // 这里如果没有借位，(t + 10) % 10就刚好等于t
        // 如果这里有借位，(t + 10) % 10就会借一个10下来
        if (t < 0) 
        {
            t = 1;
        } // 如果t < 0，说明不够减，需要借位，把t赋值为1，就是在下一次执行中，A的当前位会减掉t
        else
        {
            t = 0;  
        } // 否则够减，赋值为0，不用借位
    }
    while (C.size() > 1 && C.back() == 0) C.pop_back(); // 删除前导0
    return C; // 返回答案
}
int main() 
{
    string a, b; // 两个数，因为很大，所以用string来存
    cin >> a >> b; // 读入
    vector <int> A, B; // 两个数，因为减法是从最低位开始减，我们可以把两个数倒过来
    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0'); // 把a数组到过来存入A，记得a是string类型的数组，要减去'0'让它变成数字
    for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0'); // 把b数组倒过来存入B
    
    if (cmp(A, B)) 
    { // 如果A > B
        auto C = sub(A, B); // 那么可以直接相减
        for (int i = C.size() - 1; i >= 0; i--) printf("%d", C[i]); // 最后因为C是倒着的，需要反向输出
    }
    else 
    { // 否则A < B，需要计算-(B - A)
        auto C = sub(B, A); // 计算B - A
        printf("-"); // 给前面加上一个负号
        for (int i = C.size() - 1; i >= 0; i--) printf("%d", C[i]); // 反向输出C数组
    }
    return 0;
}
