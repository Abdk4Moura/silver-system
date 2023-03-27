#include <iostream>

using std::cout;

template <class T, size_t N> 
void print_array(const T (&array)[N]);

// The battle with this code is not over
// We have to figure out how to flatten a multidimensional array

int main()
{
  int jimmy [3][5];

  print_array(jimmy);
}

template <class T> void print_array(const T value) 
{
  cout << "[" << value << "]";
}

template <class T, size_t N> void print_array(const T (&array)[N]) {
  int z = N;
  for (int i = 0; i < z; i++)
    cout << ' ' << i << ' ';
  cout << '\n';
  for (auto n : array)
  {
    cout << '[';
    print_array(n);
    cout << ']';
  }
  cout << '\n';
}
