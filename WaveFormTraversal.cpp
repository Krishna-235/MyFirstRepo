#include <iostream>
using namespace std;

int main()
{

	int N,M;
	std::cin >> M >> N;
	int arr[M][N];

	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	int a=0;

	for(int i=0; i<N; i++)
	{
		if(i%2==0)
		{
			while(a<M)
			{
				std::cout << arr[a][i] << " " ;
				a++;
			}
			a=M-1;
		}
		else
		{
			while(a>=0)
			{
				std::cout << arr[a][i] << " " ;
				a--;
			}
			a=0;
		}
	}

	return 0;
}
