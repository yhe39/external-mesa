#ifndef _CHECK_DGPU_H
#define _CHECK_DGPU_H
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif
bool intel_is_dgpu_render(void);
bool intel_lower_ctx_priority(void);
#ifdef __cplusplus
}
#endif
#endif
