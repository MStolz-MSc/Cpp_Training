// template and template classes in C++. Generic programming

#include <iostream>
using namespace std;

template <class A_Type> class calc
{
  public:
    A_Type multiply(A_Type x, A_Type y);
    A_Type add(A_Type x, A_Type y);
};
template <class A_Type> A_Type calc<A_Type>::multiply(A_Type x,A_Type y)
{
  return x*y;
}
template <class A_Type> A_Type calc<A_Type>::add(A_Type x, A_Type y)
{
  return x+y;
}

int main()
{
  calc <double> sum1;
  cout<<sum1.add(4.3,2.);
}


// normal way, non generic.

//class calc
//{
//  public:
//    int multiply(int x, int y);
//    int add(int x, int y);
// };
//int calc::multiply(int x, int y)
//{
//  return x*y;
//}
//int calc::add(int x, int y)
//{
//  return x+y;
//}
//
//int main()
//{
//    calc sum1;
//    cout<<sum1.add(3.2,1.);
//}
