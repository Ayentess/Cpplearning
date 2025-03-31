//#include <iostream>
//using namespace std;
//
//// 交换函数，用于交换数组中的两个元素
//void swap(int& a, int& b) 
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//// 快速排序算法实现
//void quick_sort(int q[], int l, int r) 
//{
//    // 如果左边界大于或等于右边界，则直接返回
//    if (l >= r) 
//    return;
//
//    // 选取中间值作为基准点
//    int i = l - 1, j = r + 1, x = q[(l + r) >> 1]; // 使用位运算代替除以2，提高效率
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
//            break; // 当i >= j时，退出循环
//        }
//    }
//
//    // 对左右两部分递归进行快速排序
//    quick_sort(q, l, j);
//    quick_sort(q, j + 1, r);
//}
//
//int main() 
//{
//    int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    // 调用快速排序函数
//    quick_sort(arr, 0, n - 1);
//
//    // 输出排序后的数组
//    for (int i = 0; i < n; i++) 
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}