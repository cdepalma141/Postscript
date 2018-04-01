//
// Created by Connor DePalma on 4/1/18.
//

#include "Postscript.h"

Postscript::Postscript(std::string const &file) : file(file) {

    stream.open(file, std::ofstream::out | std::ofstream::app); //opens stream and allows for each new addition to be appended to the last

}

void Postscript::line(double x, double y, double x1, double y1) {


    stream << x << " " << y << " moveto\n" << x1 << " " << y1 << " lineto\nstroke\n\n";

}

void Postscript::drawRect(double x, double y, double w, double h) {


    stream << x << " " << y << " moveto\n" << x+w << " " << y << " lineto\n"
           << x+w << " " << y+h << " lineto\n" << x << " " << y+h << " lineto\n"
           << "closepath\nstroke\n\n";

}