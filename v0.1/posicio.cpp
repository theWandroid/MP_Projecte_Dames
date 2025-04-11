#include "posicio.h"

string Posicio::toString() const
{
    string pos = "a1";
    pos[0] = 'a' + m_columna;
    pos[1] = '1' + (N_FILES - 1) - m_fila;
    return pos;
}

void Posicio::fromString(const string& pos)
{
    m_fila = (N_FILES - 1) - (pos[1] - '1');
    m_columna = pos[0] - 'a';

}

void llegeixFitxa(const string& nomFitxer, char& tipusFitxa, Posicio& posicio)
{
    ifstream fitxer(nomFitxer);
    //fitxer.open();
    fitxer >> tipusFitxa;
    fitxer >> posicio;
    fitxer.close();
}

void escriuFitxa(const string& nomFitxer, char tipusFitxa, const Posicio& posicio)
{
    ofstream fitxer(nomFitxer);
    //fitxer.open();
    fitxer << tipusFitxa << ' ';
    fitxer << posicio;
    fitxer.close();
}

ifstream& operator>>(ifstream& fitxer, Posicio& posicio)
{
    //char fila, columna;
    string posAux;
    fitxer >> posAux;
    posicio.fromString(posAux);
    return fitxer;

}

ofstream& operator<<(ofstream& fitxer, const Posicio& posicio)
{
    string posAux = posicio.toString();
    fitxer << posAux;
    return fitxer;
}