#include<iostream>
using namespace std;


void func(int n)
{   if(n>0){
    cout<<" n : "<<n<<" ";
    func(n-1);
    
}
}
  

void func1(int n)
{  if(n>0){
    func1(n-1);
    cout<<" n : "<<n<<" ";
    
}
}
int main()
{   int n=5;
    func(n);
    cout<<endl;
    func1(n);
}
