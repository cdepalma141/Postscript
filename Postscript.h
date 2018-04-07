//
// Created by Connor DePalma on 4/1/18.
//

#pragma once
#include <iostream>
#include <fstream>

class Postscript {

private:
    std::string file;

    std::fstream stream;

public:

    Postscript (std::string const & file);

    void line(double x, double y, double x1, double y1);

    void drawRect(double x, double y, double w, double h);

    void setColor(double r, double g, double b);

    void fillRect(double x, double y, double w, double h);

    void setFillColor(double r, double g, double b);

    void drawTriangle(double x1, double y1, double x2, double y2, double x3, double y3);

    void fillTriangle(double x1, double y1, double x2, double y2, double x3, double y3);

};
