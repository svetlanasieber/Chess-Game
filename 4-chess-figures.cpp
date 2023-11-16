#include<iostream>
#include "4-chess-figures.h"

struct
{
    void demoPawn()
    {
        std::cout << "Pawn movements demo" << std::endl;

        ChessBoard chessBoard = {
        // a    b    c    d    e    f    g    h
          'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', // 1 White
          'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', // 2 figures
          '0', '0', '0', '0', '0', '0', '0', '0', // 3
          'p', '0', '0', '0', '0', '0', '0', '0', // 4
          '0', '0', '0', '0', '0', '0', '0', '0', // 5
          '0', 'P', 'p', '0', '0', '0', '0', '0', // 6
          'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', // 7 Black
          'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};// 8 figures

        Pawn pawn("a7", BLACK);
        std::cout << pawn.getFigureDetails(chessBoard) << std::endl;
        Pawn pawn2("b7", BLACK);
        std::cout << pawn2.getFigureDetails(chessBoard) << std::endl;
        Pawn pawn3("c7", BLACK);
        std::cout << pawn3.getFigureDetails(chessBoard) << std::endl;
        Pawn pawn4("a2", WHITE);
        std::cout << pawn4.getFigureDetails(chessBoard) << std::endl;
        Pawn pawn5("b6", WHITE);
        std::cout << pawn5.getFigureDetails(chessBoard) << std::endl;

        std::cout << std::endl;
    }

    void demoKnight()
    {
        std::cout << "Knight movements demo" << std::endl;

        ChessBoard chessBoard = {
        // a    b    c    d    e    f    g    h
          'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', // 1 White
          'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', // 2 figures
          'n', '0', 'n', '0', '0', '0', '0', '0', // 3
          '0', '0', '0', '0', '0', '0', '0', '0', // 4
          '0', '0', '0', '0', '0', '0', 'N', '0', // 5
          '0', '0', '0', 'N', '0', '0', '0', '0', // 6
          'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', // 7 Black
          'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};// 8 figures


        Knight knight("a3", BLACK);
        std::cout << knight.getFigureDetails(chessBoard) << std::endl;
        Knight knight2("c3", BLACK);
        std::cout << knight2.getFigureDetails(chessBoard) << std::endl;
        Knight knight3("b8", BLACK);
        std::cout << knight3.getFigureDetails(chessBoard) << std::endl;
        Knight knight4("d6", WHITE);
        std::cout << knight4.getFigureDetails(chessBoard) << std::endl;
        Knight knight5("g5", WHITE);
        std::cout << knight5.getFigureDetails(chessBoard) << std::endl;
        Knight knight6("b1", WHITE);
        std::cout << knight6.getFigureDetails(chessBoard) << std::endl;

        std::cout << std::endl;
    }

    void demoBishop()
    {
        std::cout << "Bishop movements demo" << std::endl;

        ChessBoard chessBoard = {
        // a    b    c    d    e    f    g    h
          'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', // 1 White
          'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', // 2 figures
          'B', '0', '0', '0', '0', '0', '0', '0', // 3
          '0', '0', '0', '0', '0', '0', '0', 'B', // 4
          'b', '0', '0', 'b', 'B', '0', '0', 'b', // 5
          '0', '0', '0', '0', '0', '0', '0', '0', // 6
          'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', // 7 Black
          'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};// 8 figures

        Bishop bishop("d5", BLACK);
        std::cout << bishop.getFigureDetails(chessBoard) << std::endl;
        Bishop bishop2("a5", BLACK);
        std::cout << bishop2.getFigureDetails(chessBoard) << std::endl;
        Bishop bishop3("h5", BLACK);
        std::cout << bishop3.getFigureDetails(chessBoard) << std::endl;
        Bishop bishop4("e5", WHITE);
        std::cout << bishop4.getFigureDetails(chessBoard) << std::endl;
        Bishop bishop5("h4", WHITE);
        std::cout << bishop5.getFigureDetails(chessBoard) << std::endl;
        Bishop bishop6("a3", WHITE);
        std::cout << bishop6.getFigureDetails(chessBoard) << std::endl;

        std::cout << std::endl;
    }

    void demoRook()
    {
        std::cout << "Rook movements demo" << std::endl;

        ChessBoard chessBoard = {
        // a    b    c    d    e    f    g    h
          'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', // 1 White
          'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', // 2 figures
          'r', '0', '0', '0', '0', '0', '0', '0', // 3
          '0', '0', '0', '0', '0', 'R', '0', '0', // 4
          'R', '0', '0', 'r', '0', '0', '0', '0', // 5
          '0', '0', '0', '0', '0', 'R', '0', '0', // 6
          'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', // 7 Black
          'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};// 8 figures

        Rook rook("d5", BLACK);
        std::cout << rook.getFigureDetails(chessBoard) << std::endl;
        Rook rook2("a8", BLACK);
        std::cout << rook2.getFigureDetails(chessBoard) << std::endl;
        Rook rook3("a3", BLACK);
        std::cout << rook3.getFigureDetails(chessBoard) << std::endl;
        Rook rook4("f4", WHITE);
        std::cout << rook4.getFigureDetails(chessBoard) << std::endl;
        Rook rook5("a5", WHITE);
        std::cout << rook5.getFigureDetails(chessBoard) << std::endl;
        Rook rook6("f6", WHITE);
        std::cout << rook6.getFigureDetails(chessBoard) << std::endl;

        std::cout << std::endl;
    }

    void demoQueen()
    {
        std::cout << "Queen movements demo" << std::endl;

        ChessBoard chessBoard = {
        // a    b    c    d    e    f    g    h
          'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', // 1 White
          'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', // 2 figures
          '0', '0', '0', '0', '0', '0', '0', '0', // 3
          'Q', '0', '0', '0', '0', 'Q', '0', '0', // 4
          '0', '0', '0', 'q', '0', '0', '0', '0', // 5
          'q', '0', '0', '0', '0', '0', '0', 'Q', // 6
          'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', // 7 Black
          'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};// 8 figures

        Queen queen("d5", BLACK);
        std::cout << queen.getFigureDetails(chessBoard) << std::endl;
        Queen queen2("d8", BLACK);
        std::cout << queen2.getFigureDetails(chessBoard) << std::endl;
        Queen queen3("a6", BLACK);
        std::cout << queen3.getFigureDetails(chessBoard) << std::endl;
        Queen queen4("a4", WHITE);
        std::cout << queen4.getFigureDetails(chessBoard) << std::endl;
        Queen queen5("h6", WHITE);
        std::cout << queen5.getFigureDetails(chessBoard) << std::endl;
        Queen queen6("f4", WHITE);
        std::cout << queen6.getFigureDetails(chessBoard) << std::endl;

        std::cout << std::endl;
    }

    void demoKing()
    {
        std::cout << "King movements demo" << std::endl;

        ChessBoard chessBoard = {
        // a    b    c    d    e    f    g    h
          'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', // 1 White
          'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', // 2 figures
          'K', '0', '0', '0', '0', '0', '0', 'k', // 3
          '0', '0', '0', '0', '0', '0', '0', '0', // 4
          '0', '0', '0', 'k', 'K', '0', '0', '0', // 5
          '0', '0', '0', '0', 'K', '0', '0', '0', // 6
          'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', // 7 Black
          'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};// 8 figures

        King king("d5", BLACK);
        std::cout << king.getFigureDetails(chessBoard) << std::endl;
        King king2("h3", BLACK);
        std::cout << king2.getFigureDetails(chessBoard) << std::endl;
        King king3("e8", BLACK);
        std::cout << king3.getFigureDetails(chessBoard) << std::endl;
        King king4("e5", WHITE);
        std::cout << king4.getFigureDetails(chessBoard) << std::endl;
        King king5("e6", WHITE);
        std::cout << king5.getFigureDetails(chessBoard) << std::endl;
        King king6("a3", WHITE);
        std::cout << king6.getFigureDetails(chessBoard) << std::endl;

        std::cout << std::endl;
    }
}testFigures;

int main()
{
    testFigures.demoPawn();

    testFigures.demoKnight();

    testFigures.demoBishop();

    testFigures.demoRook();

    testFigures.demoQueen();

    testFigures.demoKing();

    return 0;
}
