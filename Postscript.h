//
// Created by Connor DePalma on 4/1/18.
//

#pragma once
#include <iostream>
#include <fstream>

class Postscript {

private:
    std::string file;

    std::ofstream stream;

public:

    Postscript (std::string const & file);

    void line(double x, double y, double x1, double y1);

    void drawRect(double x, double y, double w, double h);
    
    void setColor(int r, int g, int b);
    
    void fillRect(double x, double y, double w, double h);
    
    void setFillColor(double r, double g, double b);

};
