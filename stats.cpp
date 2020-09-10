#include "stats.h"
#include<cmath>
#include<algorithm> 

Statistics::Stats::Stats() {}
Statistics::Stats::Stats(float avg, float min, float max) {
    this->average = avg;
    this->max = max;
    this->min = min;
}

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {

    if (numbers.size() == 0) {
        return Stats(NAN, NAN, NAN);
    }
    float min = *min_element(numbers.begin(), numbers.end());
    float max = *max_element(numbers.begin(), numbers.end());
    float sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    float avg = sum / numbers.size();
    return Statistics::Stats(avg, min, max);
}
