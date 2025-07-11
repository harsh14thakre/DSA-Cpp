// Doubly link list
// It is bidirectional
//  time complexity of insertion(Order of n)
//  time complexity of deletion(Order of 1)

// #include<iostream>
// using namespace std;
// #include<list>
// int main()
// {
//     list<int>l1{20,34,12,78};
//     for(auto p:l1)
//     {
//         cout<<p<<"\t";
//     }
//     li.push_front(100);
//     li.push_back(200);
//     cout<<"\n front data\n";
//     for(auto p:l1)
//     {
//         cout<<p<<"\t";
//     }
//     li.pop_back();
//     li.pop_front();
//     cout<<"\n pop data\n";
//     for(auto p:l1)
//     {
//         cout<<p<<"\t";
//     }
//     li.reverse();
//     cout<<"\n After reversing\n";
//     for(auto p:l1)
//     {
//         cout<<p<<"\t";
//     }


// }


// Lambda function (Anonymous function)
// It is a single line function
// Lambda function returns value

#include<iostream>
using namespace std;
int grt(int a,int b){return a>b;}
int main()
{
    cout<<[](int a,int b){return a>b;}(4,3);
    auto p=[](int a,int b){return a>b;};
    cout<<p(7,8);
}


// it is not callable but we can make it call by pointer 

