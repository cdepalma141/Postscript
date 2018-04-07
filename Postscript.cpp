//
// Created by Connor DePalma on 4/1/18.
//

#include "Postscript.h"

Postscript::Postscript(std::string const &file) : file(file) {

    stream.open(file, std::ios::trunc | std::ios::out); //opens stream and allows for each new addition to be appended to the last

}

void Postscript::line(double x, double y, double x1, double y1) {


    stream << x << " " << y << " moveto\n" << x1 << " " << y1 << " lineto\nstroke\n\n";

}

void Postscript::drawRect(double x, double y, double w, double h) {


    stream << x << " " << y << " moveto\n" << x+w << " " << y << " lineto\n"
    << x+w << " " << y+h << " lineto\n" << x << " " << y+h << " lineto\n"
    << "closepath\nstroke\n\n";

}

void Postscript::setColor(double r, double g, double b)  {
    stream  <<r<< " " << g<< " " << b <<" "<<"setrgbcolor\n\n";


}

void Postscript::fillRect(double x, double y, double w, double h) {

    stream << x << " " << y << " moveto\n" << x+w << " " << y << " lineto\n"
    << x+w << " " << y+h<< " lineto\n" << x << " " << y+h << " lineto\n"
    << "closepath\nfill\n\n";
}

void Postscript::setFillColor(double r, double g, double b){
    stream <<r<< " " << g<< " " << b <<" "<<"setrgbcolor\n\n";
};


void Postscript::drawTriangle(double x1, double y1, double x2, double y2, double x3, double y3) {

    stream << x1 << " " << y1 << " moveto\n"
    <<x2 << " " << y2 <<" lineto\n"
    <<x3 << " " << y3 <<" lineto\n"
    <<"closepath\n stroke\n\n";

}

void Postscript::fillTriangle(double x1, double y1, double x2, double y2, double x3, double y3) {

    stream << x1 << " " << y1 << " moveto\n"
    <<x2 << " " << y2 <<" lineto\n"
    <<x3 << " " << y3 <<" lineto\n"
    <<"closepath\n fill\n\n";

}

void Postscript::drawCircle(double x, double y, double r){

    stream << x << " " << y << " " << r << " 0 360 " << " arc\nclosepath\nstroke\n\n";

}
