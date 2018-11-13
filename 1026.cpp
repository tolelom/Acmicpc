#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr1 = new int[n];
	int* arr2 = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr1[i] * arr2[(n - 1) - i];
	}
	cout << sum;
	//system("PAUSE");
}