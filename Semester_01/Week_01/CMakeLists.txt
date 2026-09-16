# CVIP 501A: Coordinate Geometry Playground
add_executable(s1w01_geometry_playground geometry_playground.cpp)
target_link_libraries(s1w01_geometry_playground PRIVATE atlas::core atlas_warnings)

atlas_add_test(s1w01_geometry geometry_tests.cpp)
target_link_libraries(s1w01_geometry PRIVATE atlas::core)

# CVIP 502A: Image Memory Inspector
add_executable(s1w01_image_inspector image_inspector.cpp)
target_link_libraries(s1w01_image_inspector PRIVATE atlas::imaging ${OpenCV_LIBS} atlas_warnings)

atlas_add_test(s1w01_image image_tests.cpp)
target_link_libraries(s1w01_image PRIVATE atlas::imaging)
