#include <dirent.h>
#include <errno.h>
#include <netinet/in.h>
#include <pthread.h>
#include <regex.h>
#include <signal.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

/** @file main.c
 *
 * @brief Primary file inside a chess server program.
 * 
 */ 

#define _POSIX_C_SOURCE 200809L
#define PORT 8080
#define MAX_CLIENTS 10

void handle_client();

int main(const int argc, const char **argv)
{

    // TODO: Parse arguments.
    // - Setup core structures / directories / server.
    // - Continually loop waiting for clients to make requests.
    // - Stop the program gracefully on SIGINT (CTRL+C)
    // - On stop, have the server free its core structures / close the clients.

}

/*** end of file ***/
