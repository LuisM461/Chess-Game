//#include <SFML/Graphics.hpp>
#include <iostream>
#include <map>                                              // allow the usage to create maps

using namespace std;                                        // removes the need to constantly be using std::

/*In order to compile this code, you have to run command:
    
    make
  
  Do not use the run/debug button from VSCode application.
  This is because of the nature of using the SFML Graphic Library.
*/

int main()
{
    //sf::RenderWindow window;
    //window.create(sf::VideoMode({1280, 720}), "Chess");

    /* can be written like such or can be written like

    sf::RenderWindow window(sf::VideoMode(1920, 720), "Chess");

    */
    const int rows = 8;
    const int cols = 8;
    char file;
    char rank;

    map<pair<int, int>, string> board;                      // This is the map for the chess board

    for (int i = 0; i < rows; i++) {
        char rank = char('8' - i);

        for (int j = 0; j < cols; j++) {
            char file = char('A' + j); 
            board[{i,j}] = string(1, file) + rank;
        }
    }

    for (int i = 0; i < rows; i++) {                        // This prints out the board squares in the terminal
        for (int j = 0; j < cols; j++) {
            cout << "[" << board[{i, j}] << "]" << " ";
        }
        cout << endl;
    }


    // King, Queen, Rook, Knight, Bishop, Pawn
    class King {
        public:
            string name = "King";
            string color;
            
            // ADD movements
    };
    class Queen {
        public:
            string name = "Queen";
            string color;

            // ADD movements
    };
    class Rook {
        public:
            string name = "Rook";
            string color;

            //ADD movements
    };
    class Knight {
        public:
            string name = "Knight";
            string color;

            //ADD movements
    };
    class Bishop {
        public:
            string name = "Bishop";
            string color;

            //ADD movements
    };
    class Pawn {
        public:
            string name = "Pawn";
            string color;

            //ADD movements
    };

    // while (window.isOpen())
    // {
    //     while (const optional event = window.pollEvent())
    //     {
    //         if (event -> is<sf::Event::Closed>())
    //             window.close();
    //     }

    //     window.clear(sf::Color(210, 180, 140));
    //     window.display();
    // }




}   