```
~Wikipedia page for the game https://en.wikipedia.org/wiki/Loter%C3%ADa
How to Play:
1. The game will start off with asking for a seed for consistency
2. The user will be prompted to enter either y or n. y for yes to continuing drawing a card and n for no which will end the game.
3. after either the player or computer have had their boards completely filled the game ends

//This game is very dated to the point where my grandma used to play when she was a kid, so some of the card names will have names that are not appropriate
but I decided to keep the game as authentic as possible. Below are all the card names translated.

El Gallo - The Rooster
El Diablito - The Little Devil
La Dama - The Lady
El Catrín - The Dandy
El Paraguas - The Umbrella
La Sirena - The Siren/The Mermaid
La Escalera - The Ladder
La Botella - The Bottle
El Barril - The Barrel
El Árbol - The Tree
El Melón - The Melon
El Valiente - The Hero
El Gorrito - The Baby Bonnet
La Muerte - Death
La Pera - The Pear
La Bandera - The Flag
El Bandolón - The Mandolin
El Violoncello - The Cello
La Garza - The Heron
El Pájaro - The Bird
La Mano - The Hand
La Bota - The Boot
La Luna - The Moon
El Cotorro - The Parrot
El Borracho - The Drunkard
El Negrito - The Little Black Person
El Corazón - The Heart
La Sandía - The Watermelon
El Tambor - The Drum
El Camarón - The Shrimp
Las Jaras - The Arrows
El Músico - The Musician
La Araña - The Spider
El Soldado - The Soldier
La Estrella - The Star
El Cazo - The Saucepan
El Mundo - The World
El Apache - The Apache
El Nopal - The Cactus
El Alacrán - The Scorpion
La Rosa - The Rose
La Calavera - The Skull
La Campana - The Bell
El Cantarito - The Little Pitcher
El Venado - The Deer
El Sol - The Sun
La Corona - The Crown
La Chalupa - The Little Boat
El Pino - The Pine Tree
El Pescado - The Fish
La Palma - The Palm Tree
La Maceta - The Flower Pot
El Arpa - The Harp
La Rana - The Frog                                                                                                                        

1. Rough Time Log
In the first hour, I focused on planning the main parts of the Lotería game. I made a list of features needed for gameplay, reviewed the rules, 
and thought about how to handle dealing cards, managing player boards, keeping score, and organizing the deck. This gave me a clear starting point.
In the second hour, I set up the .cpp file and created the basic structure, including the header file that defined the class and main functions. 
This gave me a good foundation for the rest of the game’s code.

The next hour and a half went into coding the main features. I built the Loteria class in the .cpp file, adding functions for dealing cards,
shuffling the deck, and managing cards. I also set up the card names to show correctly during gameplay. In the final hour of this phase, I tested 
and debugged the game. I added the main game logic to main.cpp and ran tests to make sure cards were drawn correctly, matched with player boards, 
and that the game checked for a winner. I fixed issues with marking cards and displaying the board so the game would run smoothly.

After that, I spent two more hours improving the game’s logic, making the user prompts and board display easier to follow. Then, I used two more 
hours expanding the game to handle all 54 cards, updating the code so all cards were included, and making sure the deck could be reshuffled. Finally,
I spent three hours testing everything. I tested edge cases like empty decks and situations where both the player and the computer won at the same time.
I also made sure the correct winner was announced. During this time, I fixed bugs, cleaned up the code, and made sure the game was efficient and 
easy to play.

2. Pros and Cons of Using Classes
Using classes in this game had several benefits. It helped organize the code by grouping related data and functions, making everything more readable 
and easier to manage. Classes also made it easier to control changes since everything was kept together in one place. However, using classes also made
the project more complex. The code got longer and harder to follow, especially as I added more features. It was also tricky to keep the data in the 
class organized as the game grew. Even though it added some challenges, using classes helped keep the code cleaner and easier to work with overall.

4. Data Structure
For this game, I used vectors.They worked well for storing each player’s board because they made it easy to access and manage the cards. 
Since the boards are a fixed 4x4 size, vectors were a simple and effective choice. They gave me the flexibility I needed without making things
too complicated. Vectors also made it easier to shuffle and refill the deck, helping the game run smoothly without errors.

5. Test Cases for Programming
To make sure the game worked correctly, I ran several test cases. I checked that cards were drawn in the right order and matched the expected results.
I tested that player boards marked cards correctly when a drawn card matched. I also created situations where all cards were marked to 
make sure the game recognized a winner. I tested what happened when the deck ran out of cards to make sure the game ended properly. I also tested 
edge cases, like both the player and computer winning at the same time, to ensure the correct winner was displayed. I used Lab 3 as a rough draft 
since the design of Lotería and my previous card deck project were similar. This helped me build the game more quickly and fix problems faster.

Write Up
The Lotería game went well overall. Organizing the code with classes and vectors made it manageable, and testing helped fix issues with marking
cards and determining winners. The main challenge was the added complexity of using classes, which made debugging take longer. I learned 
valuable lessons in planning and in game programming. I believe I deserve full discretionary points for successfully implementing the
features and improving the game.
```
