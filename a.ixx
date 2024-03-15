module;
#include <iostream>

export module MyModule;

int hidden() { return 42; }

export void print_message() {
  std::cout << "Hello from module, the hidden value is: " << hidden()
            << std::endl;
}