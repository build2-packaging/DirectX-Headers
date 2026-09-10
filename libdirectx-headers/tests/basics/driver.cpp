#ifndef _WIN32
#  include <wsl/winadapter.h>
#endif

#ifdef __MINGW32__
#  include <unknwn.h>
#endif

#include <directx/d3dx12_property_format_table.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  const D3D12_PROPERTY_LAYOUT_FORMAT_TABLE::FORMAT_DETAIL* t =
    D3D12_PROPERTY_LAYOUT_FORMAT_TABLE::GetFormatTable ();
  assert (t[0].DXGIFormat == DXGI_FORMAT_UNKNOWN);
}
