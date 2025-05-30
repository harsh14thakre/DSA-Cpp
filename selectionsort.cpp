// in all cases time complexity is order of square

#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,14,2,5,7};
    int s=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }

    int i,min;
    for(i=0;i<s;i++)
    {
        min=i;
        for(int j=i+1;j<s;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int swp;
            swp=arr[min];
            arr[min]=arr[i];
            arr[i]=swp;
        }
    }
    cout<<"\n after selection sort\n";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}