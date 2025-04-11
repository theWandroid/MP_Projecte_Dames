#include "tauler.h"	
#include <iostream>
using namespace std;

void Tauler::inicialitzaTauler(char tauler[N_FILES][N_COLUMNES])
{
	for (int i = 0; i < N_FILES; i++)
	{
		for (int j = 0; j < N_COLUMNES; j++)
		{
			tauler[i][j] = '_';
		}
	}
}

//comprova si el fitxer existeix
bool Tauler::obreFitxer(const string& nomFitxer) 
{
	bool fileExist = false;
	ifstream fitxer(nomFitxer);
	if (fitxer.is_open())
	{
		cout << "El fixer existeix i s'ha obert correctament" << endl;
		fileExist = true;
	}
	fitxer.close();
	return fileExist;
}
//mostra el contingut del fitxer
void Tauler::mostraFitxer(const string& nomFitxer)
{
	ifstream fitxer(nomFitxer);
	if (fitxer.is_open())
	{
		char tipusFigura;
		string posText;
		int i = 1;
		fitxer >> tipusFigura >> posText;
		cout << "La fila " << i << " del fitxer conte" << tipusFigura << " " << posText << endl;
		while (!fitxer.eof())
		{

			i++;
			fitxer >> tipusFigura >> posText;
			cout << "La fila " << i << "del fitxer conte" << tipusFigura << " " << posText << endl;
		}
	}
	fitxer.close();
}

void Tauler ::mostraTauler(const string& nomFitxer, char tauler[N_FILES][N_COLUMNES])
{
	//inicialitzaTauler(tauler);
	for (int i = 0; i < N_FILES; i++)
	{
		for (int j = 0; j < N_COLUMNES; j++)
		{
			cout << " " << tauler[i][j];
		}
		cout << endl;
	}
}


void Tauler ::llegeixTauler(const string& nomFitxer, char tauler[N_FILES][N_COLUMNES])
{
	inicialitzaTauler(tauler);
	ifstream fitxer(nomFitxer);

	fitxer.open(nomFitxer);
	if (fitxer.is_open())
	{
		char tipusFigura;
		string posText;
		//Posicio posicio;
		fitxer >> tipusFigura;
		fitxer >> posText;

		while (!fitxer.eof())
		{
			Posicio posicio;
			//tractem dades
			posicio.fromString(posText);
			tauler[posicio.getFila()][posicio.getColumna()] = tipusFigura;
			//llegim text
			char tipusFigura;

			//Posicio posicio;
			string posText;
			fitxer >> tipusFigura;
			fitxer >> posicio;

		}

	}
	fitxer.close();
}

void escriuTauler(const string& nomFitxer, char tauler[N_FILES][N_COLUMNES])
{
	ofstream fitxer(nomFitxer);
	fitxer.open(nomFitxer);
	/*


	while (!fitxer.eof())
	{
		char tipusFigura;
		Posicio posicio;
		string posText;
		tipusFigura = tauler[posicio.getFila()][posicio.getColumna()];
		posText = posicio.toString();
		fitxer << tipusFigura;
		fitxer << posicio;

	}
	*/if (fitxer.is_open())
	{


		for (int i = 0; i < N_FILES; i++)
		{
			for (int j = 0; j < N_COLUMNES; j++)
			{
				if (tauler[i][j] != ' ')
				{
					char tipusFigura;
					Posicio posicio(i, j);
					string posText;
					tipusFigura = tauler[i][j];
					posText = posicio.toString();
					fitxer << tipusFigura << ' ';
					fitxer << posText;
				}

			}
		}
	}
	fitxer.close();

}
