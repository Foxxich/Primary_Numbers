//To jest plik nagłówkowy (header) który zawiera tylko pola i nazwy metod (z parametrami)

class LiczbyPierwsze
{
    private:
        int* array;
		int rozmiar;
    public:
        LiczbyPierwsze(int n);  //konstruktor
        ~LiczbyPierwsze();      //dekonstruktor
        int liczba(int m);
};