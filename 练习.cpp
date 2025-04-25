//快速排序
//#include <iostream>
//using namespace std;
//#include <vector>
//#include<algorithm>
//
//void test()
//{
//	int n;
//	cin >> n;
//	vector<int>a(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin>>a[i];
//	}
//
//	sort(a.begin(), a.end());
//
//    for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//    cout << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//二分查找
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//void test()
//{
//    int n;
//    cin >> n;
//
//    int m;
//    cin >> m;
//	vector<int>a;
//
//	for (int i = 0; i < n; i++)
//	{
//        int num;
//        cin >> num;
//        a.push_back(num);
//	}
//
//	sort(a.begin(), a.end());
//
//
//
//	while (m--)
//	{
//		int k;
//		cin>>k;
//
//		int l = -1;
//		int r = n;
//		while (l + 1 != r)
//		{
//			int mid = (l + r) >> 1;
//			if (a[mid] >= k)
//			{
//				r = mid;
//			}
//			else
//			{
//				l = mid;
//			}
//		}
//
//		if (a[r] != k)
//		{
//			cout << "-1 -1" << endl;
//		}
//		else
//		{
//			cout<<r<<" ";
//			int ll = -1;
//			int rr = n;
//			while (ll + 1 != rr)
//			{
//                int mid = (ll + rr) >> 1;
//				if (a[mid] <= k)
//				{
//                    ll = mid;
//				}
//                else
//				{
//                    rr = mid;
//				}
//			}
//			if (a[ll] == k)
//			{
//				cout<<ll<<endl;
//			}
//			else
//			{
//				cout<<r<<endl;
//			}
//
//		}
//		
//	}
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//void test()
//{
//	int n;
//	cin >> n;//长度
//
//	int m;
//	cin >> m;//查找几个数
//
//	vector<int>a;
//	a.resize(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin>>a[i];
//	}
//
//	sort(a.begin(), a.end());	
//
//
//	while (m--)
//	{
//		int k;
//		cin >> k;
//
//		int l = -1;
//		int r = n;
//		while (l + 1 != r)
//		{
//			int mid = l + r >> 1;
//			if (a[mid] >= k)
//			{
//				r = mid;
//			}
//			else
//			{
//                l = mid;
//			}
//		}
//
//		if (r == n||a[r] != k)//判断越界情况
//		{
//			printf("-1 -1\n");
//		}
//		else
//		{
//            printf("%d ", r);
//			int ll = -1;
//            int rr = n;
//			while (ll + 1 != rr)
//			{
//				int mid = ll + rr >> 1;
//				if (a[mid] <= k)
//				{
//					ll = mid;
//				}
//				else
//				{
//					rr = mid;
//				}
//			}
//			if (a[ll] != k) printf("%d\n", r);
//			else printf("%d\n", ll);
//		}		
//	}
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//void test()
//{
//    int n;
//    cin >> n;
//
//    vector<int> a;
//    a.resize(n);
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//
//    int k;
//    cin >> k;
//
//    sort(a.begin(), a.end()); // 对数组进行排序
//
//    int l = -1;
//    int r = n;
//
//    // 二分查找第一个大于等于 k 的位置
//    while (l + 1 != r)
//    {
//        int mid = l + r >> 1;
//        if (a[mid] >= k)
//        {
//            r = mid;
//        }
//        else
//        {
//            l = mid;
//        }
//    }
//
//    if (r < n && a[r] == k) // 判断 k 是否存在于数组中
//    {
//        cout << r << endl; // 输出 k 的索引位置
//    }
//    else
//    {
//        // 将 k 插入到正确的位置
//        a.insert(a.begin() + r, k);
//        cout << r << endl; // 输出插入后 k 的索引位置
//    }
//}
//
//int main()
//{
//    test();
//    system("pause");
//    return 0;
//}

//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//void test()
//{
//	vector<int>a;
//
//	int n;
//	cin>>n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//
//	sort(a.begin(), a.end());
//
//	int k;
//	cin >> k;
//	bool ret=binary_search(a.begin(), a.end(), k);
//
//	if (ret)
//	{
//        cout << "YES" << endl;
//	}
//	else
//	{
//        cout << "NO" << endl;
//	}
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}