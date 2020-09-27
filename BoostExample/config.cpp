#include "config.h"

po::options_description get_options() {
  po::options_description config("Config");
  config.add_options()("project_name", po::value<std::string>(), "Name")(
      "time_steps", po::value<int>())("date", po::value<std::string>(), "Bla")(
      "help", "This is the help");
  return config;
}

po::variables_map return_config(int argc,
                                char** argv,
                                po::options_description options) {
  po::variables_map vm;
  po::store(po::parse_command_line(argc, argv, options), vm);
  po::notify(vm);
  return vm;
}