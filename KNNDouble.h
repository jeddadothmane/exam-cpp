#ifndef KNN_DOUBLE_H
#define KNN_DOUBLE_H

#include "KNN.h"
#include <utility>
#include <cmath>

using namespace std;

class KNNDouble : public KNN<pair<double, double>> {
public:
    using KNN::KNN;

    double similarityMeasure(const pair<double, double>& a, const pair<double, double>& b) const override {
        double weight_diff = a.first - b.first;
        double height_diff = a.second - b.second;
        return sqrt(weight_diff * weight_diff + height_diff * height_diff);
    }
};

#endif
