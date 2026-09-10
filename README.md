# DirectX-Headers - Direct3D 12 headers and helpers

This is a `build2` package repository for
[`DirectX-Headers`](https://github.com/microsoft/DirectX-Headers),
the official Direct3D 12 headers and D3DX12 helpers published under the MIT
license.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use these
packages in your `build2`-based project, see the accompanying package
READMEs:

- [`libdirectx-headers/PACKAGE-README.md`](libdirectx-headers/PACKAGE-README.md)
- [`libdirectx-guids/PACKAGE-README.md`](libdirectx-guids/PACKAGE-README.md)
- [`libdirectx-headers-tests/PACKAGE-README.md`](libdirectx-headers-tests/PACKAGE-README.md)

The development setup uses the standard `bdep`-based workflow. For example:

```
git clone --recurse-submodules https://github.com/build2-packaging/DirectX-Headers.git
cd DirectX-Headers

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
