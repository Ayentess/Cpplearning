//#include <iostream>
//using namespace std;
//
//// �������������ڽ��������е�����Ԫ��
//void swap(int& a, int& b) 
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//// ���������㷨ʵ��
//void quick_sort(int q[], int l, int r) 
//{
//    // �����߽���ڻ�����ұ߽磬��ֱ�ӷ���
//    if (l >= r) 
//    return;
//
//    // ѡȡ�м�ֵ��Ϊ��׼��
//    int i = l - 1, j = r + 1, x = q[(l + r) >> 1]; // ʹ��λ����������2�����Ч��
//
//    while (true) 
//    {
//        do 
//        { 
//            i++;
//        } while (q[i] < x);
//
//        do 
//        {
//            j--;
//        } while (q[j] > x);
//
//        if (i < j) 
//        {
//            swap(q[i], q[j]);
//        }
//        else 
//        {
//            break; // ��i >= jʱ���˳�ѭ��
//        }
//    }
//
//    // �����������ֵݹ���п�������
//    quick_sort(q, l, j);
//    quick_sort(q, j + 1, r);
//}
//
//int main() 
//{
//    int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    // ���ÿ���������
//    quick_sort(arr, 0, n - 1);
//
//    // �������������
//    for (int i = 0; i < n; i++) 
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}