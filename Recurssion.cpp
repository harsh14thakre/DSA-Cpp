#include<iostream>
using namespace std;
void Table(int a, int n){

    if(n>10){
        return;
    }
    int k;
    k=a*n;
    cout<<k<<"\t";
    Table(a,n+1);
}
int main(){
   int n;
   cout<<"Enter any number :";
   cin>>n;
   Table(n,1);

}