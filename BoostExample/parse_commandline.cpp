#include <iostream>
#include <string>

#include "boost/program_options.hpp"

namespace po = boost::program_options;

struct Config {
  std::string project_name;
  int time_steps;
  std::string date;
};

Config load_config(std::string filename) {
  Config conf;
  return conf;
}

int main(int argc, char* argv[]) {
  std::cout << "hi" << std::endl;

  po::variables_map vm;
  po::options_description config("Config");
  config.add_options()("project_name", po::value<std::string>(), "Name")(
      "time_steps", po::value<int>())("date", po::value<std::string>(), "Bla")(
      "help", "This is the help");

  po::store(po::parse_command_line(argc, argv, config), vm);
  po::notify(vm);

  if (vm.count("help")) {
    std::cout << config << std::endl;
  }
}