#include<iostream>
using namespace std;

//monolithic programming everything inside main()
int main()
{
    int length=0,breadth=0;  //to avoid  carelessness of programming if directly cout<<length gives garbage so initialize with 0 is a good practise
    //input from user
    cin>>"Enter Length And Breadth<<endl;
    cin>>length>>breadth;
    
    //area 
    int area=length*breadth;
    cout<<area<<endl;
    
    //perimeter
    int perimeter= 2*(length+breadth);
    cout<<perimeter<<endl;
}
