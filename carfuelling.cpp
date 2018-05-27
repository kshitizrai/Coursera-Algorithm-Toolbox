#include <iostream>     // std::cout
#include <algorithm>    // std::partition, std::partition_point
#include <vector>       // std::vector

bool IsOdd (int i) { return (i%2)==1; }

int main () {
  std::vector<int> foo {3,3,3,3};
  std::vector<int> odd;

  std::partition (foo.begin(),foo.end(),IsOdd);

  auto it = std::partition_point(foo.begin(),foo.end(),IsOdd);
  odd.assign (foo.begin(),it);

  // print contents of odd:
  std::cout << "odd:";
  for (int& x:odd) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
