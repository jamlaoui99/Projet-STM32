#include "vibfreq.h"
#include <math.h>

float vibfreq_rms(const float *x, int n) {
    double s = 0;
    for (int i=0;i<n;i++) s += x[i]*x[i];
    return sqrt(s/n);
}

float vibfreq_estimate_zero_crossing(const float *x, int n, float fs) {
    int crossings = 0;
    for (int i=1;i<n;i++) {
        if ((x[i-1] < 0 && x[i] > 0) || (x[i-1] > 0 && x[i] < 0)) crossings++;
    }
    return (crossings/2.0f) * (fs / n);
}
