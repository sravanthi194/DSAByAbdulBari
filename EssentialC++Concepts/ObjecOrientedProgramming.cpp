#include<iostream>
using namespace std;

class Rectangle
{ 
private:
    int length;
    int breadth;
    
public:
 void initialize(int length,int breadth)
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
//Modular programming everything inside main()
int main()
{
    Rectangle r; //direct initialize won't possible for private data members by default all are private
     //Rectangle r(0,0);
    cout<<"Enter Length And Breadth"<<endl;
    // cin>>r.length>>r.breadth;
     
    
    //instead of directly assigning use initialize func
    int l=0,b=0;
    cin>>l>>b;
    //r={l,b}; //learned as part of struct how we assigning in data members of r object
    
    r.initialize(l,b);
    //area 
      int a=r.area();
    cout<<a<<endl;
    
    //perimeter
    int p= r.perimeter();
    cout<<p<<endl;
}
