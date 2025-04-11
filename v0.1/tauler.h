#ifndef TAULER_H                                             #ifndef TAULER_H
#define TAULER_H
#include "moviment.h"
#include "posicio.h"


const int MAX_FICHAS = 24;

class Tauler
{ 
public:
    Tauler() {};
    ~Tauler();
    void inicialitzaTauler(char taules[N_FILES][N_COLUMNES]);
    void llegeixTauler(const string& nomFitxer, char tauler[N_FILES][N_COLUMNES]);
    void escriuTauler(const string& nomFitxer, char tauler[N_FILES][N_COLUMNES]);
    bool obreFitxer(const string& nomFitxer);
    void mostraFitxer(const string& nomFitxer);
    void mostraTauler(const string& nomFitxer, char tauler[N_FILES][N_COLUMNES]);


    void actualitzaMovimentsValids();
private:

    Fitxa m_fitxesSobreTauler[MAX_FICHAS];
};


//int main_test_as_tauler_dames_s10();
#endif // TAULER_H
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              