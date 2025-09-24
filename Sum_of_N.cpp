#include <iostream>
using namespace std;

void fun(int n,int sum)
{
	if(n==0)
	{
		std::cout << sum << endl;
		return;
	}

	sum+=n;
	fun(n-1,sum);
}

int main()
{
	int n;
	std::cin >> n;
	int sum=0;
	fun(n,sum);
	return 0;
}
