// Copyright 2022 Yangson Choi. All rights reserved.

#include <cctype>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::toupper;

int main(int argc, char** argv) {
    if (argc == 1) {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return 0;
    }
    for (int i = 1; i < argc; ++i) {
      string msg = argv[i];
      for (string::size_type i = 0; i != msg.size(); ++i)
        msg[i] = toupper(msg[i]);
          cout << msg;
    }
    cout << endl;
    return 0;
}
