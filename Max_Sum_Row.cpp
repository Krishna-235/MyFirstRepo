#include <iostream>
using namespace std;

int main()
{
    int n,m;
    std::cout << "Enter Number of Rows" << std::endl;
    std::cin >> m;
    std::cout << "Enter Number of Column" << std::endl;
    std::cin >> n;
   int arr[m][n];
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           std::cin >> arr[i][j];
       }
   }
   
   int sum=0;
   int total=0;
   int row=0;
    for(int i=0;i<m;i++)
   {
       for(int j=0;j<m;j++)
       {
           sum+=arr[i][j];
       }
       if(total<sum)
       {
           total=sum;
           row=i;
       }
       sum=0;
   }
   
   std::cout << "Sum = "<< total << " Row = " << row+1 << std::endl;
    return 0;
}
