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
//		if (i < B.size())//���B���ж�Ӧ��λ
//		{
//			t += B[i];
//		}
//		C.push_back(t % 10);
//		t /= 10;
//	}//ѭ��������tΪ0��˵��û�н�λ����Cѹ��C��
//
//	if (t)
//	{
//		C.push_back(t);
//	}//���ѭ��������t��Ϊ0��˵�����н�λ������ѹ��C��
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
//		cout << C[i];//�������C�е�����
//	}
//
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool cmp(vector <int>& A, vector <int>& B) 
//{ // �ж��Ƿ�A �� B
//    if (A.size() != B.size())
//    {
//        return A.size() > B.size();
//    }// ���A��B���Ȳ���ͬ�����ȳ����Ǹ�����
//    for (int i = A.size() - 1; i >= 0; i--) 
//    { // �����Ҫ�����λ��ʼ������Ϊִ���������ǰ��A��B���鶼�Ѿ�������������Ҫ�Ӻ���ǰ����
//        if (A[i] != B[i]) return A[i] > B[i]; // ���A�ĵ�ǰλ��B�ĵ�ǰλ����ȣ���ǰλ��ĸ���
//    }
//    return true; // ���A��B���鶼��ȣ��������ֱ�ӷ���true����ȻҲ����ֱ�����0
//}
//vector <int> sub(vector <int>& A, vector <int>& B) 
//{ // A - B
//    int t = 0; // ÿһλ������õ�����
//    vector <int> C; // ���Ĵ�
//    for (int i = 0; i < A.size(); i++) 
//    { // ����һ�飬�͸߾��ȼӷ���һ�����ǣ�ֻҪ������A�����ˣ���Ϊ����A�϶���B��
//        t = A[i] - t; // tҪ����A�ĵ�ǰλ�����Լ�����Ϊ��һλ�п��ܳ��ֽ�λ�����
//        if (i < B.size())
//        {
//            t -= B[i];
//        }// ���û�б�����B����ôt����B�ĵ�ǰλ
//        C.push_back((t + 10) % 10); // ����C����
//        // �������û�н�λ��(t + 10) % 10�͸պõ���t
//        // ��������н�λ��(t + 10) % 10�ͻ��һ��10����
//        if (t < 0) 
//        {
//            t = 1;
//        } // ���t < 0��˵������������Ҫ��λ����t��ֵΪ1����������һ��ִ���У�A�ĵ�ǰλ�����t
//        else
//        {
//            t = 0;  
//        } // ���򹻼�����ֵΪ0�����ý�λ
//    }
//    while (C.size() > 1 && C.back() == 0) C.pop_back(); // ɾ��ǰ��0
//    return C; // ���ش�
//}
//int main() 
//{
//    string a, b; // ����������Ϊ�ܴ�������string����
//    cin >> a >> b; // ����
//    vector <int> A, B; // ����������Ϊ�����Ǵ����λ��ʼ�������ǿ��԰�������������
//    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0'); // ��a���鵽��������A���ǵ�a��string���͵����飬Ҫ��ȥ'0'�����������
//    for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0'); // ��b���鵹��������B
//    
//    if (cmp(A, B)) 
//    { // ���A > B
//        auto C = sub(A, B); // ��ô����ֱ�����
//        for (int i = C.size() - 1; i >= 0; i--) printf("%d", C[i]); // �����ΪC�ǵ��ŵģ���Ҫ�������
//    }
//    else 
//    { // ����A < B����Ҫ����-(B - A)
//        auto C = sub(B, A); // ����B - A
//        printf("-"); // ��ǰ�����һ������
//        for (int i = C.size() - 1; i >= 0; i--) printf("%d", C[i]); // �������C����
//    }
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//vector<int> sub(vector<int>& A, vector<int>& B)
//{
//	vector<int>C;
//	int t = 0;
//
//	for (int i = 0; i < A.size(); i++)
//	{
//		t = A[i] - t;
//		if (i < B.size())
//		{
//			t -= B[i];
//		}
//		C.push_back((t + 10) % 10);
//		if (t < 0)
//		{
//			t = 1;
//		}
//		else
//		{
//			t = 0;
//		}
//	}
//
//	while (C.size() > 1 && C.back() == 0)
//	{
//		C.pop_back();
//	}
//	return C;
//}
//
//bool cmp(vector<int>& A, vector<int>& B)//�ж��Ƿ�A>=B
//{
//	if (A.size() != B.size())
//	{
//		return A.size() > B.size();
//	}
//
//	for (int i = A.size() - 1; i >= 0; i--)
//	{
//		if (A[i] != B[i])
//		{
//			return A[i] > B[i];
//		}
//	}
//
//	return true;
//}
//
//void test()
//{
//	string a, b;
//	vector<int>A, B;
//	cin >> a >> b;
//
//	for (int i = a.size() - 1; i >= 0; i--)
//	{
//		A.push_back(a[i] - '0');
//	}
//
//	for (int i = b.size() - 1; i >= 0; i--)
//	{
//		B.push_back(b[i] - '0');
//	}
//
//	if (cmp(A, B))
//	{
//		auto C = sub(A, B);
//		for (int i = C.size()-1; i >= 0; i--)
//		{
//			cout << C[i];
//		}
//		cout<<endl;
//	}
//	else
//	{
//		auto C = sub(B, A);
//		cout << "-";
//		for (int i = C.size()-1; i >= 0; i--)
//		{
//			cout << C[i];
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//

//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//vector<int> mul(vector<int>& A, int b)
//{
//    vector<int> C;
//    int t = 0;
//
//    for (int i = 0; i < A.size() || t; i++)
//    {
//        if (i < A.size())
//        {
//            t += A[i] * b;
//        }
//        C.push_back(t % 10);
//        t /= 10;
//    }
//
//    while (C.size() > 1 && C.back() == 0)
//    {
//        C.pop_back();
//    }
//    return C;
//}
//
//void test()
//{
//    string a;
//    int b;
//
//    cin >> a >> b;
//
//    vector<int>A;
//
//    for (int i = a.size() - 1; i >= 0; i--)
//    {
//        A.push_back(a[i] - '0');
//    }
//
//    auto C = mul(A, b);
//
//    for (int i = C.size() - 1; i >= 0; i--)
//    {
//        cout << C[i];
//    }
//    cout << endl;
//}
//
//int main()
//{
//    test();
//    system("pause");
//    return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//vector<int> div(vector<int>& A, int b,int &r)
//{
//    vector<int> C;
//    int r = 0;
//
//    for (int i = A.size(); i >= 0; i--)
//    {
//        r = r * 10 + A[i];
//        C.push_back(r / b);
//        r %= b;
//    }
//
//    reverse(C.begin(), C.end());
//
//    while (C.size() > 1 && C.back() == 0)
//    {
//        C.pop_back();
//    }
//    return C;
//}
//
//void test()
//{
//    string a;
//    int b;
//
//    cin >> a >> b;
//
//    vector<int>A;
//
//    for (int i = a.size() - 1; i >= 0; i--)
//    {
//        A.push_back(a[i] - '0');
//    }
//
//    int r;
//    auto C = div(A, b,r);
//
//    for (int i = C.size() - 1; i >= 0; i--)
//    {
//        cout << C[i];
//    }
//    cout << endl;
//
//    cout << r << endl;
//}
//
//int main()
//{
//    test();
//    system("pause");
//    return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//vector<int> div(vector<int>& A, int b, int& r)
//{
//    vector<int>C;
//    r = 0;
//
//    for (int i = A.size() - 1; i >= 0; i--)
//    {
//        r = r * 10 + A[i];
//        C.push_back(r / b);
//        r %= b;
//    }
//
//    reverse(C.begin(), C.end());
//
//    while (C.size() > 1 && C.back() == 0)
//    {
//        C.pop_back();
//    }
//    return C;
//}
//
//void test()
//{
//    string a;
//    int b;
//    cin >> a >> b;
//
//    vector<int>A;
//
//    for (int i = a.size() - 1; i >= 0; i--)
//    {
//        A.push_back(a[i] - '0');
//    }
//
//    int r;
//    auto C = div(A, b, r);
//
//    for (int i = C.size()-1; i >= 0; i--)
//    {
//        cout << C[i];
//    }
//    cout << endl;
//    cout << r;
//}
//
//int main()
//{
//    test();
//    system("pause");
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//const int N = 100010;
//
//int main()
//{
//	int n, m;// nΪ���鳤�ȣ�mΪѯ�ʴ���
//	int a[N], S[N];
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//        S[i] = S[i - 1] + a[i];
//	}
//
//	while (m--)
//	{
//		int l, r;
//		cin >> l >> r;
//		cout << S[r] - S[l - 1] << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//const int N = 1010;
//
//void test()
//{
//	int n, m, q;
//	cin>> n >> m >> q;
//
//	int S[N][N];
//	int a[N][N];
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin>> a[i][j];
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			S[i][j]=S[i][j-1]+S[i-1][j]-S[i-1][j-1]+a[i][j];//  S[i][j]��ʾ��(1,1)��(i,j)��Ԫ�غ�
//		}
//	}
//
//	while (q--)
//	{
//        int x1, y1, x2, y2;
//		cin>> x1 >> y1 >> x2 >> y2;
//		cout<<S[x2][y2]-S[x2][y1-1]-S[x1-1][y2]+S[x1-1][y1-1]<<endl;//���Ӿ���ĺ�
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
//
//using namespace std;
//
//const int N = 100010;
//
//void test()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int a[N], b[N];
//
//    for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		b[i] = a[i] - a[i - 1];
//	}
//
//	int l, r,c;
//
//	while (m--)
//	{
//        cin >> l >> r >> c;
//		b[l] += c;
//        b[r + 1] -= c;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//        a[i] = a[i - 1] + b[i];
//        cout << a[i] << " ";
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
//
//using namespace std;
//
//const int N = 100010;
//
//void test()
//{
//    int n, m;
//    cin >> n >> m;
//
//    int a[N];
//    int b[N];
//
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        b[i] = a[i] - a[i - 1];
//    }
//
//    int r, l, c;
//
//    while (m--)
//    {
//        cin >> l >> r >> c;
//        b[l] += c;
//        b[r + 1] -= c;
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        a[i] = b[i] + a[i - 1];
//        cout << a[i] << " ";
//    }
//}
//
//int main()
//{
//    test();
//    system("pause");
//    return 0;
//}