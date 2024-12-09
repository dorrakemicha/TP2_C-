#include "TimeSeriesGenerator.h"
#include <iostream> // Pour std::cout

// Constructeur par défaut, initialise la graine à 0
TimeSeriesGenerator::TimeSeriesGenerator() : seed(0) {}

// Constructeur avec graine
TimeSeriesGenerator::TimeSeriesGenerator(int seed) : seed(seed) {}

// Affiche les valeurs d'une série temporelle
void TimeSeriesGenerator::printTimeSeries(const vector<double>& series) {
    for (double value : series) {
        cout << value << " ";
    }
    cout << endl; // Fin de ligne après l'affichage
}
