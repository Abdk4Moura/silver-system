#include <iostream>

using std::cout;

template <class T, size_t N>
void print_array(const T (&array)[N]);

int main()
{
  int foo [5];

  print_array(foo);

  cout << '\n';

  int bar [5] = { 16, 2, 77, 40, 12071 };
  print_array(bar);
}

template <class T, size_t N>
void print_array(const T (&array)[N])
{
  int z = N;
  for (int i = 0; i < z; i++)
    cout << ' ' << i << ' ';
  cout << '\n';
  for (auto n : array)
    cout << '[' << n << ']';
  cout << '\n';
}

/*
 * For fixed size wahala, there is a form thereof
 * like so:
 * void print_array(const int (&array)[10])
 * {
 *   int z = size_t(array); 
 *   for (int i = 0; i < z; i++)
 *      cout << ' ' << i << ' ';
 *      ..................
 *      .............
 * }
 *
 * But as we see, this only works if the size of the array
 * is known aforetime. We also still need to calculate
 * the length of the array inside the function body
 */
