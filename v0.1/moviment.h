#include "posicio.h"
#include "fitxa.h"

const int MAX_MOVIMENTS = 12; 

/*

Ha de servir per guardar la informació dels moviments que poden fer les peces del tauler
Haureu de pensar quins atributs fan falta per poder guardar tota la informació del moviment, tenint en compte que en un sol moviment la peça pot saltar per vàries posicions del tauler i matar vàries fitxes contràries.
Tingueu en compte que en un moviment s’han de poder guardar totes les posicions per les que ha de passar la fitxa.
A part de les posicions del moviment, pot ser convenient guardar informació addicional (si serveix per matar o no, quantes fitxes contràries es maten, quines fitxes són, ...), depenent de com plantegeu el vostre programa.

Haureu d’afegir tots els mètodes que facin falta per poder gestionar qualsevol tipus de moviment
*/


class Moviment
{
public:
	Moviment();
private:
	Posicio m_movimentActual[MAX_MOVIMENTS];
	int m_nPossiblesMoviments;
	Posicio m_movimentsValids[MAX_MOVIMENTS];
	Posicio posicionsValides[MAX_MOVIMENTS];
};