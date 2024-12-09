#include "StepGenerator.h" // Inclut l'en-tête StepGenerator
#include <cstdlib>         // Pour srand() et rand()

using namespace std;

// Constructeur par défaut
StepGenerator::StepGenerator() : TimeSeriesGenerator() {}

// Constructeur avec graine
StepGenerator::StepGenerator(int seed) : TimeSeriesGenerator(seed) {}

// Génère une série temporelle de taille donnée
vector<double> StepGenerator::generateTimeSeries(int size) {
    vector<double> series;
    series.push_back(0); // Valeur initiale

    srand(seed); // Initialise le générateur aléatoire

    for (int i = 1; i < size; ++i) {
        double randomValue = rand() / static_cast<double>(RAND_MAX);
        if (randomValue < 0.5) {
            series.push_back(series.back()); // Répète la dernière valeur
        } else {
            series.push_back(rand() % 101); // Nouvelle valeur aléatoire
        }
    }

    return series;
}
