#ifndef POSICIO_H
#define POSICIO_H

#include <string>
#include <fstream>
using namespace std;

const int N_FILES = 8;
const int N_COLUMNES = 8;


class Posicio
{
public:
    Posicio() : m_fila(-1), m_columna(-1) {};
    Posicio(int fila, int columna) { m_fila = fila; m_columna = columna; };
    int getFila() const { return m_fila; };
    int getColumna() const { return m_columna; };
    string toString() const;
    void fromString(const string& pos);
private:
    int m_fila, m_columna;
};


ifstream& operator>>(ifstream& fitxer, Posicio& posicio);
ofstream& operator<<(ofstream& fitxer, const Posicio& posicio);

#endif // POSICIO_H

/*
Ha de servir per codificar qualsevol de les posicions del tauler
Penseu els atributs que ha de tenir per poder guardar una posici� del tauler
Afegiu els m�todes que facin falta: constructor, getters/setters necessaris i tamb� algun m�tode per convertir la posici� en un stringo inicialitzar-la a partir d�un string.
Per poder executar el test que us donarem a Gradescope:
Cal que tingui un constructor que rebi com a par�metre un stringen el format que hem indicat abans quan hem explicat la inicialitzaci� de la partida.
Cal que tingui definida la sobrec�rrega de l�operador ==per poder comparar si dues posicions s�n iguals o no.
*/
