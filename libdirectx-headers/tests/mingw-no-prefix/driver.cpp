#ifdef __MINGW32__
#  include <unknwn.h>
#endif
#include <d3d12.h>

static_assert(D3D12_SDK_VERSION >= 619,
              "expected modern d3d12.h from package, not MinGW's old bundled header");

int main () { return 0; }
