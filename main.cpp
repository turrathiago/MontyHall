#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 10000
using namespace std;

int main()
{
    int games = 0, aux = 0, win = 0, lose = 0;
    bool doors[2], goat = 1, car = 0;
    int firstchoice;

    srand(time(0));
    while (games != N)
    {
        aux = rand()%3;
        if(aux == 0){
            doors[0] = car;
            doors[1] = goat;
            doors[2] = goat;
        }
        else
            if(aux == 1)
            {
                doors[0] = goat;
                doors[1] = car;
                doors[2] = goat;
            }
            else
                if(aux == 2)
                {
                    doors[0] = goat;
                    doors[1] = goat;
                    doors[2] = car;
                }

        firstchoice = doors[rand()%3];

        if (firstchoice == 0)
        {
            lose++;

        }
        else
            if (firstchoice == 1)
            {
                win++;
            }

        games++;
    }

    float perc = (win*100)/N;
    cout << "If the chage happens in " << N << " trys:" << endl << "Wins = " << win << endl << "Loses = " << lose << endl;
    cout << "Won: " << perc << "%" << endl;

    return 0;
}

