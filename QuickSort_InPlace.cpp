//#include<iostream>
//
//using namespace std;
//
//int Partition(int arr[], int l, int h)
//{
//	int i = l; int j = h - 1; int pivot = arr[h];
//	while (i <= j)
//	{
//		while (arr[i] < pivot && i <= j)
//			i++;
//		while (arr[j] > pivot && i <= j)
//			j--;
//		if (i < j)
//		{
//			swap(arr[i], arr[j]);
//			i++;
//			j--;
//		}
//	}
//	swap(arr[i], arr[h]);
//	return i;
//}
//
//void QuickSort(int arr[], int l, int h)
//{
//	if (l >= h)
//		return;
//	int pivot = Partition(arr, l, h);
//	QuickSort(arr, l, pivot - 1);
//	QuickSort(arr, pivot + 1, h);
//}
//
//int main()
//{
//	int arr[] = { 4, 3, 5, -7, 8, 11, 1, 4 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	cout << "Original Array: ";
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//
//	QuickSort(arr, 0, n-1);
//
//	cout << "\nSorted Array: ";
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//
//	return 0;
//}