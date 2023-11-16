#include<iostream>
#include "5-chess-game.h"

int main()
{
    ChessGame * game = new ChessGame();

    ConsoleWriter console_writer;
    ConsoleReader console_reader;

    int turns_counter = 1;

    while (!game->gameEnded())
    {
        std::cout << std::endl << "Turn " << turns_counter++ << std::endl << std:: endl;

        console_writer.printChessBoard(game->getChessBoard());

        ChessFigures * selected_figure = nullptr;

        do
        {
            console_writer.printPlayerMoves(game->getFiguresList(), game->isWhiteTurn(), game->getChessBoard());
            selected_figure = game->getPlayerSelectedFigure(console_reader.getUserInput());
        }
        while (selected_figure == nullptr );

        std::string new_position;

        ChessFigures * enemy_figure = nullptr;

        do
        {
            console_writer.printFigureMoves(selected_figure, game->getChessBoard());

            new_position = console_reader.getUserInput();

            enemy_figure = nullptr;

            if (selected_figure->isEnemyFigureAtPosition(ChessFigures::getPositionFromString(new_position), game->getChessBoard()))
            {
                enemy_figure = game->getFigureAtPosition(new_position);
            }

        }
        while (!selected_figure->move(new_position, game->getChessBoard()));

        if (enemy_figure != nullptr)
        {
            std::cout << std::endl << enemy_figure->getFigureDetailsShort() << " removed from game" << std::endl;

            if (!game->deleteFigure(enemy_figure))
            {
                throw "Figure deletion failed";
            }
        }

        game->updateBoard();

        game->switchPlayer();
    }

    console_writer.printChessBoard(game->getChessBoard());

    std::cout << std::endl << "Checkmate - " << (game->isWhiteTurn()?"Black":"White") << " victory!" << std::endl;

    delete game;

    return 0;
}
