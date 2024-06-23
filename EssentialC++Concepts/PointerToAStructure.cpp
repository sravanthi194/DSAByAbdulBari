#include<iostream>
using namespace std;


struct Rectangle
{
  int length;
  int breadth;
    
};

int main()
{  ///object(r) created in static memory /stack 
   struct Rectangle r={10,5};
   struct Rectangle *p;
   p=&r;
   
   r.length=15;
//   p.length=25;

   (*p).length=25;
//  or
  p->length=5;
  
  cout<<r.length<<" "<<r.breadth<<endl;
  
  cout<<p->length<<" "<<p->breadth<<endl;
  
  //Creating objects in Heap Memory for that we need to create by using pointer
  //declare a p1 object for structure
  struct Rectangle *p1 ;
  // creating in object in heap 
  p1=new struct Rectangle; //after new keyword we use datatype so here it is struct for which there can be many so specify here it is Rectangle
  
  //or
  //struct Rectangle *p1 = new struct Rectangle ;
  //assigning values
  p1->length=10;
  p1->breadth=15;
  
cout<<p1->length<<" "<<p1->breadth<<endl;
  delete  p1;
  cout<<p1->length<<" "<<p1->breadth<<endl; //to verify if deletion had happened 

}
