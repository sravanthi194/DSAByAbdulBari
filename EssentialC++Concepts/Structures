#include<iostream>
using namespace std;

//defining
struct Rectangle
{
   int length;   //can't assign here only bcoz it is juz defining
   int breadth;
   //char x; //it has to take 1 byte since char but size of sturcture is 12bytes making accesibility easy taking greater size but only uses only 1 byte and this adjustment in memoryy called as padding
//}r1, r2,r3; //can declare with definition also
    
};
 


//struct Rectangle r1;// this can be accessible for all functions  since it is global 

int main()
{
    //declaration of a variable it is local to main () vcan decalre out side main()? yes
    struct Rectangle r;
    
    //dec + definition
    struct Rectangle r1={10,15};
    
    //size of a structure
    cout<<sizeof(r)<<endl;
    //or both are same
    cout<<sizeof(Rectangle);
    
    //accessing members
    r.length=10;
    r.breadth=5;
   cout<<"Area of a rectangle : "<<r.length*r.breadth;
    
    
}
