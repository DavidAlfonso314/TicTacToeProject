/** @file message.h
 * 
 * @brief A header file exposing core message structures.
 *
 */ 

#ifndef MESSAGE_H
#define MESSAGE_H

#define _POSIX_C_SOURCE 200809L

#include <stdint.h>

#include "values.h"


typedef struct
{
    uint8_t length;
    char *username;
} rq_register_t;

typedef struct
{
    uint8_t length;
    char *game_name;
} rq_new_t;

typedef struct
{
    uint8_t length;
    char *game_name;
} rq_load_t;

typedef struct
{
    uint8_t length;
    char *movement;
} rq_move_t;

////////////////////////////////////////////////////
// Section containing server response structures. //
////////////////////////////////////////////////////

typedef struct
{
    response_code_e code;
} rp_code_t;

typedef struct
{
    response_code_e code;
    uint16_t length;
    uint8_t *data;
} rp_output_t;

typedef struct
{
    response_code_e code;
    uint8_t array[BOARD_COL_SIZE ][BOARD_ROW_SIZE];
} rp_board_t;

/////////////////////////////////////////////
// Top-level structure / function section. //
/////////////////////////////////////////////

// A structure representing a message, used over the wire.
typedef struct
{
    message_type_e type;   // Type of the message.
    uint32_t length;       // Length of payload, excluding this and the type.

    union
    {
        union
        {
            rq_register_t login;
            rq_new_t ngame;
            rq_load_t load;
            rq_move_t move;
        } req;

        union
        {
            rp_code_t code;
            rp_output_t basic;
            rp_board_t board;
        } resp;
    };
} message_t;

#endif /* MESSAGE_H */

/*** end of file ***/
