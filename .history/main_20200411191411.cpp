#include <iostream>
#include "pybind11/embed.h"
#include "src/bindings/PyTestClass.hpp"

namespace pybind = pybind11;

int main() {
  // Starts embedded Python interpreter and keeps it alive with a scope guard

  pybind::scoped_interpreter guard{};

  // pybind::module::import("sys").attr("argv").attr("append")("");
  // Uses Python API
  // pybind::print("Hello, World from embeded python interpreter's print output!");

  // Imports main module's __dict__ containing all variables and objects, passes
  // the dict object to C++ code.
  pybind::object scope = py::module::import("__main__").attr("__dict__");

  pybind::eval_file("src/py/bindings_test.py", scope);

  // system("python src/py/bindings_test");
  std::cin.get();

  return 0;
}