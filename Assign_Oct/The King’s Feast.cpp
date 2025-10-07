#include <iostream>

int val(int arr[], int n, int i, int max=-1)
{
    if(i==n) return max;
    if(arr[i]>max)  max=arr[i];
    return val(arr,n,i+1,max);
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
    std::cout << val(arr,n,0) << std::endl;

    return 0;
}
