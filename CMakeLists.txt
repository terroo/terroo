cmake_minimum_required(VERSION 3.10)
set_property(GLOBAL PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)

project(MySocials
  LANGUAGES CXX
  VERSION 0.1.0
)

add_compile_options(-Wall -Wextra -Wpedantic)
add_compile_options(-Wunused-const-variable -Wunused-variable)
#add_compile_options(-fsanitize=address)
add_compile_options(-pedantic-errors -Wconversion)
add_compile_options(-Wfatal-errors -Wnull-dereference)

set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_STANDARD 20)
add_executable(socials main.cpp socials.cpp)

install(TARGETS socials DESTINATION bin)

add_custom_target("uninstall" COMMENT "Uninstall installed files")
add_custom_command(
    TARGET "uninstall"
    POST_BUILD
    COMMENT "Uninstall files with install_manifest.txt"
    COMMAND xargs rm -vf < install_manifest.txt || echo Nothing in
            install_manifest.txt to be uninstalled!
)
