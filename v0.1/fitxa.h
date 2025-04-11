#ifndef FITXA_H
#define FITXA_H
#include "posicio.h"


//Clase Fitxa
class Fitxa
{
public: 
	Fitxa() : m_tipusFitxa(' '), m_posicioFitxa() {};
	Fitxa(char tipusFitxa, Posicio posFitxa) { m_tipusFitxa = tipusFitxa; m_posicioFitxa = posFitxa; };
	char getTipusFitxa() { return m_tipusFitxa; };
	Posicio getPosicioFitxa() { return m_posicioFitxa; };
	void setTìpusFitxa(char tipusFitxa) { m_tipusFitxa = tipusFitxa; };
	void setPosicioFitxa(Posicio posFitxa) { m_posicioFitxa = posFitxa; };


private:
	char m_tipusFitxa;
	Posicio m_posicioFitxa;
};

ifstream& operator>>(ifstream& input, Fitxa& fitxa);
ofstream& operator<<(ofstream& output, Fitxa& fitxa);
#endif