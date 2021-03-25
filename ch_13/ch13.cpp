/*
    g++ Ch13.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main fltk-config --ldflags --use-images
*/
#include "Simple_window.h"
#include "Graph.h"

int main()
{
using namespace Graph_lib;

    int xmax = 800;
    int ymax = 1000;

Simple_window win {Point{100,100}, xmax, ymax, "Drill 13"};

    int x_grid = 100;
    int y_grid = 100;
    int ykis = 800;

    Lines grid;

    for (int x=x_grid; x<xmax; x+=x_grid)
        grid.add(Point{x,0},Point{x,ykis});
    for (int y=y_grid; y<ykis; y+=y_grid)
        grid.add(Point{0,y},Point{xmax,y});

    Rectangle n1 {Point{0,0},100,100};
    Rectangle n2 {Point{100,100},100,100};
    Rectangle n3 {Point{200,200},100,100};
    Rectangle n4 {Point{300,300},100,100};
    Rectangle n5 {Point{400,400},100,100};
    Rectangle n6 {Point{500,500},100,100};
    Rectangle n7 {Point{600,600},100,100};
    Rectangle n8 {Point{700,700},100,100};
    Image k {Point {300,0}, "index.jpeg"};
    Image k1 {Point {500,100}, "index.jpeg"};
    Image k2 {Point {100,500}, "index.jpeg"};
    Image k3 {Point {0,300}, "index.jpeg"};

    Image l {Point {0,0}, "f.jpeg"};



n1.set_fill_color(Color::red);
n2.set_fill_color(Color::red);
n3.set_fill_color(Color::red);
n4.set_fill_color(Color::red);
n5.set_fill_color(Color::red);
n6.set_fill_color(Color::red);
n7.set_fill_color(Color::red);
n8.set_fill_color(Color::red);

win.attach(k);
win.attach(k1);
win.attach(k2);
win.attach(k3);
win.attach(n1);
win.attach(n2);
win.attach(n3);
win.attach(n4);
win.attach(n5);
win.attach(n6);
win.attach(n7);
win.attach(n8);
win.attach(grid);
win.attach(l);


	for (int i=0; i<8; ++i)
		{
			for (int j=0;  j<8; ++j)
			{
			win.wait_for_button();
			if (j<7) l.move(100,0);
			else l.move(-700,100);
			}
		}

}

