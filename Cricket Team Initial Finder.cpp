#include <iostream>
using namespace std;

bool searchPlayer(char teamPlayers[], int size, char targetPlayer)
{
    for (int i = 0; i < size; i++)
    {
        if (teamPlayers[i] == targetPlayer)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    char teamPlayers[] = {'b', 'r', 's', 'f', 'n', 'i', 'h', 'a', 'm', 'k', 'u'};
    int size = 11;

    char targetPlayer;

    cout << "Enter player initial: ";
    cin >> targetPlayer;

    if (searchPlayer(teamPlayers, size, targetPlayer))
    {
        cout << "Player is in the team";
    }
    else
    {
        cout << "Player not found";
    }

    return 0;
}
