# Header-only until the first imaging source file exists.
add_library(atlas_imaging INTERFACE)
add_library(atlas::imaging ALIAS atlas_imaging)
target_include_directories(atlas_imaging INTERFACE include)
target_link_libraries(atlas_imaging INTERFACE atlas::core)
