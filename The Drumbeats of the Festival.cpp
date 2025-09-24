#include <iostream>
using namespace std;

void drum(int n)
{
	if(n==1)
	{
		std::cout << n <<" ";
		return;
	}

	drum(n-1);
	std::cout << n <<" " ;
}

int main()
{
	int n;
	std::cin >> n;
	drum(n);
	return 0;
}
