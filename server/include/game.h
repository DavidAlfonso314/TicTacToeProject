/** @file message.h
 * 
 * @brief A header file exposing core message structures.
 *
 */ 

#ifndef GAME_H
#define GAME_H

#define _POSIX_C_SOURCE 200809L

#include <stdint.h>

#include "values.h"


typedef struct {

    uint8_t game_board[BOARD_COL_SIZE][BOARD_ROW_SIZE];
    char *game_name;
} game_t;

/**
 * @brief Confirms move is viable and makes the move for the PLAYER
 * 
 * @param game 
 * @return int 
 */
bool make_move(game_t * game);

/**
 * @brief 
 * 
 * @param game 
 * @return int 
 * 
 */
bool ai_move(game_t *game);

/**
 * @brief confirms the move made is a valid move
 * 
 * @param game 
 * @param mov_col 
 * @param move_row 
 * @return true 
 * @return false 
 */
bool valid_move(game_t *game, uint8_t mov_col, uint8_t move_row);

/**
 * @brief Checks for wins across the board array to confirm if there is win states, if none returns false
 * 
 * @param game 
 * @return int 
 */
bool check_win(game_t *game);

/**
 * @brief Saves a current game states and updates based on the name given
 * 
 * @param game 
 * @return false
 */
bool save_game(game_t *game);

/**
 * @brief Loads a previous game based on the name of the game given
 * 
 * @param game 
 * @return game_t* 
 */
game_t * load_game(char * game_name);


/**
 * @brief 
 * 
 * @param game_name 
 * @return game_t* 
 */
game_t * new_game(char * game_name);

#endif