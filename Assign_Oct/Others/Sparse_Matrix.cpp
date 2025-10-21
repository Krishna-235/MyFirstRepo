#include <iostream>

int main()
{
    int n,m;
    std::cout << "Enter Size: ";
    std::cin >> n>>m;
    int arr[n][m];
    std::cout << "Enter Matrix:" << std::endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin >> arr[i][j];
        }
    }
    std::cout << "Your Matrix: " << std::endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << "\nRow" << " Column " << "Value" << std::endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!=0)
            std::cout << " " << i << "   " << j << "      " << arr[i][j] << std::endl;
        }
    }
    return 0;
}
