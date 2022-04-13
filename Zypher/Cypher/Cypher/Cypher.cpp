using namespace std;
#include <iostream>

void Funkcja1(tab[],klucz);

int main()
{
    int klucz;
    char tab[200];
    int dl = strlen(tab);
    



    if (klucz < -26 && klucz > 26)
    {


    }
    else
    {
        if (klucz)
        {
            for (int i = 0; i < dl; i++)
            {
                if (tab[i] <= 'z')
                {

                    tab[i] += klucz;

                }
                else
                {
                    tab[i] = tab[i] + klucz - 26;


                }

            }

        }
        else
        {
            for (int i = 0; i < dl; i++)
            {


                if (tab[i] + klucz >= 'a')
                {

                    tab[i] += klucz;
                }
                else
                {
                    tab[i] = tab[i] + klucz + 26;


                }

            }

        }

    }

}
