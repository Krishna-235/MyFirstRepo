#include <iostream>

void print(int arr[], int i, int n){
    if(i==n)   return ;
    
    std::cout << arr[i] << " ";
    print(arr,i+1,n);
}

int main()
{
    std::cout << "Enter N: ";
    int n;
    std::cin >> n;
    int arr[n];
    std::cout << "Enter Elements: " << std::endl;
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }
    print(arr,0,n);

    return 0;
}
