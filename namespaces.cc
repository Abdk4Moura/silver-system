#include <iostream>

using namespace std;

namespace first
{
  int x = 5;
  int y = 10;
}

namespace second
{
  double x = 3.1416;
  double y = 2.7183;
}

int main()
{
  // using first::x;
  // using second::y;
//
  // cout << x << '\n';
  // cout << y << '\n';
//
  // cout << second::x << '\n';
  // cout << second::y << '\n';

  // It is also possible to use it like so:
  {
    using namespace first;

    cout << x << " ";
    cout << y << '\n';
  }

  {
    using namespace second;

    cout << x << " ";
    cout << y << '\n';
  }

  return 0;
}
