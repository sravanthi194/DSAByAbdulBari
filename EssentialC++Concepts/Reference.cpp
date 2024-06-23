#include<iostream>
using namespace std;

int main()
{
    int a=10;
    //int &r; //declared as ref but not initialized
    
    int &r=a; //1st select a prsn and give neck name so a and r are same later on r can't change to some other variable
    
    r=30; //how compiler does we don't know like a and r both on same it is not a pointer
    
    cout<<a<<" "<<r<<endl;
    
    int b=25;
    r=b; //means r assigns 25 in it as in a but won't be reference to be
    
   
    cout<<a<<" "<<r<<endl;
    
    return 0;
}
