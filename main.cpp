#include "LiczbyPierwsze.h"
#include<iostream>
#include<cstdlib>
#include <string>
using namespace std;

int main(int argc, char* args[])
{
	int c;
	int sum=0;
	LiczbyPierwsze* obiekt;
	int n;
		try{
			n = stoi(args[1]);
		}catch(invalid_argument exp)
		{
		std::cout << "Nieprawidlowy typ danych\n";
			return 0;
		}
	if(n<2)
	{
		std::cout << "Nieprawidlowy zakres\n";
	}
	else
	{
    	obiekt = new LiczbyPierwsze(n);
    }
	if(n>2){
	for(int l = 2; l < argc; l++)
	{	
		try{
			c = stoi(args[l]);

			int wynik = obiekt->liczba(c);

			if(wynik<0)
			{
				std::cout << c << " - liczba spoza zakresu\n";
			}
			else 
			{
				std::cout << c << "-" << wynik << "\n";
			}
		}catch(invalid_argument exp)
		{
			std::cout << args[l] << "- nieprawidlowy typ danych\n";
		}	
	}
	}

	return 0;
}