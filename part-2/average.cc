// Jacob Fishel
// jacobfishel@csu.fullerton.edu
// @jacobfishel
// Partners: @lsalguero12

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (argc < 2) {
    std::cerr << " Error: Please provide at least one argument.\n";
    return 1;
  }
  double sum{0};
  for (int i = 1; i < argc; i++) {
    double argument_value = std::stod(arguments[i]);
    sum += argument_value;
  }
  double average = sum / (argc - 1);
  std::cout << "average = " << average << std::endl;
  return 0;
}
