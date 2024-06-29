#include<iostream>
using namespace std;

//monolithic programming everything inside main()
int main()
{
    int length=0,breadth=0;
    //input from user
    cin>>"Enter Length And Breadth<<endl;
    cin>>length>>breadth;
    
    //area 
    int area=length*breadth;
    cout<<area<<endl;
    
    //perimeter
    int perimeter= (0.5)*(length*breadth);
    cout<<perimeter<<endl;
}
