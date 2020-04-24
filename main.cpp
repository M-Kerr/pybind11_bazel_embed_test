#include <iostream>
#include "pybind11/embed.h"

namespace py = pybind11;

int main() {
  // Starts embedded Python interpreter
  py::scoped_interpreter guard{};
  // Uses Python API
  py::print("SUCCESS");
  py::exec(
      "import sys\n"
      "print('-------------------')\n"
      "print('Embedded Python Version:')\n"
      "print(sys.version)\n"
      "print('-------------------');");
  std::cout << "Press RETURN to exit";
  std::cin.get();

  return 0;
}
