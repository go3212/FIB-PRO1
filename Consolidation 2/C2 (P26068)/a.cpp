#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct match
{
    string anna;
    string bernat;
    string winner;
};

bool comp (const int& a, const int& b)
{
    return a > b;
}

int get_points (const string& dice)
{
    // 5 = A, K = 4; Q = 3; J = 2; T = 1; 'N' = 0
    vector<int> appereances(6, 0);
    for (int i = 0; i < 5; ++i)
    {
        if (dice[i] == 'A') ++appereances[5];
        else if (dice[i] == 'K') ++appereances[4];
        else if (dice[i] == 'Q') ++appereances[3];
        else if (dice[i] == 'J') ++appereances[2];
        else if (dice[i] == 'T') ++appereances[1];
        else ++appereances[0];
    }
    

    sort (appereances.begin(), appereances.end(), &comp);
    // 5 = A, K = 4; Q = 3; J = 2; T = 1; N = 0;
    // rePoker = 6, Poker = 5, full = 4, trio = 3, doble pareja = 2, pareja = 1, nada = 0;
    if (appereances[0] == 5) return 6;                          //repoker
    if (appereances[0] == 4) return 5;                          //poker
    if (appereances[0] == 3 and appereances[1] == 2) return 4;  //full
    if (appereances[0] == 3) return 3;                          //trio
    if (appereances[0] == 2 and appereances[1] == 2) return 2;  //doble pareja
    if (appereances[0] == 2) return 1;                          //pareja
    return 0;                                                   //nada

}

char get_most_frequent_card_num (const string& dice)
{
    // 5 = A, K = 4; Q = 3; J = 2; T = 1; N = 0
    int dice_value = 0;
    vector<int> appereances(6,0);
    for (int i = 0; i < 5; ++i)
    {
        if (dice[i] == 'A') ++appereances[5], dice_value += 5;
        else if (dice[i] == 'K') ++appereances[4], dice_value += 4;
        else if (dice[i] == 'Q') ++appereances[3], dice_value += 3;
        else if (dice[i] == 'J') ++appereances[2], dice_value += 2;
        else if (dice[i] == 'T') ++appereances[1], dice_value += 1;
        else ++appereances[0];
    }
    int most_frequent = 0; int freq_pos = 0;
    for (int i = 0; i < 6; ++i) 
    {
        if (most_frequent <= appereances[i]) most_frequent = appereances[i], freq_pos = i;
    }

    if (most_frequent == 1) return dice_value;
    return freq_pos;

}

string evaluate_winner (match& game)
{
    int anna_pts = get_points (game.anna);
    int bernat_pts = get_points (game.bernat);
    if (anna_pts > bernat_pts) game.winner = "Anna";
    else if (bernat_pts > anna_pts) game.winner = "Bernat";
    else 
    {
        int anna_mf = get_most_frequent_card_num (game.anna);
        int bernat_mf = get_most_frequent_card_num (game.bernat);
        
        if (anna_mf < bernat_mf) game.winner = "Bernat";
        else game.winner = "Anna";
    }

    return game.winner;
}

int main ()
{
    vector<match> matches;
    string anna;
    while (cin >> anna)
    {
        string bernat; cin >> bernat;
        match game;
        game.anna = anna;
        game.bernat = bernat;

        matches.insert(matches.end(), game);
    }

    // Teniendo todas las matches registradas, evaluamos el ganador en cada una de ellas.
    for (int i = 0; i < matches.size(); ++i)
    {
        cout << evaluate_winner (matches[i]) << endl;
    }

    int anna_wins = 0;
    int bernat_wins = 0; 
    for (int i = 0; i < matches.size(); ++i)
    {
        if (matches[i].winner == "Anna") ++anna_wins;
        else ++bernat_wins;
    }
    cout << "Anna won: " << anna_wins << endl;
    cout << "Bernat won: " << bernat_wins << endl;
}