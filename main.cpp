//#include <SFML/Graphics.hpp>
#include <iostream>
#include <map>                              // allow the usage to create maps

using namespace std;                        // removes the need to constantly be using std::

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
    string board_array[rows][cols];         // this is the array for the chess board

    map<pair<int, int>, string> board;
    board = {{{0,0}, "A1"}, {{0,1}, "A2"}};


    cout << "Hello World" << endl;          // Easter Egg
    cout << board.at({0,0}) << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            board_array[i][j] = "[ ] ";
        }
    }

    for (int i = 0; i < rows; i++) {        // this for loop is what prints the array onto the terminal
        for (int j = 0; j < cols; j++) {
            cout << board_array[i][j];
            
            if (j == (rows - 1)) {
                cout << endl;
            }
            
        }
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