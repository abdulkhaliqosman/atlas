function(atlas_add_test name)
  add_executable(${name} ${ARGN})
  target_link_libraries(${name} PRIVATE doctest::doctest_with_main atlas_warnings)
  add_test(NAME ${name} COMMAND ${name})
endfunction()

atlas_add_test(toolchain_smoke toolchain_smoke_tests.cpp)
target_link_libraries(toolchain_smoke PRIVATE atlas::core ${OpenCV_LIBS})

atlas_add_test(week01_geometry week01_geometry_tests.cpp)
target_link_libraries(week01_geometry PRIVATE atlas::core)

atlas_add_test(week01_image week01_image_tests.cpp)
target_link_libraries(week01_image PRIVATE atlas::imaging)
