#include <stdio.h>

void printLeaders(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i] <= arr[j])
				break;
		}
		if (j == n) // the loop didn't break
			printf("%d ", arr[i]);
	}
}
int main()
{
    int n ;
    scanf("%d",&n);
	int arr[n];
	for (int j = 0; j < n; j++) {
			scanf("%d",&arr[j]);
	}
	printLeaders(arr, n);
	return 0;
}
