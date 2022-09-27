// C++ program to find minimum
// element in a sorted and rotated array

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr, int low, int high)
{
	// This condition is needed to
	// handle the case when array is not
	// rotated at all
	if (high < low)
		return arr[0];

	// If there is only one element left
	if (high == low)
		return arr[low];

	// Find mid
	int mid = low + (high - low) / 2; /*(low + high)/2;*/

	// Check if element (mid+1) is minimum element. Consider
	// the cases like {3, 4, 5, 1, 2}
	if (mid < high && arr[mid + 1] < arr[mid])
		return arr[mid + 1];

	// Check if mid itself is minimum element
	if (mid > low && arr[mid] < arr[mid - 1])
		return arr[mid];

	// Decide whether we need to go to left half or right
	// half
	if (arr[high] > arr[mid])
		return findMin(arr, low, mid - 1);
	return findMin(arr, mid + 1, high);
}

// Driver program to test above functions
int main()
{
	vector<int> arr = { 4,5,6,7,0,1,2 };


	// Function call
	cout << "The minimum element is "
		<< findMin(arr, 0, arr.size() - 1) << endl;

	return 0;
}

// This is code is contributed by rathbhupendra
