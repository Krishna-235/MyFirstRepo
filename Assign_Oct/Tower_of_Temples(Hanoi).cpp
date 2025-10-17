#include <iostream>

int main()
{
    int n;
    std::cout << "Enter Number of Disks:" << std::endl;
    std::cin >> n;
    int moves=1;
    for(int i=1;i<=n;i++)
    {
        moves*=2;
    }
     std::cout << "Number of Moves: " << moves-1 << std::endl;

    return 0;
}
