#include<iostream>
using namespace std;
 void func(int n){
     if(n>0)
     {
         cout<<n<<" ";
         func(n-1);  ///tail recurrsion 5 4 3 2 1 if n=5
     }
 }
 
 void func1(int n){
     if(n>0)
     {
         
         func1(n-1);  ///head recurrsion values 12345
         cout<<n<<" ";
     }
 }
 

int main()
{
    int n=0;
    cout<<"Enter N value: ";
    cin>>n;
    func(n);
    cout<<endl;
    func1(n);
}
