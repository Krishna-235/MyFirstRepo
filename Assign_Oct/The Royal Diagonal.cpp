#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin >> arr[i][j];
        }
    }
   int rsum=0;
   int lsum=0;
   int k=n-1;;
     for(int i=0;i<n;i++)
    {
        lsum+=arr[i][i];
        rsum+=arr[i][k-i];
    }
    std::cout << "Right Diagonal Sum: " << rsum << std::endl;
    std::cout << "Left Diagonal Sum: " << lsum << std::endl;
   
    return 0;
}
