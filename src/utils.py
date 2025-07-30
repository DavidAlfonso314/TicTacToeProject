#!/usr/bin/env python3

import enum
import struct


class MessageTypes(enum.IntEnum):
    REQ_REGISTER = 1,
    REQ_NEW_GAME = 2
    REQ_SAVE_GAME = 3
    REQ_LOAD_GAME = 4
    REQ_MOVE_PIECE = 5
    REQ_GET_BOARD = 6
    RESP_STANDARD = 64,
    RESP_BOARD = 65
    RESP_CODE = 66


class ServerCodes(enum.IntEnum):
    CODE_SUCCESS = 0
    CODE_FAILURE = enum.auto()
    CODE_ERROR = enum.auto()


class Message:
    """Message class that packages payloads"""
    def __init__(self, mtype: MessageTypes, *args : tuple | None):
        """
        mtype represents message codes and communication between the client and server
        args can represent either a tuple or nothing at all dependent on the command ran by the user
        This class is used to represent struct packing and unpacking for the structure of the project which
        includes moves, registering users and more
        """
        self.mtype: MessageTypes = mtype
        self.header: str = "!BI"
        self.args : tuple | None = args

    def pack(self) -> bytes:
        """Function that packs data and send it to the server"""
        pass    
            

    @classmethod
    def unpack(cls, data: bytes) -> "Message":
        """Returns a class object of unpacked data from the server"""
        pass