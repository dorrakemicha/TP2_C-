#ifndef TIMESERIESDATASET_H
#define TIMESERIESDATASET_H

#include "TimeSeriesGenerator.h"
#include <vector>       // Pour std::vector
#include <cmath>        // Pour calculs mathématiques (sqrt, pow)
#include <stdexcept>    // Pour gestion des exceptions

using namespace std;

// Classe pour gérer un ensemble de séries temporelles
class TimeSeriesDataset {
private:
    bool znormalize;                     // Indique si les séries doivent être z-normalisées
    bool isTrain;                        // Indique si le dataset est pour l'entraînement
    vector<vector<double>> data;         // Contient les séries temporelles
    vector<int> labels;                  // Contient les étiquettes associées
    int maxLength;                       // Longueur maximale des séries
    int numberOfSamples;                 // Nombre de séries dans le dataset

    vector<double> zNormalizeSeries(const vector<double>& series) const; // Z-normalisation d'une série
    double mean(const vector<double>& series) const;                     // Moyenne d'une série
    double stddev(const vector<double>& series) const;                   // Écart-type d'une série

public:
    TimeSeriesDataset(bool znormalize = true, bool isTrain = true);      // Constructeur
    void addTimeSeries(const vector<double>& series, int label = -1);   // Ajoute une série avec son étiquette
    const vector<vector<double>>& getData() const;                      // Retourne les séries
    const vector<int>& getLabels() const;                               // Retourne les étiquettes
    int getMaxLength() const;                                           // Retourne la longueur maximale
    int getNumberOfSamples() const;                                     // Retourne le nombre de séries
    static double euclidean_distance(const vector<double>& x, const vector<double>& y); // Distance euclidienne
    static double dtw_distance(const vector<double>& x, const vector<double>& y);       // Distance DTW
};

#endif

