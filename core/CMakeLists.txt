# Header-only until the first core source file exists.
add_library(atlas_core INTERFACE)
add_library(atlas::core ALIAS atlas_core)
target_include_directories(atlas_core INTERFACE include)
target_link_libraries(atlas_core INTERFACE Eigen3::Eigen)
