//�㷨1:��������
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void test01() 
//{
//    int n;
//    cout << "���������鳤�ȣ�";
//    cin >> n;
//    vector<int> a(n);  // ���� vector ��̬����
//
//    cout << "����������Ԫ�أ�";
//    for (int i = 0; i < n; i++) 
//    {
//        cin >> a[i];
//    }
//
//    sort(a.begin(), a.end());// ����
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
//    system("pause");  // Windows �·�ֹ����̨����
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

//�㷨2:���ֲ���

//int L = -1, R = n;
//while (L + 1 != R)
//{
// 
//    int mid = L + R >> 1;
//    if (check()) L = mid;
//    else R = mid;
//    //������������������������Ľ��
//    //ѡȡL����R��Ϊ���
//}ģ��

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
//        //Ѱ�ҵ�һ������K������ ������ö��ֵı߽綨Ϊ ���Ϊ<5 �ұ�>=5 ������Ϊr
//        int l = -1, r = n;
//        while (l + 1 != r)//��l��rû����ӵ�ʱ��,��߽�
//        {
//            int mid = l + r >> 1;
//            //�����ҵ�һ��>=5������
//            if (q[mid] >= k) r = mid;
//            else l = mid;
//        }
//        //��ʱ�õ���r�ǵ�һ��>=5������
//        if (q[r] != k) printf("-1 -1\n");
//        else 
//        {
//            printf("%d ", r);
//            //���������һ��<=5������ ������ö��ֵ����Ϊ<=5 �ұ�Ϊ>5 ������Ϊll
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
