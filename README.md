# ENGG1340 PROJECT

Group members:

Chan Ming Ho (UID: 3035598678)

Choi Ting Hei (UID: 3035596151)

Basic game rules:

It is a basic 2D game with a storyline. In the year 2100, Earth's resources are almost exhausted. You play as a human sent to a new planet to search for a possible habitat.

There are 10 levels in this game, each floor consists of a 5x5 plane, where the player must explore all the elements labelled 'A' on that level using keys WASD. After clearing each floor, the player can walk to the top left corner to reach the exit (labelled 'F'). The player can then use the 'Dark matter' harvested to get an upgrade on his/her stats (ATK(increases attack damage), HP(increases max hp), SPD(increases dodge rate), and DEX(increases 'Dark matter' drop in chests and from aliens)). Then the story/plot corresponding to that level will be displayed before advancing to the next floor. If the player dies in a level, then it will be game over and the player would need to restart the program and either start a new game or load the previous save (The game will automatically save when a player enters a new level).

Example of what the screen shows:

OCOOO  
OOAOO  
OOOOO  
OOOOC  
XOOOO

The player (labeled X) is spawned at the bottom-left corner of the floor.

The chests (labelled C) contain some 'Dark matter' (random number in a certain range). Also recovers HP to Max HP when touched.

Aliens (labelled A) drop a lot more 'Dark matter' when they are killed and some 'Dark matter' when the player successfully negotiated with them. They are neutral and friendly to the player, but if the player had killed some of them previously then they become less friendly and the player cannot negotiate with them at a certain point.

Negotiation initiation chance: 100% until 6 kills.

Negotiation system (if chose to negotiate with the alien): // to be fixed
note: have a chance of not popping up as mentioned above (i.e. if the player has killed someone).
A hangman game with random words and a certain time limit per guess.
SPD gives more time per guess.
DEF gives more guesses.

Combat system (if chose to attack the alien):

OOOOOOF  
OWO1OOO  
OOOO3OO  
O4OXOOO  
O123OOO  
OOOO2OO  
EOOOOOO

WASD to move, any other keys to skip a turn (let the enemy move).

The player (labelled X) is spawned in the middle of a 7x7 floor, player can exit the battle (flee from the battle) by running to the upper right corner.
The enemy (labelled E) will be spawned at the leftmost and the bottomost of the floor and try to approach the player, players cannot run into it.

Walls (labelled 1-4, which represents the wall strength) are generated randomly on the map and not passable by the enemy nor the player, however, the player can weaken the wall by walking into them (wall strength -1), when the wall strength is 0, the wall is demolished.

One 'Weakness point' (labelled W) is generated randomly on the map.

If the player touches the 'Weakness point' on the map, then it will deal damage to the enemy based on ATK, and the 'Weakness point' would respawn at a different location.
If the enemy touches the player, then it may deal damage to the player (Player label changes from X to D), the player may evade the attack (Player label changes from X to N (stands for not effective) where the evade chance depends on SPD, and it will respawn at the bottom left of the 7x7 floor.

Boss fights may occour at level 10 depending on your actions, see the spoilers below to know more.

There are multiple endings to the game depending on the number of aliens killed, see the spoilers below to know more.

<details>
<summary>Spoilers for ending and routes and boss fight, please play the game first.</summary>
   
ending 1: friendly human (you killed no one and happy ending)  
ending 2: Not so friendly human (you killed some and imprisoned the others)  
ending 3: inhuman (you killed all of them)  
 
Boss fight:  
Occurs when the player has killed at least 1 alien. The boss gains more strength (His HP++ and Your Karma--) depending on your actions: How many aliens have you killed & have you killed her daughter.  
Walls are changed into Spikes On The Ground (Labelled U, stands for Under), The boss cannot pass, but the player can step on it to break it but it will deal damage to the player.  
The enemy gains 1 attack range.  
The enemy will break the obstacle in its way after 1 turn when it is stuck.  
The weakness points of the boss changes location every 10 turns when not touched.  
New mechanic-karma will be introduced. Karma with a value of 2-6 (more kills-less kills) will be generated. Each turn that player moves horizontally: karma--. When karma reaches 0, the player's HP will start to drain. Move vertically or break a spike to reset karma.  

Nerfs to the boss in the fight:  
Now the boss can step on the weakness point instead of just the player.  
The boss will be stunned for 3 turns when weakness point is being stepped on.  

When you killed every alien:  

Weakness points moves away from the player every 2 turns.  


</details>

Coding requirements:

1. Generation of random game sets or events:
The 5x5 and 7x7 floors in the levels are randomly generated, and the 'Dark matter' obtained from any sources are random.

2. Data structures for storing game status
After issuing the saving command, arrays including the data of the current level, aliens killed and all the player stats will be saved.

3. Dynamic memory management
The 5x5 and 7x7 floors would be made in 2D Char vectors and modified when the objects on the floors are being interacted. Threads are used in the Hangman.cpp for time limits.

4. File input/output (e.g., for loading/saving game status)
The variables stored in an array with length 8 would be inputted into another file and loaded when the player selects 'load' instead of 'new game'.
 
5. Program codes in multiple files
Some functions would be in other .cpp files to make the main file easier to read and understand.

Sources used:

# conio.h
A substitute for conio.h on linux systems by Shobhit (https://stackoverflow.com/users/3527564/shobhit):

https://stackoverflow.com/questions/3276546/how-to-implement-getch-function-of-c-in-linux/40197193

# words in Hangman.cpp
A wordlist generated by https://www.randomlists.com/

https://www.randomlists.com/data/words.json

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



