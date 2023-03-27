#include <iostream>

using namespace std;

// x is initialised to 0 because it's a static var.
int x;

int main() 
{
  // y remains unitialized until it is.
  int y;
  
  cout << x << '\n';
  cout << y << '\n';
  return 0;
}
