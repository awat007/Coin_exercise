#include <iostream>
#include <vector>
using namespace std;
int count(vector<int> arr, int m, int n)
{
	if (n == 0)
		return 1;
	
	if (n < 0)
		return 0;
		
	if (m <= 0 && n >= 1)
		return 0;

	return count(arr, m - 1, n) +
		count(arr, m, n - arr[m - 1]);
}
int main()
{
	int N;
	cout<<"inter number\n";
	cin>>N;
	vector<int> arr = { 1, 2, 5, 10, 50};
	int m =arr.size();
	if(N<=200 && N>=1)
	{
		cout <<"count = " << count(arr, m, N);
	}
	else
	{
		cout<<"out of rang\n";
	}	
	return 0;
}