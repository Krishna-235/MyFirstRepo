#include <iostream>

void reverse(int arr[], int i)
{
    if(i==-1) return;
    
    std::cout << arr[i] << " ";
    
    reverse(arr,i-1);
}

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) 
      std::cin >> arr[i];
       
    reverse(arr, n-1);
    return 0;
}
