

-----------------------------------------------------------------------------------------------------------------------
INITIAL PROPOSAL:

# ENGG1340 PROJECT

Group members:

Chan Ming Ho (UID: 3035598678)

Choi Ting Hei (UID: 3035596151)

Basic game rules:

It is a basic 2D game with a storyline. In the year 2100, Earth's resources are almost exhausted. You play as a human sent to a new planet to search for a possible habitat.

There are 10 levels in this game, each floor consists of a 5x5 plane, where the player must explore all the elements on that floor to advance using keys WASD. After clearing each floor, the player can use the 'Dark matter' harvested to get an upgrade on his/her stats (ATK, HP, SPD, and DEX(increases 'Dark matter' drop)) before advancing to the next floor. If the player dies in a level, then he/she will respawn at that level again with the level reset.

Example of what the screen shows:

OCOOO  
OOAOO  
OOOOO  
OOOOC  
XOOOO

The player (labeled X) is spawned at the bottom-left corner of the floor.

The chests (labelled C) contain some 'Dark matter' (random number in a certain range).

Aliens (labelled A) drop a lot more 'Dark matter' when they are killed and some 'Dark matter' when the player successfully negotiated with them. They are neutral and friendly to the player, but if the player had killed previously then they become less friendly and harder to negotiate.
Negotiation initiation chance: 1-(ppl killed/5+successful negotiations) or something like that with a minimum of 0% and a maximum of 100%.

Negotiation system (if chose to negotiate with the alien):
note: have a chance of not popping up as mentioned above (i.e. if the player has killed someone).
A hangman game with random words and a certain time limit per guess.
SPD gives more time per guess.
DEF gives more guesses.

Combat system (if chose to attack the alien):

OOOOOOF  
OPOWOOO  
OOOOWOO  
OWOXOOO  
OOOOOOO  
OOOOOOO  
OOOOOEO

The player (labelled X) is spawned in the middle of a 7x7 floor, player can exit the battle (flee from the battle) by running to the upper right corner.
The enemy (labelled E) will be spawned at the leftmost or bottommost of the floor and try to approach the player. The enemy would have a 1-(SPD LVL/40)% to move whenever the player moves.
Walls (labelled W) are generated randomly on the map and not passable by the enemy nor the player.
One 'Energy point' (labelled P) is generated randomly on the map and must be accessible(will not be surrounded by walls).
If the player touches the 'Energy point' on the map, then it will deal damage to the enemy based on ATK, and the 'Energy point' would respawn at a different location.
If the enemy touches the player, then it will deal damage to the player, and respawn at the edges of the 7x7 floor.

Boss fights occur at levels 5 and 10.

There are multiple endings to the game depending on the number of aliens killed.
e.g. You killed them all and scavaged all resources for mankind.
e.g. You successfully negotiated with aliens and mankind moved there and lived together with natives.

Coding requirements:

1. Generation of random game sets or events:
The 5x5 and 7x7 floors in the levels are randomly generated, and the 'Dark matter' obtained from any sources are random.

2. Data structures for storing game status
After issuing the saving command, variables including the current level, aliens killed and all the player stats will be saved.

3. Dynamic memory management
The 5x5 and 7x7 floors would be made in 2D arrays and modified when the objects on the floors are being interacted. And the array memories (usually the 7x7 array) would be released once it is not being used

4. File input/output (e.g., for loading/saving game status)
The variables would be inputted into another file and loaded when the player selects 'load' instead of 'new game'.
 
5. Program codes in multiple files
Some functions would be in other .cpp files to make the main file easier to read and understand.



