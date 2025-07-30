/** @file values.h
 * 
 * @brief A header file exposing constant values.
 *
 */ 

#ifndef VALUES_H
#define VALUES_H

#define BOARD_ROW_SIZE 3
#define BOARD_COL_SIZE 3

//TODO: already using 0 for response_code_e
typedef enum
{
    N = 0,
    X,
    O,
} piece_type_e;

typedef enum
{
    REQ_REGISTER = 1,
    REQ_NEW_GAME,
    REQ_SAVE_GAME,
    REQ_LOAD_GAME,
    REQ_MOVE_SHAPE,
    REQ_GET_BOARD,
    RESP_STANDARD = 64,
    RESP_BOARD,
    RESP_CODE,
} message_type_e;

typedef enum
{
    SUCCESS = 0,
    FAILURE,
    ERROR,
} response_code_e;

#endif /* VALUES_H */

/*** end of file ***/
