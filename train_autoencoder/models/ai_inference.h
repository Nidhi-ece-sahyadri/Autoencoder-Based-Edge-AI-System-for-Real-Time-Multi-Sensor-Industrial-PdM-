#ifndef AI_INFERENCE_H
#define AI_INFERENCE_H

#ifdef __cplusplus
extern "C" {
#endif

void AI_Init(void);
float AI_Run(float *input, int len);

#ifdef __cplusplus
}
#endif

#endif
