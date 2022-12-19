// Copyright 2022 Yangson Choi. All rights reserved.

#include <fstream>
#include <iostream>
#include <string>

using std::endl;
using std::cerr;
using std::ifstream;
using std::ofstream;
using std::ostream;
using std::string;
using std::getline;

void Replace(ostream& out, const string& line,
                            const string& what, const string& to) {
  string::size_type pos = 0;
  string::size_type index = line.find(what, pos);
  while ((index != string::npos)) {
    out << line.substr(pos, index - pos) << to;
    pos = index + what.size();
    index = line.find(what, pos);
  }
  out << line.substr(pos, index) << endl;
}

int main(int argc, char** argv) {
  if (argc != 4) {
    cerr << "usage: ./SedIsForLosers <filename> <what> <to>" << endl;
    return EXIT_FAILURE;
  }
  ifstream in;
  ofstream out;
  string filename(argv[1]);
  in.open(filename);
  if (in.good() == false) {
    cerr << "open fail: " << filename << endl;
    return EXIT_FAILURE;
  }
  filename += ".replace";
  out.open(filename);
  if (out.good() == false) {
    cerr << "open fail: " << filename << endl;
    return EXIT_FAILURE;
  }
  string what(argv[2]);
  string to(argv[3]);
  string line;
  while (getline(in, line))
    Replace(out, line, what, to);
  in.close();
  out.close();
  return 0;
}
