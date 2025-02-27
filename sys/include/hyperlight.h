
// These definitions must match functions in ffi.rs
#include <stdint.h>

// for jerryscript Date.now()
uint64_t hyperlight_get_current_time_millis(void);
// for rquickjs Date.now()
uint64_t hyperlight_get_current_time_micros(void);