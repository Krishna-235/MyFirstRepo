

#include <iostream>

void merge(int arr[],int low, int mid, int high)
{
    int left=low;
    int mid_next=mid+1;
    int len=high-low+1;
    int temp[len];
    int index=0;
    
    while(left<=mid&&mid_next<=high)
    {
        if(arr[left]<arr[mid_next])
        {
            temp[index]=arr[left];
            index++; left++;
        }
        else{
            temp[index]=arr[mid_next];
            index++; mid_next++;
        }
    }
    while(left<=mid)
    {
        temp[index]=arr[left];
            index++; left++;
    }
    while(mid_next<=high)
    {
        temp[index]=arr[mid_next];
            index++; mid_next++;
    }
    for(int i=0;i<index;i++)
    {
        arr[low+i]=temp[i];
    }
    
}

void mergesort(int arr[], int low, int high)
{
    if(low>=high) return;
    
    int mid=low+(high-low)/2;
    
    mergesort(arr,low,mid);  //For left
    
    mergesort(arr,mid+1,high);   //For right
    
    merge(arr,low,mid,high);
}

int main()
{
    std::cout << "Enter Length of Array : ";
    int n;
    std::cin >> n;
    int arr[n];
    std::cout << "Enter Array Elements : \n";
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }
    std::cout << "\nArray before Sorting: \n";
     for(int i=0;i<n;i++)
    {
        std::cout << arr[i] << ", ";
    }
    std::cout << "\n\nArray after Sorting: \n";
    mergesort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        std::cout << arr[i] << ", ";
    }
    return 0;
}
