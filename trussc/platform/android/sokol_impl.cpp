// =============================================================================
// sokol backend implementation (Android)
// =============================================================================
// NOTE: SOKOL_NO_ENTRY is NOT defined on Android.
// sokol_app.h provides ANativeActivity_onCreate() as the entry point,
// which calls sokol_main() to get the sapp_desc.
// sapp_run() is NOT supported on Android.
// =============================================================================

#ifdef __ANDROID__

#define SOKOL_IMPL

#include "sokol_log.h"
#include "sokol_app.h"
#include "sokol_gfx.h"
#include "sokol_glue.h"
#include "util/sokol_gl_tc.h"

#endif // __ANDROID__
