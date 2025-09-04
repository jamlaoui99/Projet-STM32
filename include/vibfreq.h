#ifndef VIBFREQ_H
#define VIBFREQ_H

float vibfreq_rms(const float *x, int n);
float vibfreq_estimate_zero_crossing(const float *x, int n, float fs);

#endif
