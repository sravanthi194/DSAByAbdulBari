#include<iostream>
using namespace std;


struct Rectangle
{
    int length;
    int breadth;
};


void initialize(struct Rectangle *r,int length,int breadth) //pass by value
{ 
  r->length=length;
  r->breadth=breadth;  //same way here we have rectangle r obj if in class since in class func initialize will part of it so this->length =length we write
  
}
int area(struct Rectangle r)
{
    return r.length*r.breadth;
}

void changeLength(struct Rectangle *r,int length)
{
    r->length=length;
}
int main()
{
    struct Rectangle r;  ///creating in stack completely 
    initialize(&r,10,5);
    cout<<r.length<<" "<<r.breadth<<endl; 
    cout<<area(r)<<endl;
    changeLength(&r,20);  //can we use reference or pointer will do same will impact actually values/parameters referencewon't be used in heavy /nested loops in it (can use pointer) if straight forward can use reference
cout<<r.length<<" "<<r.breadth; 
    
}

//example
#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r,int length,int breadth)
{
    r->length=length;
    r->breadth=breadth;
}
int area(struct Rectangle r)
{
 return r.length*r.breadth;
}

int perimeter(struct Rectangle r)
{
return 2*(r.length+r.breadth);
}
//Modular programming everything inside main()
int main()
{
    struct Rectangle r={0,0};
    cout<<"Enter Length And Breadth"<<endl;
    // cin>>r.length>>r.breadth;
     
    
    //instead of directly assigning use initialize func
    int l=0,b=0;
    cin>>l>>b;
    initialize(&r,l,b);
    
    
    //area 
      int a=area(r);
    cout<<a<<endl;
    
    //perimeter
    int p= perimeter(r);
    cout<<p<<endl;
}
