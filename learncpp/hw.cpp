#include <iostream>
#include <limits>

int main() {
  std::cout << "Hello, world!";

  // reset error flags
  std::cin.clear();

  // ignore anything but new line
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  // get one more character
  std::cin.get();

  return 0;
}
