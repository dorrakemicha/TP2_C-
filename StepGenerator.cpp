#include "StepGenerator.h" // Inclut l'en-t�te StepGenerator
#include <cstdlib>         // Pour srand() et rand()

using namespace std;

// Constructeur par d�faut
StepGenerator::StepGenerator() : TimeSeriesGenerator() {}

// Constructeur avec graine
StepGenerator::StepGenerator(int seed) : TimeSeriesGenerator(seed) {}

// G�n�re une s�rie temporelle de taille donn�e
vector<double> StepGenerator::generateTimeSeries(int size) {
    vector<double> series;
    series.push_back(0); // Valeur initiale

    srand(seed); // Initialise le g�n�rateur al�atoire

    for (int i = 1; i < size; ++i) {
        double randomValue = rand() / static_cast<double>(RAND_MAX);
        if (randomValue < 0.5) {
            series.push_back(series.back()); // R�p�te la derni�re valeur
        } else {
            series.push_back(rand() % 101); // Nouvelle valeur al�atoire
        }
    }

    return series;
}
