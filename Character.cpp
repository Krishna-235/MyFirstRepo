#include <iostream>
using namespace std;

int main()
{
	int N;
	char ch;
	std::cout << "Enter Character and Number" << std::endl;
	std::cin >> ch >> N;
	int sum=0;

	if(ch=='Z')
	{
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<N; j++)
			{
				if(i==0)
				{
					std::cout << N <<" ";
					sum+=N;
				}
				else if((i+j)==(N-1))
				{
					std::cout << N << " ";
					sum+=N;
				}
				else if(i==(N-1))
				{
					std::cout << N << " ";
					sum+=N;
				}
				else
					std::cout << "0 ";
			}
			std::cout << std::endl;
		}
	}

	if(ch=='X')
	{
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<N; j++)
			{
				if(i==j)
				{
					std::cout << N << " ";
					sum+=N;
				}
				else if((i+j)==(N-1))
				{
					std::cout << N << " ";
					sum+=N;
				}
				else
					std::cout << "0 ";
			}
			std::cout << std::endl;
		}
	}

	if(ch=='D')
	{
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<N; j++)
			{
				if((i==0)&&(j!=(N-1))&&j!=(N-2))
				{
					std::cout << N << " ";
					sum+=N;
				}
				else if(j==(N-1)&&i!=(N-1)&&i!=0&&i!=1&&i!=(N-2))
				{
					std::cout << N << " ";
					sum+=N;
				}
				else if(i==(N-1)&&j!=(N-1)&&j!=(N-2))
				{
					std::cout << N << " ";
					sum+=N;
				}
				else if(i==1&&j==(N-2))
				{
				    std::cout << N << " ";
					sum+=N;
				}
				else if(i==(N-2)&&j==i)
				{
				    std::cout << N << " ";
					sum+=N;
				}
				else if(j==0)
				{
					std::cout << N << " ";
					sum+=N;
				}
				else
					std::cout << "0 ";
			}
			std::cout << std::endl;
		}
	}

	if(ch=='A')
	{
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<N; j++)
			{
				if(i==0)
				{
					std::cout << N << " ";
					sum+=N;
				}
				else if(j==0)
				{
					std::cout << N << " ";
					sum+=N;
				}
				else if(j==(N-1))
				{
					std::cout << N << " ";
					sum+=N;
				}
				else if(i==((N-1)/2))
				{
					std::cout << N << " ";
					sum+=N;
				}
				else
					std::cout << "0 ";
			}
			std::cout << std::endl;
		}
	}


	std::cout << "\nSum = "<< sum << std::endl;

	return 0;
}
