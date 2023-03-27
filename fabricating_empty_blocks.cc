#include <iostream>

using namespace std;

int main()
{
  int x = 10;
  int y = 20;
  {
    int x; // ok, a fabricated inner scope;
    x = 50;
    y = 50;

    cout << "inner blocks:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
  }
  cout << "outer block:\n";
  cout << "x: " << x << '\n';
  cout << "y: " << y << '\n';

  return (0);
}
