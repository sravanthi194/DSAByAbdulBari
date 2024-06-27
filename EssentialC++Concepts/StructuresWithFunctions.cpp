#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    
};

//call by value won't affect actual vaiables
void func(struct Rectangle r) ///sinc e it creates copy here r in argument is diff from main fnc one
{
    r.length=20;
    cout<<"length annd Breadth "<<r.length<<" "<<r.breadth<<endl;

}
//call by address
void func(struct Rectangle *p)
{
    p->length=25;  //or (*p).length=25;
    cout<<"length annd Breadth "<<p->length<<" "<<(*p).breadth<<endl;

}

//function return pointer of type rectangle
struct Rectangle * func()
{   //declaring ptr obj
    struct Rectangle *p;
    //creating rectangle in heap memory
    p=new Rectangle;
    //or  p=new struct Rectangle;
    
    //assigningg values in rectangle struct  data members
    p->length=15;
    p->breadth=5;
    
    return p;
    
    
}

int main()
{
    // struct Rectangle r={10,5};
    // func(r);
    // func(&r);
    // cout<<"length annd Breadth "<<r.length<<" "<<r.breadth<<endl;
    
   //int *p=func();  //gives error can't convert rectangle ptr to int ptr so 
   Rectangle  *p=func(); //struct is optional in cpp
    cout<<p->length<<" "<<p->breadth;
    
}
