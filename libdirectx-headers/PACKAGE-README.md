# libdirectx-headers - Direct3D 12 headers and D3DX12 helper library

This is a `build2` package for the
[`DirectX-Headers`](https://github.com/microsoft/DirectX-Headers)
C++ library. It provides Direct3D 12, DXGI, and DXCore headers together with
the D3DX12 helper library. On Linux and other non-Windows platforms it also
includes the WSL adapter stubs (`wsl/winadapter.h` and friends) that make the
headers consumable outside the Windows SDK.


## Usage

To start using `libdirectx-headers` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libdirectx-headers ^1.619.5
```

Then import the library in your `buildfile`:

```
import libs = libdirectx-headers%lib{directx-headers}
```


## Importable targets

This package provides the following importable targets:

```
lib{directx-headers}
```

The library exports the `include/` directory as a public include root so
consumers write `#include <directx/d3d12.h>`. On non-Windows, `include/wsl/stubs/`
is also on the public include path (WSL adapter stubs). On MinGW the package
also exports `include/directx` so `#include <d3d12.h>` resolves to these
headers rather than MinGW's older bundled copy.


## Configuration variables

This package has no configuration variables.
