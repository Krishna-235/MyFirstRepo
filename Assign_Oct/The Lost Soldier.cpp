#include <iostream>

int val(int arr[], int n, int i, int j)
{
    if(i==n) return -1;
    if(arr[i]!=j)  return j;
    return val(arr,n,i+1,j+1);
}

int main()
{
    int n;
    std::cout << "Enter N" << std::endl;
    std::cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }
    std::cout << val(arr,n,0,0) << std::endl;

    return 0;
}
