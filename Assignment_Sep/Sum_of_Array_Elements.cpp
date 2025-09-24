#include <iostream>
using namespace std;

void add(int arr[],int n,int total)
{
	if(n==0)
	{
		std::cout << total << std::endl;
		return;
	}

	total+=arr[n-1];
	add(arr,n-1,total);
}
int main()
{
	int n;
	std::cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		std::cin >> arr[i];
	}
	int total=0;
	add(arr,n,total);

	return 0;
}
