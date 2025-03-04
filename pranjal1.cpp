
#include <bits/stdc++.h>

void thirdLargest(int arr[], int arr_size)
{
	/* There should be atleast three elements */
	if (arr_size < 3) {
		printf(" Invalid Input ");
		return;
	}

	// Find first largest element
	int first = arr[0];
	for (int i = 1; i < arr_size; i++)
		if (arr[i] > first)
			first = arr[i];

	// Find second largest element
	int second = INT_MIN;
	for (int i = 0; i < arr_size; i++)
		if (arr[i] > second && arr[i] < first)
			second = arr[i];

	// Find third largest element
	int third = INT_MIN;
	for (int i = 0; i < arr_size; i++)
		if (arr[i] > third && arr[i] < second)
			third = arr[i];

	printf("The third Largest element is %d\n", third);
}

/* Driver program to test above function */
int main()
{
	int arr[] = { 12, 13, 1, 10, 34, 16,12,18,5,7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	thirdLargest(arr, n);
	return 0;
}


