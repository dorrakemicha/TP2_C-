#ifndef TIMESERIESGENERATOR_H
#define TIMESERIESGENERATOR_H

#include <vector> // Pour std::vector
using namespace std;

// Classe abstraite pour générer des séries temporelles
class TimeSeriesGenerator {
protected:
    int seed; // Graine pour le générateur aléatoire

public:
    TimeSeriesGenerator();                // Constructeur par défaut
    TimeSeriesGenerator(int seed);        // Constructeur avec graine
    virtual vector<double> generateTimeSeries(int size) = 0; // Méthode virtuelle pure
    static void printTimeSeries(const vector<double>& series); // Affiche une série
};

#endif
