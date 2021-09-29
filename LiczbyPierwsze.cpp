#include "LiczbyPierwsze.h"
#include<iostream>
#include<cstdlib>
#include <string>
using namespace std;

LiczbyPierwsze::LiczbyPierwsze(int n) 			
		{
			int low=2;
			int high, flag;
			int j=0;
			int counter=0;
			array = new int[n/2 +1]; 			

			while (low < n)
    		{
        	flag = 0;
        		for(int i = 2; i <= low/2; ++i)
        		{
            		if(low % i == 0)
            		{
                		flag = 1;
                		break;
            		}
        		}
        	if (flag == 0)
			{
				counter++;

				if(j<n)
				{
				array[j]=low;
				j++;
				}
			}
        		++low;
		
			}
			rozmiar = counter;
		}

		LiczbyPierwsze::~LiczbyPierwsze() 			
		{
			delete[] array; 		
		}

		int LiczbyPierwsze:: liczba(int m)
		{
			if(m >= 0 && m < rozmiar)
			 	return array[m];
			else return -1;
		}

	 	

