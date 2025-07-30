# Tic Tac Toe Network Project

A Basic Tic Tac Toe project that communicates between a client and a server.

I changed something 

# Python Requirements
	Client written in python

	python utilizes cmd2 
	python utilizes argparsing @withargparser
	python struct packing
	do_methodology:

	do_newgame:

        RESTRICTIONS: Game name should be no more than 16 characters and not contain special characters. 

		BYTE ORDER 
		| 0  Msg Type| 1-4 Length of payload | 6 Length of game_name | 7-inf payload (game_name)

        ex: newgame game4
	do_loadgame: 

        RESTRICTIONS: Game name should be no more than 16 characters and not contain special characters.

		BYTE ORDER 
		| 0  Msg Type| 1-4 Length of payload | 6 Length of Game Name | 7-inf payload (gamename)

        ex: load game1

	do_move:                              A  | B | C  |
                                        1|   |   |    |
        MOVE FORMAT :                   2|   |   |    |
                                        3|   |   |    |

    	BYTE ORDER 
		| 0  Msg Type| 1-4 Length of payload | 6 Length of move | 7-9 payload (Move)

        Ex: mov C1

	do_register:
        RESTRICTIONS: Username should be no more than 8 characters and not contain special characters.

		BYTE ORDER 
		| 0  Msg Type| 1-4 Length of payload | 6 Length of username | 7-inf payload (username)
        
        Ex: register bob
    
	** class support for messages **
	
# PYTHON OPTIONAL: 
	
        - Utilize a venv (personal recommendation) hatch
        - Classes are an important understanding of the python language use them well
        - Create and use helper functions!
        - Utilize the extent of std library (regex, argparser, to_bytes? ) 
	
# C Requirements
		Server and Logic written in C
		Message Handling * Think using structs *
		Networking Includes:
			- Handling Clients (Creating and managing said socket)
			- Packaging and Unpackaging byte to and from server/client (packing &
			    unpacking)
			- Serializing data to and from server / client.
			
			
		Game Logic Includes : 
			- Win / Lose States
			- AI Generated Movesets
		    - Saving and Loading * Think Serialization *
			- Possibly more	
	
# C OPTIONAL: 

        - Utilize Multithreading
        - Utilize Select functionality
        - Utilize Polling
        - Utilize Helper Functions 


# Expected Game Behavior!
		Game should operate on a win - draw - lose mechanic.
		3 in a row is a win, without 3 for either the cpu or player results in a 
		tie. 
		Expected serialization
		BYTE ORDER 
		| 0  Msg Type| 1-4 Length of payload | 5-inf payload (board, move username etc.)
		
		
		