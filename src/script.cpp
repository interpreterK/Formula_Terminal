#include <iostream>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

bool Closing = false;

class Commands {
  public:
   void clear() {
     system("clear");
   }
   void help() {
     cout << "--------" << endl 
     << "-+*/= Formula Terminal =/*+-" << endl;
     cout << "clear - Clears this prompt" << endl
     << "help - List of all commands" << endl
     << "exit - Exits this prompt" << endl
     << "between [x] [y] - Finds the number between 2 values" << endl;
     cout << "--------" << endl;
   }
   void exit() {
     Closing = true;
   }
   double between(double x, double y) {
     return (x + y) / 2;
   }
};

int main(int argc, char** argv) {
  Commands Actions;

  Actions.clear(); //Clear once the console is launched
  Actions.help(); //List the commands once the console is opened
  do {
    cout << "> "; //Enter input context symbol
    string inp;
    cin >> inp;

    if (inp == "help" || inp == "quit") {
      Actions.help();
    } else if (inp == "clear") {
      Actions.clear();
    } else if (inp == "exit") {
      Actions.exit();
    } else if (inp == "between") {
      int x = strtol(argv[1], NULL, 10);
      int y = strtol(argv[2], NULL, 10);
      for (int i = 0; i < argc; ++i) {
        cout << argv[i] << endl;
      }
    } else {
      cout << "Unknown Command: " + inp << endl;
    }
  } while (!Closing);

  cout << "Exiting..." << endl;

  return 0;
}