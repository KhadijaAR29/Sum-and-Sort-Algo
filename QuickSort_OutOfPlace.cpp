//#include<iostream>
//
//using namespace std;
//
//void QuickSort(int arr[], int n)
//{
//	if (n <= 1)
//		return;
//
//	int pivot = arr[n - 1]; int l = 0; int r = 0;
//
//	for (int i = 0; i < n-1; i++)
//	{
//		if (arr[i] < pivot)
//			l++;
//		else
//			r++;
//	}
//
//	int* left = new int[l]; int ind_l = 0;
//	int* right = new int[r]; int ind_r = 0;
//
//	for (int i = 0; i < n-1; i++)
//	{
//		if (arr[i] < pivot)
//			left[ind_l++] = arr[i];
//		else
//			right[ind_r++] = arr[i];
//	}
//
//	QuickSort(left, l);
//	QuickSort(right, r);
//
//	int i;
//	for (i = 0; i < l; i++)
//		arr[i] = left[i];
//
//	arr[i] = pivot;
//	i++;
//
//	for (int j=0; j < r; j++,i++)
//		arr[i] = right[j];
//
//	delete[] left; delete[] right;
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
//	QuickSort(arr,n);
//	
//	cout << "\nSorted Array: ";
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//
//	return 0;
//}