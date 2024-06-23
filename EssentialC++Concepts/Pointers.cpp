#include<iostream>
using namespace std;
int main()
{   
    int a=10;
    int *p;
    p=&a; //assigning address of a to pointer //pointer to a variable
    cout<<a<<endl;
    cout<<"Using pointer:"<<*p<<endl; //dereferencing 
    cout<<p<<endl; //gives address of "a" which is stored in pointer pointer
    //
    cout<<"SizeOf "<<sizeof(p)<<endl;
    //pointer to any array
    
    int A[]={1,2,3,4,5}; //created inside stack whenever declare anything in any func will create in stack
    int *p1;
    p1=&A[0] ;//or p=A //don't use p1=&A invalid syntax bcoz A itself is pointing to 1st address
    cout<<*p1<<endl;
    cout<<A<<endl;
    cout<<&A<<endl;
    cout<<&A[0]<<endl;
    
       for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
        //or
        
    }
      cout<<endl;

    //accessing all elements using pointer
    for(int i=0;i<5;i++)
    {
        cout<<p1[i]<<" ";
       
        
    }
    cout<<endl;
   
   
    
    //Array created in heap
    int *p2;
    p2= new int[5]; //new operator will create menoryy of 5 size in heap and assign address to p2 pointer
    
    //assign values to array in heap
     p2[0]=1;p2[1]=2;p2[2]=3;p2[3]=4;p2[4]=5;
     
     for(int i=0;i<5;i++)
     {
         cout<<p2[i]<<" ";
     }
    
    delete []p2; 
    
    */
    //sizeof pointers leys see
    int *a1;
    char *b;
    float *c;
    double *d;
    cout<<sizeof(a1)<<endl; //all are 8 bytes in new machines as 64bit processor in old machines 4bytees in 32 bit machines
   cout<<sizeof(b)<<endl;
   cout<<sizeof(c)<<endl;
   cout<<sizeof(d)<<endl;
}
