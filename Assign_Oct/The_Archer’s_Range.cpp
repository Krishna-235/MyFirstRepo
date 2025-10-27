#include <iostream>

int main()
{
    int n;
    std::cout << "Enter N: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter Array: " << std::endl;
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }
    int key;
    std::cout << "Enter Key Element: ";
    std::cin >> key;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key){
            index=i;
            break;
        }
    }
    std::cout << "Index:" << index << std::endl;

    return 0;
}
