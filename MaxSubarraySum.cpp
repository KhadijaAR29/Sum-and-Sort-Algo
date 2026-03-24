#include<iostream>

using namespace std;

struct SubArrayResult {
	int max; int i; int j;
};

SubArrayResult CumulativeSum(int arr[], int l, int h, int m)
{
	int lsum = INT_MIN; int rsum = INT_MIN; int sum = 0; int ind_i = m; int ind_j = m + 1;
	for (int k = m; k >= l; k-- ) 
	{
		sum += arr[k];
		if (sum > lsum)
		{
			lsum = sum; ind_i = k;
		}
	}
	sum = 0;
	for (int k = m+1; k <= h; k++)
	{
		sum += arr[k];
		if (sum > rsum)
		{
			rsum = sum; ind_j = k;
		}
	}
	SubArrayResult result;
	result.max = lsum + rsum; result.i = ind_i; result.j = ind_j;
	return result;
}

SubArrayResult MaxSubarraySum(int arr[], int l, int h)
{
	if (l == h)
	{
		SubArrayResult res;
		res.max = arr[l]; res.i = l; res.j = h;
		return res;
	}
	int m = (l + h) / 2;
	SubArrayResult left = MaxSubarraySum(arr, l, m);
	SubArrayResult right = MaxSubarraySum(arr, m+1, h);
	SubArrayResult cum = CumulativeSum(arr, l,h,m);
	if (left.max >= right.max && left.max >= cum.max)
		return left;
	if (right.max >= left.max && right.max >= cum.max)
		return right;
	if (cum.max >= left.max && cum.max >= right.max)
		return cum;
}

int main() {
	int arr[] = {-5, 8, 16, -3, 18, -4, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	SubArrayResult result= MaxSubarraySum(arr, 0, n);
	cout << "Original Array: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	
	cout << "Max Subarrya Sum: " << result.max << "\n";
	cout << "Index: " << result.i << "-" << result.j << endl;
	cout << "Subarray: ";
	for (int k = result.i; k <= result.j; k++)
		cout << arr[k] << " ";

	cout << endl;
	return 0;
}
