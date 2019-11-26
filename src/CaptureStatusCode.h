#ifndef _SRC_CAPTURE_STATUS_CODE_H_
#define _SRC_CAPTURE_STATUS_CODE_H_

#include <string>

namespace media
{
enum StatusCode
{
	CAPTURE_OK = 0,
	CAPTURE_ERROR_BITBIT,
	CAPTURE_ALLOC_FAILED,
	CAPTURE_GETBITS_FAILED,
	CAPTURE_INVALID_PARAMETER,
	CAPTURE_NO_IMPLEMENT,
	CAPTURE_GET_DIBITS_FAILED,
	CAPTURE_CREATE_D3D9_FAILED,
    CAPTURE_CREATE_D3D9DEVICE_FAILED,
    CAPTURE_D3D_GETDISAPLAYMODE_FAILED,
    CAPTURE_CREATE_D3DSURFACE_FAILED,
    CAPTURE_D3D_GETFRONTBUFF_FAILED,
    CAPTURE_D3D_LOCKRECT_FAILED,
    CAPTURE_D3D_INIT_DXGI_FAILED,
    CAPTURE_D3D_QUERY_DXGIDEVICE_INTERFACE_FAILED,
    CAPTURE_D3D_QUERY_DXGIADAPTER_INTERFACE_FAILED,
    CAPTURE_D3D_QUERY_DXGIOUTPUT_INTERFACE_FAILED,
    CAPTURE_D3D_QUERY_DXGIOUTPUT1_INTERFACE_FAILED,
    CAPTURE_D3D_DUPLICATION_OUTPUT_FAILED,
    CAPTURE_D3D_FRAME_NOCHANGE,
    CAPTURE_D3D_QUERY_DXGITEXTURE_INTERFACE_FAILED,
    CAPTURE_D3D_CREATE_DXGITEXTURE_FAILED,
    CAPTURE_D3D_QUERY_DXGISURFACE_INTERFACE_FAILED,
    CAPTURE_D3D_DXGI_MAPPED_RECT_FAILED,
    CAPTURE_X11_OPEN_DISPLAY_FAILED,
    CAPTURE_X11_GET_IMAGE_FAILED,
};
}

#endif // _SRC_CAPTURE_STATUS_CODE_H_