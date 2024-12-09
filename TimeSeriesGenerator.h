#ifndef TIMESERIESGENERATOR_H
#define TIMESERIESGENERATOR_H

#include <vector> // Pour std::vector
using namespace std;

// Classe abstraite pour g�n�rer des s�ries temporelles
class TimeSeriesGenerator {
protected:
    int seed; // Graine pour le g�n�rateur al�atoire

public:
    TimeSeriesGenerator();                // Constructeur par d�faut
    TimeSeriesGenerator(int seed);        // Constructeur avec graine
    virtual vector<double> generateTimeSeries(int size) = 0; // M�thode virtuelle pure
    static void printTimeSeries(const vector<double>& series); // Affiche une s�rie
};

#endif
