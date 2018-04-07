/*

 HW4b - Postscript Printing

 Connor DePalma and Yupei Liang.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

#include "Postscript.h"

Postscript::Postscript(std::string const &file) : file(file) {
    stream.open(file, std::ios::trunc | std::ios::out); //opens stream and allows for each new addition to be appended to the last

    stream << "/drawgrid {\n\t\t/ny exch def\n\t\t/ymax exch def\n\t\t/ymin exch def\n\t\t"
    << "/nx exch def\n\t\t/xmax exch def\n\t\t/xmin exch def\n\t\t"
    <<"ymin ymax ymin sub ny 1 sub div ymax {\n\t"
    <<"dup dup xmin exch moveto xmax exch lineto stroke\n\t\t"
    <<"} for\n\t\t" << "xmin xmax xmin sub nx 1 sub div xmax {\n\t"
    <<"dup dup ymin moveto ymax lineto stroke\n\t\t"
    <<"} for\n} bind def\n\n\n";


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
    <<"closepath\nfill\n\n";

}

void Postscript::drawCircle(double x, double y, double r){

    stream << x << " " << y << " " << r << " 0 360 " << "arc\nclosepath\nstroke\n\n";

}

void Postscript::grid(double xmin, double xmax, double xdiv,double ymin, double ymax, double ydiv){

    stream << xmin << " " << xmax << " " << xdiv << " " << ymin << " " << ymax << " " << ydiv << " drawgrid";

}

void Postscript::text(int x, int y, std::string t){
    
    stream << "/Times-Roman" <<" "<<"findfont\n"<< "20"<< " "<<"scalefont\n" <<" "<<"setfont\n"
    << x<<" "<< y<< " " << "moveto"<< " " << "("<< t << ")"<<" "<< "show\n";
}
