////// Faactorial of number using function

// #include<iostream>
// using namespace std;
// void fact(int n){
//     int fact=1;
//     for(int i=n;i>=1;i--){
//         fact=fact*i;
//     }
//     cout<<"The factorial is :"<<fact;
// }
// int main(){
//    int n;
//    cout<<"Enter the number for factorial :";
//    cin>>n;
//    fact(n);
// }


                    ///// Arrange the array in asscending order 
              
// #include <iostream>
// using namespace std;
// void Acending(int arr[] , int n){
      
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     Acending(arr , n);
//     cout << "Sorted array in ascending order: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// -> Leap year


// #include<iostream>
// using namespace std;
// void Lear_year(int a){

//       if((a%4==0 && a%100!=0) || (a%100!=0 && a%400==0)){
//          cout<<"It is Leap year";
//       }
//       else cout<<"not";
    
// }

// int main(){
//     int year;
//     cout<<"Enter the year for check :";
//     cin>>year;
//     Lear_year(year);
// }




// #include<iostream>
// using namespace std;
// void show(int a, int b){

//       a=a+10;
//       b=b+20;
//       }

// int main(){
//     int x,y;
//     cout<<"Enter any 2 numbers";
//     cin>>x>>y;
//     show(x,y);
//     cout<<"\n";
//     cout<<"x="<<x<<"\n";
//     cout<<"y="<<y<<"\n";

// }

// #include<iostream>
// using namespace std;
// void show(int a[])
// {  
//     for(int i=0; i<5; i++)
// {  
//    cout<<a[i]<<"\n";
// }    
// }
// int main()
// {
//     int arr[5]={20,1,4,3,5};
//     show(arr);
//     cout<<"\n output\n";
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<"\n";
//     }
// }      


#include<iostream>
using namespace std;
void show(int arr[])
{  
    for(int i=0; i<5; i++)
{  
    arr[i]=arr[i]+2;
}    
}
int main()
{
    int arr[5]={20,1,4,3,5};
    show(arr);
    cout<<"\n output\n";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<"\n";
    }
}      