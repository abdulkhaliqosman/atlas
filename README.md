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
| `core/` | Math and profiling |
| `imaging/` | Image storage, views and processing |
| `tools/` | Week-by-week experiment programs |
| `tests/` | doctest unit tests, one file per topic |
| `assets/` | Small deterministic test inputs |
| `evidence/` | Weekly evidence records: predictions, results, test output, captures, notes. See the curriculum's `Guideline_Atlas_Evidence.md` |
