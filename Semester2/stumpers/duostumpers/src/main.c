/*
** EPITECH PROJECT, 2022
** solo_stumper
** File description:
** no desc
*/

#include "my.h"

int selection()
{
    char *buffer = read_input();
    if (buffer == NULL) {
        exit(1);
    }
    int input = my_getnbr(buffer);
    return (input - 1);
}

int play_turn(char player_char, int width)
{
    my_printf("Player %c, where do you want to play: ", player_char);
    int x = selection();
    return x < 0 || x > width - 1 ? play_turn(player_char, width) : (x);
}

void start_game(game_t *game, players_t *players)
{
    int row;
    while (1) {
        int p1_select = play_turn(players->p1, game->width);
        row = get_row(game->map, game->height, p1_select);
        if (row == -1)
            continue;
        game->map[row][p1_select] = players->p1;
        check_win(game, players->p1);
        int p2_select = play_turn(players->p2, game->width);
        row = get_row(game->map, game->height, p2_select);
        if (row == -1)
            continue;
        game->map[row][p2_select] = players->p2;
        check_win(game, players->p2);
        if (check_board(game)) {
            my_printf("It's a tie, nobody wins.\n");
            exit(1);
        }
    }
}

int main(int argc, char *argv[])
{
    game_t *game = malloc(sizeof(game_t));
    players_t *players = malloc(sizeof(players_t));
    setup_map(game, argv);
    check_map(game);
    setup_players(players, argv);
    check_players(game, players);
    start_game(game, players);
    return (0);
}
