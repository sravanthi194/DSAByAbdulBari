#include<iostream>
using namespace std;

//call by value
int add(int a,int b) //prototype /signature/declaration of a function
{
    int c;
    a++; //this won't change x in main function
    cout<<a<<endl;
    c=a+b;    
    
    return c;
}

//call by value  no use

// void swap(int a ,int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

//call by address
void swap(int *a ,int *b)  //when pointers a and b created extra copy which is having address in it of actual parameters
{
    int temp;
    temp=*a;   //since temp is storing value not pointer address need value to store in temp
    *a=*b;       //same goes here
    *b=temp;
}

//call by reference  this is used instead of call by address it is replaced in main func code sec. So, not advisable for large functions since it is part of main func 
void swap(int &a ,int &b) //when a and b are created these are aliases or nicknames for x and y (actual parameters)
{
    int temp;   
    temp=a;  //no change inside a also value 10 as x so directly can store in int variable temp
    a=b;
    b=temp;
}

//misc
void swap(int &a ,int b) //when a and b are created these are aliases or nicknames for x and y (actual parameters)
{
    int temp;   
    temp=a;  //no change inside a also value 10 as x so directly can store in int variable temp
    a=b;
    b=temp;  //op of x and y 5 5
}
void swap(int &a ,int *b) //when a and b are created these are aliases or nicknames for x and y (actual parameters)
{
    int temp;   
    temp=a;  //no change inside a also value 10 as x so directly can store in int variable temp
    a=*b;
    *b=temp;   // op of x and y 5 10
}

int main()
{
    int x,y,z;
    x=10;
    y=5;
    // z= add(x,y);  
    // cout<<x<<endl;
    // cout<<z;
    //swap(x,y); //call by value
   // swap(&x,&y);  //call by address
    swap(x,y); //call by reference
     
    cout<<x<<" "<<y<<endl;
}
