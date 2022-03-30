#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

bool Closing = false;

class Commands {
  public:
   void clear() {
     cout << "\x1B[2J\x1B[H";
   }
   void help() {
     cout << "--------" << endl;
     cout << "clear - Clears this prompt" << endl << "help - List of all commands" << endl << "exit - Exits this prompt" << endl;
     cout << "--------" << endl;
   }
   void exit() {
     Closing = true;
   }
   double between(double x, double y) {
     return (x + y) / 2;
   }
};

int main(int argc, char** argv[]) {
  Commands Actions;
  string inp;

  Actions.clear(); //Clear once the console is launched.
  cout << "--------" << endl << "-+*/= Formula Terminal =/*+-" << endl;
  Actions.help(); //List the commands once the console is opened.

  do {
    cin >> inp;

    if (inp == "help") {
      Actions.help();
    } else if (inp == "clear") {
      Actions.clear();
    } else if (inp == "exit") {
      Actions.exit();
    } else if (inp == "between") {
      
    } else {
      cout << "Unknown Command: " + inp << endl;
    }
  } while (!Closing);

  cout << "Exiting..." << endl;

  return 0;
}