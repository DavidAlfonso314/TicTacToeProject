#!/usr/bin/env python3


from typing import Final

import argparse
import socket
import struct
import re

import cmd2

from src.utils import *

RECV: Final[int] = 1024
IP: Final[str] = "localhost"
PORT: Final[int] = 8080
BUFFER: Final[int] = 1024
TIC_TAC_TOE_BOARD_LEN = 3
MIN_PORT: Final[int]= 1
MAX_PORT: Final[int] = 65535
MIN_IP: Final[int] = 0
MAX_IP: Final[int] = 255


class App(cmd2.Cmd):
    prompt = "TicTacToe >> "

    def __init__(self) -> "App":
        super().__init__()
        self.stream: socket.socket = None

    def do_display(self, _) -> None:
        """Displays the current tic tac toe board"""
        pass
        
    # @with_argparser(registration_parser)
    def do_register(self, args) -> None:
        """Registers username with the server to establish a game state"""
        pass

    def do_new(self, args) -> None:
        """Creates a new instance of a tic tac toe board"""
        pass

    def do_move(self, args) -> None:
        """Places the piece desired in position of what is wanted for tic tac toe"""
        pass

    def do_save(self, _) -> None:
        """Saves the current game state"""
        pass
        
    def do_load(self, args) -> None:
        """Loads a previous gamestate to continue a game"""
        pass

    def do_exit(self, _) -> bool:
        return True
    
    @staticmethod
    def byte_to_string(board_bytes):
        """Converts bytes to a printable string to show to user"""
        pass


    def send_data(self, packet) -> bool:
        """Function that handles sending bytes over"""
        pass

    def recv_data(self, size : int) -> bytes:
        """Function that handles receiving bytes"""
        pass

    do_quit = do_exit

