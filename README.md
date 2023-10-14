# RECURSIVE TIC TAC TOE GAME IN CPP

This is a simple command-line based Tic Tac Toe game where players take turns placing X and O marks. The winner is determined by aligning three marks horizontally, vertically, or diagonally. If all cells are filled and there is no winner, the game ends in a draw.

## How to Play

1. Compile and run the `main.cpp` file.
2. First, choose whether you want to play as X or O.
3. When prompted, input the number of the cell where you want to place your mark (1-9).

## Recursive Gameplay

This game features recursive gameplay, allowing players to continue playing multiple rounds without restarting the program.

## Game Rules

- Players take turns placing their marks in empty cells.
- The game ends when a player wins or the board is completely filled.
- To make a move, enter the number of the cell you want to place your mark in.

## Win Conditions

A player wins if they have three of their marks in a row (horizontally, vertically, or diagonally).

## Draw Condition

If all cells are filled and there is no winner, the game ends in a draw.

## Restarting the Game

After a game ends, you will be prompted to play again (Y/N). Choosing 'Y' will reset the board and start a new game.

## Exiting the Game

At any point, you can choose to exit the game by entering 'N' when prompted to play again.

## Compilation

Compile the game using a C++ compiler:

```sh
g++ main.cpp -o game
