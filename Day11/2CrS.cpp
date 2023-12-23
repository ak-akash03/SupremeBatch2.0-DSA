#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int total_players = 22;
    int players_per_team = 11;
    std::vector<int> player_numbers(total_players);
    for (int i = 1; i <= total_players; ++i) {
        player_numbers[i - 1] = i;
    }

    std::vector<std::vector<int>> player_combinations;
    do {
        std::vector<int> combination(players_per_team);
        std::copy(player_numbers.begin(), player_numbers.begin() + players_per_team, combination.begin());
        player_combinations.push_back(combination);
    } while (std::next_permutation(player_numbers.begin(), player_numbers.end()));

    for (size_t i = 0; i < player_combinations.size(); ++i) {
        std::cout << "Pair " << i + 1 << ": ";
        for (int player : player_combinations[i]) {
            std::cout << player << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


