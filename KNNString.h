#ifndef KNN_STRING_H
#define KNN_STRING_H

#include "KNN.h"
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class KNNString : public KNN<vector<string>> {
public:
    using KNN::KNN;

    double similarityMeasure(const vector<string>& a, const vector<string>& b) const override {
        if (a.size() != b.size()) {
            throw invalid_argument("Vectors must be of the same size.");
        }
        double totalDistance = 0.0;
        for (size_t i = 0; i < a.size(); ++i) {
            totalDistance += computeLevenshteinDistance(a[i], b[i]);
        }
        return totalDistance;
    }

    static size_t computeLevenshteinDistance(const string& s1, const string& s2) {
        size_t m = s1.size();
        size_t n = s2.size();
        vector<size_t> costs(n + 1);

        for (size_t i = 0; i <= n; i++) {
            costs[i] = i;
        }

        for (size_t i = 1; i <= m; i++) {
            costs[0] = i;
            size_t corner = i - 1;
            for (size_t j = 1; j <= n; j++) {
                size_t upper = costs[j];
                costs[j] = min({costs[j] + 1, costs[j - 1] + 1, corner + (s1[i - 1] == s2[j - 1] ? 0 : 1)});
                corner = upper;
            }
        }

        return costs[n];
    }
};

#endif
