/*

 HW4b - Postscript Printing

 Connor DePalma and Yupei Liang.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

#pragma once
#include <iostream>
#include <fstream>
#include<string>

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

    void drawCircle(double x, double y, double r);
    
    void text(int x, int y, std::string t);

    void grid(double xmin, double xmax, double xdiv,double ymin, double ymax, double ydiv);
};
