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
