#include <fstream>
#include <iostream>

#include "config.h"

int main(int argc, char* argv[]) {
  std::ifstream configfile{"config.ini"};

  po::variables_map vm;
  auto opt = get_options();
  auto parsed = po::parse_config_file("config.ini", opt, true);
  po::store(parsed, vm);
  po::notify(vm);

  for (auto &[a, b] : vm) {
    std::cout << a << ", " << b.as<std::string>() << std::endl;
  }
}