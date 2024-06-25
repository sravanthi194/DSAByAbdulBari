#include<iostream>
using namespace std;


//void func1(int A[],int n) //array are always pass by address so taking as parameter can use as int *A also
void func1(int *A,int n){
    //cout<<sizeof(A)/sizeof(int)<<endl;  // since A is pointer 8/4 =2 wrong won't give the no of elements or size of array
//   for(int a: A)
//   {
//       cout<<a<<" ";  //error problem is can't use for each loop on pointer can use for array since parameter is ptr
//   }
      //how this func1 knows the size of an array? so we pass size always we pass size as no of elements
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
    //if any modifications then it will change in main array
    A[0]=15;  //call by address 
}



//creating array in func and return type as array 

//int [] func(int size)  //[] all time won't work it is old way can use instead of '[] ' as '*'

int * func(int size) 
{
    int *p;
    p=new int[size];
    
    for(int i=0 ;i<size;i++)
    p[i]=i+1;
    
    // for(int i :p ) //can't we for each with the pointer 
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    return p;
}
int main()
{
    // int A[]={2,4,6,8,10}; //size not mentioned then it is depends on no of elements
    
    // int n=5;
    // func1(A,n);
    //  //cout<<sizeof(A)/sizeof(int)<<endl;
    // for(int i: A)
    // {
    //     cout<<i<<" ";
    // }
    int *a,sz=7;
    a=func(sz);
    
    
    for(int i=0;i<sz;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
