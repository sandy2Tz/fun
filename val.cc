#include <iostream>
using namespace std;


class A{
public:
  int _a;
  A()
  {
    _a = 1;
  }
  void print(){
    cout<<_a<<endl;
  }
};

class B: public A{
public:
  int _a;
  B()
  {
    _a=2;
  }
};
int main()
{
  B b;
  b.print();
  cout<<b._a<<endl;
}
