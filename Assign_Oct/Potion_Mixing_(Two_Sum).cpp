#include <iostream>

int main()
{
    std::cout << "Enter Array Length: ";
    int n;
    std::cin >> n;
    int arr[n];
    std::cout << "Enter Array Elements: " << std::endl;
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }
    std::cout << "Enter Target Element: ";
    int t;
    std::cin >> t;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==t)
            {
                a=i,b=j;
                break;
            }
        }
        if(a!=0 && b!=0) 
          break;
    }
    std::cout << "Indices(" << a << "," << b << ")" << std::endl;

    return 0;
}
