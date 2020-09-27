#pragma once
#include <string>

#include "boost/program_options.hpp"

namespace po = boost::program_options;

struct Config {
  std::string project_name;
  int time_steps;
  std::string date;
};

po::options_description get_options();

po::variables_map return_config(int argc,
                                char* argv[],
                                po::options_description options);