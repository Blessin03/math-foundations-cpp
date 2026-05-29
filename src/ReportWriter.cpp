#include "ReportWriter.hpp"
#include <iostream>

using namespace std;
bool ReportWriter::exportReport(const string& filename, const string& content) {
    // open output file
    ofstream file(filename);

    // if file does not open
        // print error
        // return false
        if(!file.is_open()){
            cerr << "File didn't open";
            return false;
        }

    // write content to file
        file << content;
    // close file
    file.close();

    // return true
    return true;
}