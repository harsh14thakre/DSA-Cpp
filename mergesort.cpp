// -------------------------------MERG SORT---------------------------------------

// 1. Mid value
// 2. Partition
// 3. Divide and Conquer(DAC)
// 4. Merge
// 5. Time Complexity O(nlogn)

// ALL CASES
// 6. Space Complexity O(n)
// 7. Uses two pointers  
// 8. Merge sort is not in place
// 9. Merge sort is used to covert the large problem into subproblem to get the desired result


#include<iostream>
using namespace std;
void merges(int arr[],int low,int mid,int high){
    int b[high+1];
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
        }
        else{
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k]=arr[i];
            i++;
            k++;
    }
    while(j<=high){
        b[k]=arr[j];
            j++;
            k++;
    }
    for (int i=low;i<=high;i++){
        arr[i]=b[i];
    }
}
void mergesort(int arr[],int low ,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merges(arr,low,mid,high);
    }
}
int main (){
    int arr[]={10,3,6,9,3,6,};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<endl;
    }
    mergesort(arr,0,s-1);
    cout<<"after mergesort"<<endl;
    for (int i=0;i<s;i++){
        cout<<arr[i]<<endl;
}
}