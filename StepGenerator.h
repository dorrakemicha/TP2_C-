#ifndef STEPGENERATOR_H
#define STEPGENERATOR_H

#include "TimeSeriesGenerator.h" // Base class
#include <vector>                // Pour utiliser std::vector

// Classe StepGenerator dérivée de TimeSeriesGenerator
class StepGenerator : public TimeSeriesGenerator {
public:
    StepGenerator();                    // Constructeur par défaut
    StepGenerator(int seed);            // Constructeur avec graine
    vector<double> generateTimeSeries(int size) override; // Génère une série temporelle
};

#endif
