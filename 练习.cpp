//��������
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

//���ֲ���
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
//	cin >> n;//����
//
//	int m;
//	cin >> m;//���Ҽ�����
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
//		if (r == n||a[r] != k)//�ж�Խ�����
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
//    sort(a.begin(), a.end()); // �������������
//
//    int l = -1;
//    int r = n;
//
//    // ���ֲ��ҵ�һ�����ڵ��� k ��λ��
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
//    if (r < n && a[r] == k) // �ж� k �Ƿ������������
//    {
//        cout << r << endl; // ��� k ������λ��
//    }
//    else
//    {
//        // �� k ���뵽��ȷ��λ��
//        a.insert(a.begin() + r, k);
//        cout << r << endl; // �������� k ������λ��
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