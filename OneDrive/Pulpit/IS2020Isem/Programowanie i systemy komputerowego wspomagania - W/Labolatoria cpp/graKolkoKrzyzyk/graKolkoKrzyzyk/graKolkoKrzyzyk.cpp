
#include <iostream>
#include <string>

using namespace std;

string imie1, imie2;
char znak1, znak2;
int zaczynajacy;
bool stanGry = 1; // 1-gra trwa, 0-koniec gry
char plansza[3][3];
bool czyWypelniona = 0; //0 - nie, 1 -tak



int sprawdzanie(char s)
{
    //sprawdzanie wierszy
    for (int i = 0; i < 3; i++)
    {
        if ((s == plansza[i][0]) && (s == plansza[i][1]) && (s == plansza[i][2]))
        {
            cout << "Brawo! Wygrywasz takim ulozeniem: " <<endl;
            stanGry = 0;
            return 0;
        }
    }

    //sprawdzanie kolumn
    for (int i = 0; i < 3; i++)
    {
        if ((s == plansza[0][i]) && (s == plansza[1][i]) && (s == plansza[2][i]))
        {
            cout << "Brawo! Wygrywasz takim ulozeniem: " << endl;
            stanGry = 0;
            return 0;
        }
    }

    //sprawdzenie przekatnej lewy gorny rog -> prawy dolny
    if ((s == plansza[0][0]) && (s == plansza[1][1]) && (s == plansza[2][2]))
    {
        cout << "Brawo! Wygrywasz takim ulozeniem: " << endl;
        stanGry = 0;
        return 0;
    }

    //sprawdzenie przekatnej prawy gorny rog -> lewy dolny
    if ((s == plansza[0][2]) && (s == plansza[1][1]) && (s == plansza[2][0]))
    {
        cout << "Brawo! Wygrywasz takim ulozeniem: " << endl;
        stanGry = 0;
        return 0;
    }

    return 0;
}

int czyRemis()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (plansza[i][j] == '.')
            {
                czyWypelniona = 0;
                return 0;
            }
        }
    }
    return 1;
}

int main()
{

    

    cout << "Witaj w grze. Podaj imie pierwszego gracza: ";
    cin >> imie1;
    cout << "Podaj imie drugiego gracza: ";
    cin >> imie2;

    cout << "Wpisz -1, jesli gre zaczyna " << imie1 << ", lub 1, jezeli gre zaczyna " << imie2 <<": ";
    cin >> zaczynajacy;

    cout << "Wpisz wybor znaku dla " << imie1 << ": ";
    cin >> znak1;
    cout << "Wpisz wybor znaku dla " << imie2 << ": ";
    cin >> znak2;



    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            plansza[i][j] = '.';
        }
    }

    //wyswietlanie aby sprawdzic

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< "|" <<plansza[i][j];
        }
        cout << "|" << endl;
    }

    zaczynajacy *= (-1);

    while (stanGry == 1)
    {
        int wpisywanieR = 5, wpisywanieK = 5;
        zaczynajacy *= (-1);

        //

        while (!(plansza[wpisywanieR][wpisywanieK] == '.') || !((wpisywanieR * wpisywanieK <= 4)&&(wpisywanieR * wpisywanieK >=0)))
        {
            cout << "Podaj indeks wiersza: ";
            cin >> wpisywanieR;
            cout << "Podaj indeks kolumny: ";
            cin >> wpisywanieK;
        }
        
        if (zaczynajacy < 0)
        {
            plansza[wpisywanieR][wpisywanieK] = znak1;
            sprawdzanie(znak1);
            
        }
        else
        {
            plansza[wpisywanieR][wpisywanieK] = znak2;
            sprawdzanie(znak2);
        }

        int remis = czyRemis();

        if (remis == 1)
        {
            cout << "Koniec. Remis z tym ulozeniem: " << endl;
            stanGry = 0;
        }
        

        // ??
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "|" << plansza[i][j];
            }
            cout << "|" << endl;
        }
        //

       



    } 



}
