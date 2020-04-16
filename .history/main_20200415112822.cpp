#include <iostream>
#include "pybind11/embed.h"

namespace py = pybind11;

int main() {
  // Starts embedded Python interpreter and keeps it alive with a scope guard
  py::scoped_interpreter guard{};
  // Uses Python API
  py::print("Hello world, from embedded python interpreter's print output!");
  std::cin.get();

  return 0;
}