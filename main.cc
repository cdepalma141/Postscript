/*

 HW4b - Postscript Printing

 Connor DePalma and Yupei Liang.

 I pledge my honor that I have abided by the Stevens Honor System.

 */
#include<iostream>
#include "Postscript.h"
using namespace std;

int main() {
  Postscript p("test.ps");

  p.line(0,0, 300,300);  // 0 0 moveto 300 400 lineto stroke


  double r = 1, g = 0, b = 0;
  p.setColor(r, g, b);

  double x = 0, y = 0, w = 100, h = 100;
  p.drawRect(x, y, w, h);   // x y moveto x+w y lineto x+w y+h lineto ... closepath stroke


  r = 1, g = 0.5, b = 0;
  p.setColor(r, g, b); // 1.0 0.5 0 setrgbcolor

  x= 150, y = 150;
  p.fillRect(x, y, w, h);   // x y moveto x+w y lineto x+w y+h lineto ... closepath fill

  b = 1;
  p.setColor(r, g, b);

  p.drawTriangle(0, 150, 100, 150, 50, 225);

  r = 0;
  p.setColor(r, g, b);

  p.fillTriangle(0, 230, 100, 230, 50, 305);

  g = 1;
  p.setColor(r, g, b);

  p.drawCircle(350,200,50); // x y 0 360 r arc stroke


  //p.text(x,y, "testing testing 123"); // look it up  setfont  (ABC) show
  r = 0, g = 0, b = 0;
  p.setColor(r, g, b);

  p.grid(300, 500, 50, 400, 700, 50);



}
