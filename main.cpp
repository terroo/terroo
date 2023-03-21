#include "socials.hpp"

auto main( int argc , char **argv ) -> int {
  const std::string cpp = (argc > 1 ? argv[1] : "");
  auto s = std::make_unique<Socials>(cpp);
  s->get_socials();
  return EXIT_SUCCESS;
}
