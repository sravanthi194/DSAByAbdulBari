#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;

Rectangle(int length,int breadth)
{
    this->length=length;
    this->breadth=breadth;
}
int area()
{
 return length*breadth;
}

int perimeter()
{
return 2*(length+breadth);
}
};
//Classes And Constructors
int main()
{
    struct Rectangle r={0,0};
    cout<<"Enter Length And Breadth"<<endl;
    // cin>>r.length>>r.breadth;
     
    
    //instead of directly assigning use initialize func
    int l=0,b=0;
    cin>>l>>b;
    r={l,b};
    
    
    //area 
      int a=r.area();
    cout<<a<<endl;
    
    //perimeter
    int p= r.perimeter();
    cout<<p<<endl;
}
