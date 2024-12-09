#ifndef TIMESERIESDATASET_H
#define TIMESERIESDATASET_H

#include "TimeSeriesGenerator.h"
#include <vector>       // Pour std::vector
#include <cmath>        // Pour calculs math�matiques (sqrt, pow)
#include <stdexcept>    // Pour gestion des exceptions

using namespace std;

// Classe pour g�rer un ensemble de s�ries temporelles
class TimeSeriesDataset {
private:
    bool znormalize;                     // Indique si les s�ries doivent �tre z-normalis�es
    bool isTrain;                        // Indique si le dataset est pour l'entra�nement
    vector<vector<double>> data;         // Contient les s�ries temporelles
    vector<int> labels;                  // Contient les �tiquettes associ�es
    int maxLength;                       // Longueur maximale des s�ries
    int numberOfSamples;                 // Nombre de s�ries dans le dataset

    vector<double> zNormalizeSeries(const vector<double>& series) const; // Z-normalisation d'une s�rie
    double mean(const vector<double>& series) const;                     // Moyenne d'une s�rie
    double stddev(const vector<double>& series) const;                   // �cart-type d'une s�rie

public:
    TimeSeriesDataset(bool znormalize = true, bool isTrain = true);      // Constructeur
    void addTimeSeries(const vector<double>& series, int label = -1);   // Ajoute une s�rie avec son �tiquette
    const vector<vector<double>>& getData() const;                      // Retourne les s�ries
    const vector<int>& getLabels() const;                               // Retourne les �tiquettes
    int getMaxLength() const;                                           // Retourne la longueur maximale
    int getNumberOfSamples() const;                                     // Retourne le nombre de s�ries
    static double euclidean_distance(const vector<double>& x, const vector<double>& y); // Distance euclidienne
    static double dtw_distance(const vector<double>& x, const vector<double>& y);       // Distance DTW
};

#endif

