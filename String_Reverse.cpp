#include <iostream>
#include <string>
using namespace std;

void rev(int n,string str)
{
	if(n==0)
	{
		std::cout << endl;
		return;
	}

	std::cout << str[n-1];
	rev(n-1,str);
}

int main()
{
	string str;
	std::cin >> str;
	int n=str.size();
	rev(n,str);
	return 0;
}
