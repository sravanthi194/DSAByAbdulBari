#include<iostream>
using namespace std;

class Rectangle
{ 
private:
    int length;
    int breadth;
    
public:
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
//Modular programming everything inside main()
int main()
{
    //  Rectangle r={0,0}; //direct initialize won't possible for private data members by default all are public
    //Rectangle r; if no constructor and direct initialize function is there this works
    
    Rectangle r(0,0);
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
