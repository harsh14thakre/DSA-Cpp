// // in all cases time complexity is order of square

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={3,14,2,5,7};
//     int s=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<s;i++)
//     {
//         cout<<arr[i]<<"\t";
//     }

//     int i,min;
//     for(i=0;i<s;i++)
//     {
//         min=i;
//         for(int j=i+1;j<s;j++)
//         {
//             if(arr[min]>arr[j])
//             {
//                 min=j;
//             }
//         }
//         if(min!=i)
//         {
//             int swp;
//             swp=arr[min];
//             arr[min]=arr[i];
//             arr[i]=swp;
//         }
//     }
//     cout<<"\n after selection sort\n";
//     for(int i=0;i<s;i++)
//     {
//         cout<<arr[i]<<"\t";
//     }
// }

#include<iostream> 
using namespace std;
void Selection(int arr[], int s){
      int c=0; 
    for(int i=0;i<s;i++){
          int min=i;
        for(int j=i+1;j<s;j++){
             c++;  
            if(arr[j]<arr[min]){
                min=j;
              }
        }
        if(min!=i){
            int swp=arr[i];
            arr[i]=arr[min];
            arr[min]=swp;
        }
    }
    cout<<"Number of hits :"<<c;
}
int main(){
    int s;
    int arr[]={9,4,3,9,1};
    s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    Selection(arr, s);
    cout<<"\nAfter swaping\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}

// Time complexity in all cases is O(n)
// It is inplace 
// Space Complexity   O(1)
// Selection sort is not stable
// OPtimisation  is not possible
// Approach Subraction and Conquer 