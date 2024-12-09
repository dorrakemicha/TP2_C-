#ifndef STEPGENERATOR_H
#define STEPGENERATOR_H

#include "TimeSeriesGenerator.h" // Base class
#include <vector>                // Pour utiliser std::vector

// Classe StepGenerator d�riv�e de TimeSeriesGenerator
class StepGenerator : public TimeSeriesGenerator {
public:
    StepGenerator();                    // Constructeur par d�faut
    StepGenerator(int seed);            // Constructeur avec graine
    vector<double> generateTimeSeries(int size) override; // G�n�re une s�rie temporelle
};

#endif
