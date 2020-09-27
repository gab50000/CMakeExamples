#include <iostream>
#include <string>

#include "config.h"

Config load_config(std::string filename) {
  Config conf;
  return conf;
}

int main(int argc, char* argv[]) {
  std::cout << "hi" << std::endl;

  auto opt = get_options();
  auto vm = return_config(argc, argv, opt);

  if (vm.count("help")) {
    std::cout << opt << std::endl;
  }
}