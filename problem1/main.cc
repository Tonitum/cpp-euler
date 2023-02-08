/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we
* get 3, 5, 6 and 9. The sum of these multiples is 23.
* Find the sum of all the multiples of 3 or 5 below 1000. */
#include <iostream>
bool multipleOfThreeOrFive(int possibleMultiple) {
  if (0 == possibleMultiple % 5) {
    return true;
  }
  if (0 == possibleMultiple % 3) {
    return true;
  }
  return false;
}

int main() {
  const int MAX = 1000;
  int sum = 0;
  for(int i = 0; i<MAX; i++) {
    if (multipleOfThreeOrFive(i)) {
      sum += i;
    }
  }
  std::cout << "Multiples of Three or Five: Sum" << std::endl;
  std::cout << sum << std::endl;
}
