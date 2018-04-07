#include<iostream>
#include "Postscript.h"
using namespace std;

int main() {
  Postscript p("test.ps");

  p.line(0,0, 300,400);  // 0 0 moveto 300 400 lineto stroke


 int r = 255, g = 0, b = 0;
    p.setColor(r, g, b);

  int x = 0, y = 0, w = 100, h = 100;
  p.drawRect(x, y, w, h);   // x y moveto x+w y lineto x+w y+h lineto ... closepath stroke


    double r1 = 1, g1= 0.5, b1= 0;
    p.setFillColor( r1, g1, b1); // 1.0 0.5 0 setrgbcolor
    x= 150;
    y= 150;

  p.fillRect(x, y, w, h);   // x y moveto x+w y lineto x+w y+h lineto ... closepath fill


 /*
  // optional, figure out how you want to manage color
  p.drawTriangle(x1,y1, x2,y2, x3,y3);
  p.fillTriangle(x1,y1, x2,y2, x3,y3);
  p.drawCircle(x,y,r); // x y 0 360 r arc stroke
  p.text(x,y, "testing testing 123"); // look it up  setfont  (ABC) show

  p.grid(300, 50, 500, 400, 50, 700);
*/


}
