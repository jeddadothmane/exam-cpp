#ifndef KNN_H
#define KNN_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
class KNN {

private :
    int k;

public :
    // Default constructor
    KNN() : k(1) {}

    // Parameterized constructor
    KNN(int k) : k(k) {}

    //getter
    int getK() const {
        return k;
    }

    // trouver les plus proches 'k' voisins
    vector<int> findNearestNeighbours(const vector<T>& trainData, const T& target) {
        if (k <= 0) {
            throw invalid_argument("k doit etre plus grqnde que 0");
        }

        vector<pair<int, double>> distances;
        for (int i = 0; i < trainData.size(); ++i) {
            distances.push_back(make_pair(i, similarityMeasure(trainData[i], target)));
        }

        sort(distances.begin(), distances.end(),
                  [](const pair<int, double>& a, const pair<int, double>& b) {
                      return a.second < b.second;
                  });

        vector<int> neighbors;
        for (int i = 0; i < k && i < distances.size(); ++i) {
            neighbors.push_back(distances[i].first);
        }

        return neighbors;
    }

    virtual double similarityMeasure(const T& a, const T& b) const = 0;

    virtual ~KNN() {}
    };

#endif