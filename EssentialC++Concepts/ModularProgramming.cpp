#include<iostream>
using namespace std;

int area(int length,int breadth)
{
 return length*breadth;
}

int perimeter(int length,int breadth)
{
return 2*(length+breadth);
}
//Modular programming everything inside main()
int main()
{
    int length=0,breadth=0;
  cin>>"Enter Length And Breadth"<<endl;
    cin>>length>>breadth;
    
    //area 
      int a=area(length,breadth);
    cout<<a<<endl;
    
    //perimeter
    int p= perimeter(length,breadth);
    cout<<p<<endl;
}
