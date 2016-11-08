#include <iostream>
#include <windows.h>

using namespace std;

int lks;
int Wins;
int Defeats;
int MMR;


void Elo (void)
{
   setlocale (LC_ALL, "portuguese");
   cout << "\nDigite o Valor do seu MMR atual ";
   cin >> lks;
   MMR = ((lks + 1200)/2) + (45 * Wins) - (50 * Defeats);

if (MMR >= 851 & MMR < 945)
{
cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
cout << "\nBronze IV, " << MMR << " \n";
}
    if (MMR >= 945 & MMR < 1045)
    {
    cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
    cout << "\nBronze II, " << MMR << " \n";
    }
        if (MMR >= 1040 & MMR < 1230)
        {
        cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
        cout << "\nBronze I, " << MMR << " \n";
        }
            if (MMR >= 1230 & MMR < 1325)
            {
            cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
            cout << "\nSilver V, " << MMR << " \n";
            }
                if (MMR >= 1325 & MMR < 1420)
                {
                cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
                cout << "\nSilver IV, " << MMR << " \n";
                }
                    if (MMR >= 1420 & MMR < 1515)
                    {
                    cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
                    cout << "\nSilver II, " << MMR << " \n";
                    }
                        if (MMR >= 1515 & MMR < 1610)
                        {
                        cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
                        cout << "\nGold V, " << MMR << " \n";
                        }
                            if (MMR >= 1610 & MMR < 1705)
                            {
                            cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
                            cout << "\nGold IV, " << MMR << " \n";
                            }
                        if (MMR >= 1705 & MMR < 1800)
                        {
                        cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
                        cout << "\nGold II, " << MMR << " \n";
                        }
                    if (MMR >= 1800 & MMR < 1851)
                    {
                    cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
                    cout << "\nGold I, " << MMR << " \n";
                    }
                if (MMR >= 1851 & MMR < 1900)
                {
                cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
                cout << "\nPlatinium V, " << MMR << " \n";
                }
            if (MMR >= 1901 & MMR < 1950)
            {
            cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
            cout << "\nPlatinium IV, " << MMR << " \n";
            }
        if (MMR >= 1951 & MMR < 2000)
        {
        cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
        cout << "\nPlatinium III, " << MMR << " \n";
        }
    if (MMR >= 2001 & MMR < 2050)
    {
    cout << "\nSeu elo aproximado ao final da md10 e respectivo MMR s�o: ";
    cout << "\nPlatinium II, " << MMR << " \n";
    }
}

void ZeroBarraTodos (void)
{   setlocale (LC_ALL, "portuguese");
    cout << "\nDeseja calcular seu elo com quantas vit�rias?\n";
    cin >> Wins;
    Defeats = 10 - Wins;

    cout << "\nSeu score na md10: " << Wins << "/" << Defeats << " \n";
}

void Credits(void)
{
setlocale (LC_ALL, "portuguese");
cout << "\nCalculadora de md10";
cout << "\nPor: Hugo Ara�jo";
cout << "\n\n";
}

int main()
{
    setlocale (LC_ALL, "portuguese");
    char SoVai = 's';

    do
    {
    system("CLS");
    Credits();
    cout << "\nO seu MMR pode ser consultado em: http://br.op.gg/ ~Checar MMR~";
    cout << "\nPara encerrar a execu��o do programa, feche-o. =]\n\n";
    ZeroBarraTodos();
    Elo();

    system("PAUSE");
    }while(SoVai = 's');

    return 0;
}
