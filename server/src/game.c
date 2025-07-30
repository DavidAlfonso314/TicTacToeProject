#include <errno.h>
#include <sys/select.h>
#include <signal.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "message.h"
#include "game.h"
#include "values.h"


/**
 * @brief confirms make_moves and validates positions
 * 
 * @param game 
 * @return false
 */
bool make_move(game_t * game)
{
    return 0;
}

/**
 * @brief Makes the move for the ai
 * 
 * @param game 
 * @return false
 */
bool ai_move(game_t *game)
{
    return false;
}

/**
 * @brief checks if move is valid
 * 
 * @param game 
 * @return true 
 * @return false 
 */
bool valid_move(game_t *game, uint8_t mov_col, uint8_t move_row)
{
    return false;
}
/**
 * @brief Checks for wins across the board array to confirm if there is win states, if none returns false
 * 
 * @param game 
 * @return int 
 */
bool check_win(game_t *game)
{
    return false;
}

/**
 * @brief Saves a current game states and updates based on the name given
 * 
 * @param game 
 * @return false
 */
bool save_game(game_t *game)
{
    return false;
}

/**
 * @brief Loads a previous game based on the name of the game given
 * 
 * @param game 
 * @return game_t* 
 */
game_t * load_game(char *game_name)
{
    return NULL;
}

/**
 * @brief 
 * 
 * @param game_name 
 * @return game_t* 
 */
game_t * new_game(char * game_name)
{
    return NULL;
}
