module;
#include <iostream>
#include <string.h>

export module test;
export struct Hello {
  std::string name;
  int age;
  float height;
} hello;

export void print() {
  Hello h1;
  h1.age = 23;
  h1.name="Shubh";
  std::cout << h1.name << " created struct successfully and my age is "
            << h1.age << "\n";
}