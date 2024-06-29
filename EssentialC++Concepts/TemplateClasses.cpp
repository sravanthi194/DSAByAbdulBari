#include<iostream>
using namespace std;

template<class T>
class Arithmetic
{ 
private:
    T a;
    T b;
    
public:
 Arithmetic(T a,T b);
 T add();
 T sub();
};
template<class T>
Arithmetic<T> :: Arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}
template<class T>
T Arithmetic<T> ::  add()
{ 
    T c;
    c=a+b;
 return c;
}

template<class T>
T Arithmetic<T> :: sub()
{
  T c;
    c=a-b;
 return c;
}

int main()
{
    Arithmetic<int> a(10,5);
    cout<<a.add()<<endl;
    cout<<a.sub()<<endl;
    
       Arithmetic<float> a1(1.5,1.2);
    cout<<a1.add()<<endl;
    cout<<a1.sub();
    
}
