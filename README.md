# atlas

Real-time visual reconstruction and SLAM engine, built through the Atlas self-master's programme. Curriculum and evidence live in [atlas-mscs-cvip](https://github.com/abdulkhaliqosman/atlas-mscs-cvip).

## Build

Requires CMake 3.24+, a C++20 compiler, Eigen 3 and OpenCV 4 (`brew install cmake ninja eigen opencv`). doctest is fetched at configure time.

```sh
cmake -S . -B build -G Ninja
cmake --build build
ctest --test-dir build --output-on-failure
```

AddressSanitizer and UBSan are on by default; configure with `-DATLAS_SANITIZE=OFF` to disable them.

## Layout

| Directory | Holds |
| --- | --- |
| `core/` | Shared math and profiling code, reused across weeks |
| `imaging/` | Shared image storage, views and processing, reused across weeks |
| `tests/` | Tests for shared code |
| `assets/` | Small deterministic test inputs |
| `Semester_XX/Week_XX/` | Everything only that week needs: experiment programs, their tests, notes |

Code starts in its week folder. It moves to `core/` or `imaging/` once a later week needs it.
