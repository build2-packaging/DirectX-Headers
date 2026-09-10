#ifndef _WIN32
#  include <wsl/winadapter.h>
#endif

#ifdef __MINGW32__
#  include <unknwn.h>
#endif

#include <directx/dxcore_interface.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  const GUID* g = &DXCORE_ADAPTER_ATTRIBUTE_D3D12_CORE_COMPUTE;
  assert (g->Data1 == 0x248e2800u);
}
