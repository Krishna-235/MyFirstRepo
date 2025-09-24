#include <iostream>
using namespace std;

void echo(int n)
{
	if(n==1)
	{
		std::cout << n <<" " << endl;
		return;
	}

	std::cout << n <<" " ;
	echo(n-1);
}

int main()
{
	int n;
	std::cin >> n;
	echo(n);
	return 0;
}
