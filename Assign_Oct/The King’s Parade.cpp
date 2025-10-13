

#include <iostream>

bool check(int arr[], int i,int size)
{
    if(i==size-1) return true;
    
    if(arr[i]>arr[i+1]) return false;
    return check(arr,i+1,size);
}

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }
    bool s=check(arr,0,n) ;
    if(s)
    std::cout << "True" << std::endl;
    else
    std::cout << "False" << std::endl;

    return 0;
}
