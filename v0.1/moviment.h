#include "posicio.h"
#include "fitxa.h"

const int MAX_MOVIMENTS = 12; 

/*

Ha de servir per guardar la informaci� dels moviments que poden fer les peces del tauler
Haureu de pensar quins atributs fan falta per poder guardar tota la informaci� del moviment, tenint en compte que en un sol moviment la pe�a pot saltar per v�ries posicions del tauler i matar v�ries fitxes contr�ries.
Tingueu en compte que en un moviment s�han de poder guardar totes les posicions per les que ha de passar la fitxa.
A part de les posicions del moviment, pot ser convenient guardar informaci� addicional (si serveix per matar o no, quantes fitxes contr�ries es maten, quines fitxes s�n, ...), depenent de com plantegeu el vostre programa.

Haureu d�afegir tots els m�todes que facin falta per poder gestionar qualsevol tipus de moviment
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