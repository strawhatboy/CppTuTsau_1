// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include "OBJ.h"

typedef void (OBJ::*XXFUNC) ();
#define XXFUNC_SELECTOR(_p) (XXFUNC)(&_p)
// TODO: reference additional headers your program requires here
