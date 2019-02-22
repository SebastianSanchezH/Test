// namespaces
#include <iostream>
using namespace std;
#include <fstream>
/*
namespace foo
{
  int value() { return 5; }
}

namespace bar
{
  const double pi = 3.1416;
  double value() { return 2*pi; }
}
*/

void make_twice(const int &a, int &b)
{
  b = a*2;
}

struct A {
  int i;
  int j;
  A() : j(0), i(j) { }
};

int main () {
  //cout << foo::value() << '\n';  // 5
  //cout << bar::value() << '\n';  // 6.2832
  //cout << bar::pi << '\n';   // 3.1416 
  
  int var;
  var = 25;
  int *foo = &var;
  int bar = var;
  

  cout << "var: " << var << '\n';
  cout << "foo: " << foo << '\n';
  cout << "bar: " << bar << '\n';
  cout << "address of bar: " << &bar << '\n';
  cout << "*foo: " << *foo << '\n';
  
  *foo = 30;
  cout << "var: " << var << '\n';
  const int a = 5;
  int b = 0;
  make_twice(a,b);
  cout << b << '\n';
  A object;
  cout << object.i << '\n';

  string name = "example.txt";

  std::ofstream outfile;

  outfile.open("test.txt", std::ios_base::app);
  outfile << "Data\n";
  outfile.close();
  return 0;
}
