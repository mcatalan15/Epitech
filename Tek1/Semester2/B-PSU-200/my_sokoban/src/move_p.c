/*
** EPITECH PROJECT, 2022
** move_p
** File description:
** reduction of function move_p
*/

#include "my.h"

void move_p2(int m_x, int m_y, t_moment *m)
{
    if (m_y + m->p_y == m->lines_nbr - 1 || m->str[m_y + m->p_y]
    [m_x + m->p_x] == '#' || m->str[m_y + m->p_y][m_x + m->p_x] == '\0') {
        play_game(m);

    } else if (m->str[m_y + m->p_y][m_x + m->p_x] ==
        'X' && (m->str[m_y + m->p_y * 2][m_x + m->p_x * 2] ==
        ' ' || m->str[m_y + m->p_y * 2][m_x + m->p_x * 2] == 'O')) {
        m->str[m_y + m->p_y][m_x + m->p_x] = ' ';
        m->str[m_y + m->p_y * 2][m_x + m->p_x * 2] = 'X';
    }
    if (m->str[m_y + m->p_y][m_x + m->p_x] == ' ' ||
        m->str[m_y + m->p_y][m_x + m->p_x] == 'O') {
        m->str[m_y + m->p_y][m_x + m->p_x] = 'P';
        m->str[m_y][m_x] = ' ';
    }
}

void move_p_up(t_moment *m)
{
    m->p_x = 0;
    m->p_y = -1;
    int m_x;
    int m_y;

    get_player_pos(&m_x, &m_y, m);
    if (m_y + m->p_y < 0 || ((m_y + m->p_y * 2 <= 0 ||
        m_y + m->p_y * 2 + 1 == m->lines_nbr) && m->str[m_y + m->p_y]
        [m_x] == 'X'))
        return;
    clear();
    move_p2(m_x, m_y, m);

    play_game(m);
}

void move_p_down(t_moment *m)
{
    m->p_x = 0;
    m->p_y = 1;
    int m_x;
    int m_y;

    get_player_pos(&m_x, &m_y, m);
    if (m_y + m->p_y < 0 || ((m_y + m->p_y * 2 <= 0 ||
        m_y + m->p_y * 2 + 1 == m->lines_nbr) && m->str[m_y + m->p_y]
        [m_x] == 'X'))
        return;
    clear();
    move_p2(m_x, m_y, m);

    play_game(m);
}

void move_p_right(t_moment *m)
{
    m->p_x = 1;
    m->p_y = 0;
    int m_x;
    int m_y;

    get_player_pos(&m_x, &m_y, m);
    if (m_y + m->p_y < 0 || ((m_y + m->p_y * 2 <= 0 ||
        m_y + m->p_y * 2 + 1 == m->lines_nbr) && m->str[m_y + m->p_y]
        [m_x] == 'X'))
        return;
    clear();
    move_p2(m_x, m_y, m);

    play_game(m);
}

void move_p_left(t_moment *m)
{
    m->p_x = -1;
    m->p_y = 0;
    int m_x;
    int m_y;

    get_player_pos(&m_x, &m_y, m);
    if (m_y + m->p_y < 0 || ((m_y + m->p_y * 2 <= 0 ||
        m_y + m->p_y * 2 + 1 == m->lines_nbr) && m->str[m_y + m->p_y]
        [m_x] == 'X'))
        return;
    clear();
    move_p2(m_x, m_y, m);

    play_game(m);
}