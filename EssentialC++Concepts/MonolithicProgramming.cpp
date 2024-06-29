#include<iostream>
using namespace std;

//monolithic programming everything inside main()
int main()
{
    int length,breadth;
    cin>>length>>breadth;
    
    //area 
    int area=length*breadth;
    cout<<area<<endl;
    
    //perimeter
    int perimeter= (0.5)*(length*breadth);
    cout<<perimeter<<endl;
}
