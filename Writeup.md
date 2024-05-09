#  CS2024 Final Project Writeup
## Liam Giraldo, lag288
### Tic Tac Toe

This assignment was the most fun I've had writing code in awhile. I felt completely in control with this assignment, and there were so many ideas I had but in the end really didn't have the time to implement.

In this assignment, we were tasked with creating a text based tic tac toe. The rules of tic tac toe are simple. 2 players (one represented as an X, and one as O), place their symbols on a 3x3 grid, taking turns doing so. If there is 3 in a row for either X or O, then that respective player wins.

In order to complete this assignment, I had to create a few classes to get the job done. One of them is a GameBoard class, that contains the tic tac toe board. Another one of them is the TicTacToe class, that contains the game itself. The final class is the Player class that containts all of the information necessary to create a player for the game.

The project spec requested that we have at the minimum, a GameBoard and a TicTacToe template class, however I found that creating a Player class was beneficial for what I wanted to acheive. I took a large amount of *creative liberties* when completing this assignment. Here are some differences from my implementation compared to the spec.

- I do not use player1Turn and player2Turn, opting instead for a playerTurn method in the TicTacToe class.

- I do not use a map to represent the game board, I use a 2d array.

- I add member functions to various classes to make my life easier that were not explicitly required in the project spec.

The reason I deviated from the spec is because I wanted my tic tac toe implementation to allow for more than just 2 players. I accomplished this by creating a Player class to create players with and a playerTurn method that goes through all of the players in a TicTacToe game.

With my implementation, you can create a tic tac toe game of any board size with any amount of players (assuming there are enough symbols on the keyboard)

The implementation works roughly as follows...

- A Tic Tac Toe game is created, creating a game board for that game in the process. This is handled by the tic tac toe template class.

- After that, the players for the game are set up, requiring each player to choose a symbol to play as. This is handles by the tic tac toe template class with the help of a player class to create player objects.

- While the game is not over, the players will start taking turns until a condition is met where one of the players has won or until the board is full. This is handled by the tic tac toe class, using methods provided by the game board class to check the state of the game.

I believe the code comments would be a much better way to demonstrate how I completed this assignment. It is a little difficult to explain in a writeup unless I want to just be surface level.

The hardest part of this assignment was checking whether or not the game was won. Thankfully, I actually had to do this as apart of my CS2112 final a year ago, so I remembered it vaguely. It is also a leetcode problem.

There are a few problems with my implementation. Some of the outputs that the user must read are a little unclear and I could change the language to make it nicer to read. Boards of greater than 10 characters don't seem to line up well because I don't account for board of larger than 9 x 9. Also sometimes you can bypass the input checking in certain sitations but im just going to assume that the user input is clean.

I would have liked to add a computer player but I think I have done enough for now.

I'm very proud of what I accomplished in this assignment. I may not know the nitty gritty of c++, but at least I was able to make something like this with the language.

In this assignment, I learned...

- How to make something cool with c++

- How to use template classes

Thank you Ron D and C++!
