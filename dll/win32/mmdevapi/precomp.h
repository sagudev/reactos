
#ifndef _MMDEVAPI_PRECOMP_H_
#define _MMDEVAPI_PRECOMP_H_

#include <wine/config.h>
#include <wine/port.h>

#include <stdarg.h>

#define WIN32_NO_STATUS
#define _INC_WINDOWS
#define COM_NO_WINDOWS_H

#define COBJMACROS
#define NONAMELESSUNION

#include <windef.h>
#include <winbase.h>
#include <wingdi.h>
#include <winreg.h>
#include <objbase.h>
#include <audiopolicy.h>
#include <endpointvolume.h>
#include <mmdeviceapi.h>

#include <wine/debug.h>
#include <wine/unicode.h>

#include "mmdevapi.h"

#endif /* !_MMDEVAPI_PRECOMP_H_ */
