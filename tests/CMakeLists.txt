atlas_add_test(toolchain_smoke toolchain_smoke_tests.cpp)
target_link_libraries(toolchain_smoke PRIVATE atlas::core ${OpenCV_LIBS})
