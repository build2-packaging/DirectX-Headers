# libdirectx-guids - DirectX GUID definitions for cross-platform use

This is a `build2` package for the
[`DirectX-Headers`](https://github.com/microsoft/DirectX-Headers)
C++ library. It provides compiled GUID definitions for D3D12, DXCore, and
related interfaces via `src/dxguids.cpp` (which defines `INITGUID` before
including the D3D12 headers). This is the cross-platform alternative to
linking `dxguid.lib` from the Windows SDK.


## Usage

To start using `libdirectx-guids` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libdirectx-headers ^1.619.5
depends: libdirectx-guids ^1.619.5
```

Then import the library in your `buildfile`:

```
import libs = libdirectx-headers%lib{directx-headers} \
              libdirectx-guids%liba{directx-guids}
```


## Importable targets

This package provides the following importable targets:

```
liba{directx-guids}
```

Note that the library is static-only.


## Configuration variables

This package has no configuration variables.
