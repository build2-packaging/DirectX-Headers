# libdirectx-headers-tests - Direct3D 12 headers and D3DX12 helper library (tests)

This is a `build2` package containing the test suite for the
[`DirectX-Headers`](https://github.com/microsoft/DirectX-Headers) library.
It covers the upstream GoogleTest feature-support suite (`googletest/`) and
the hardware/runtime suite from `test/` (`test.cpp` and
`feature_check_test.cpp`). Hardware executables are built when system
`d3d12.h` is present and are run only when
`config.libdirectx_headers_tests.hw` is true.


## Importable targets

This package exports no targets.


## Configuration variables

```
[bool] config.libdirectx_headers_tests.hw ?= false
```

When true, the hardware executables (`exe{directx-headers-test}` and
`exe{feature-check-test}`) are run by `b test`. They need a working D3D12
adapter. The default is false so CI hosts with an SDK but no GPU do not fail.
