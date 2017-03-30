#ifndef TIRAMISU_test_16_h
#define TIRAMISU_test_16_h

#include <tiramisu/utils.h>

#ifdef __cplusplus
extern "C" {
#endif
int test_access_parsing(buffer_t *_p0_buffer) HALIDE_FUNCTION_ATTRS;
int test_access_parsing_argv(void **args) HALIDE_FUNCTION_ATTRS;

extern const struct halide_filter_metadata_t halide_pipeline_aot_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
