#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include<stdio.h>
using namespace std;
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <string>
#include<mmsystem.h>


void init()
{
    //glClearColor(0.8,0.6,0.6,0);
     glClearColor(0.6,0.7,1,0);
     //glClearColor(0.8,0.6,0.8,0);

    glOrtho(-100,100,-100,100,-10,10);
}


void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{

    glBegin(GL_TRIANGLE_FAN );
    glVertex2f(cx,cy);

    for(int i=0; i<=100; i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f(x+cx,y+cy);
    }
    glEnd();

}


void star()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(0.5,0.15,-50,30);
    circle(0.15,0.5,-50,30);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(0.5,0.15,-30,25);
    circle(0.15,0.5,-30,25);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(0.5,0.15,-60,20);
    circle(0.15,0.5,-60,20);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(0.5,0.15,-35,30);
    circle(0.15,0.5,-35,30);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(0.5,0.15,-70,30);
    circle(0.15,0.5,-70,30);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(0.5,0.15,-15,22);
    circle(0.15,0.5,-15,22);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(0.5,0.15,-45,22);
    circle(0.15,0.5,-45,22);


}


void design()
{
    //day upper sungls
    glColor3f(1.0f, 1.0f, 1.0f);

    circle(3,13,77,43);
    circle(10,4,77,43);

    glColor3f(0.0f, 0.0f, 0.0f);
    circle(2,12,77,43);
    circle(9,3,77,43);

// night upper sungls

    glColor3f(0.0f, 0.0f, 0.0f);
    circle(3,13,-77,43);
    circle(10,4,-77,43);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(2,12,-77,43);
    circle(9,3,-77,43);

}


void Glass()
{
    glColor3f(1,1,1);
    glRectf(-5,16,5,18);

    //glass border1
    glColor3f(1,1,1.2 );
    glBegin(GL_POLYGON);
    glVertex2d(74,-43);
    glVertex2d(8,-35);
    glVertex2d(6,32);
    glVertex2d(78,43);
    glEnd();


    //glass border2
    glColor3f(1,1,1.2 );
    glBegin(GL_POLYGON);
    glVertex2d(-74,-43);
    glVertex2d(-8,-35);
    glVertex2d(-6,32);
    glVertex2d(-78,43);
    glEnd();


    //glass1
    glColor3f(0.4,0.8,1);
    glBegin(GL_POLYGON);
    glVertex2d(4,21);
    glVertex2d(8,-32);
    glVertex2d(70,-40);
    glVertex2d(75,40);

    glVertex2d(4,32);
    glEnd();

    //glass2
    glColor3f(0.1,0.1,0.3);
    glBegin(GL_POLYGON);
    glVertex2d(-70,-40);
    glVertex2d(-8,-32);
    glVertex2d(-4,21);

    glVertex2d(-4,32);
    glVertex2d(-75,40);

    glEnd();

    //sunglass stick

    glColor3f(0.0f, 0.0f, 0.0f);

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2d(-4,21);
    glVertex2d(4,21);
    glVertex2d(6,32);
    glVertex2d(-6,32);
    glEnd();


}


float  p=7,t=7;

void Cld1()
{
//sun

    glColor3f(1.0f, 1.0f, 0.0f);
    circle(7,10,25,t+20);

    if(t<=4)
        t=t+0.003;

    else
        t=-20;

    glutPostRedisplay();


//cloud

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(3,5,p+1,15);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(3,5,p+4,20);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(3,5,p+8,18);
    glColor3f(0.9,1,1);
    circle(3,5,p+10,13);
    glColor3f(0.9,1,1);
    circle(3,5,p+4,12);
    glColor3f(0.9,1,1);
    circle(3,5,p+8,12);


    if(p<=62)
        p=p+.006;

    else
        p=7;

    glutPostRedisplay();


}


float q=2;

void Cld2()
{
//Moon

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(6,9,q-57,20);


    glColor3f(0.1,0.1,0.3);
    circle(6,9,q-54,22);


    if(q<=43)
        q=q+.003;

    else
        q=-10;

    glutPostRedisplay();



}


void roads()
{
    //road

    glColor3f( 0.5,0.6,0.6);
    glBegin(GL_POLYGON);
    glVertex2d(8,-32);
    glVertex2d(70,-40);
    glVertex2d(71,-25);
    glVertex2d(7.2,-25);
    glEnd();

    //brown line
    glColor3f( 0.5,0.4,0.3 );
    glRectf(7.2,-25,71,-23);

    //white line
    glColor3f( 1,1,1 );
    glRectf(10,-32,15,-31);
    glRectf(20,-32,25,-31);
    glRectf(30,-32,35,-31);
    glRectf(40,-32,45,-31);
    glRectf(50,-32,55,-31);
    glRectf(60,-32,65,-31);
    glRectf(70,-32,72,-31);

    //gls -2

    //brown line
    glColor3f( 0.5,0.4,0.5 );
    glRectf(-7.3,-25,-71,-23);

    //road

    glColor3f( 0.3,0.3,0.3);
    glBegin(GL_POLYGON);
    glVertex2d(-8,-32);
    glVertex2d(-70,-40);
    glVertex2d(-71,-25);
    glVertex2d(-7.2,-25);
    glEnd();

    //white line
    glColor3f( 1,1,1 );
    glRectf(-10,-32,-15,-31);
    glRectf(-20,-32,-25,-31);
    glRectf(-30,-32,-35,-31);
    glRectf(-40,-32,-45,-31);
    glRectf(-50,-32,-55,-31);
    glRectf(-60,-32,-65,-31);
    glRectf(-70,-32,-72,-31);

}


float r=7 ,s=7;

void Elements()
{

//house b1
    glColor3f(0.3,0.7,0.6);
    glBegin(GL_POLYGON);

    glVertex2d(7.2,-23);
    glVertex2d(11,-23);
    glVertex2d(11,1);
    glVertex2d(5.2,5);



    glColor3f(0.4,0.7,0.7);
    glBegin(GL_POLYGON);
    glVertex2d(5.5,1);
    glVertex2d(10,1);
    glVertex2d(10,5);
    glVertex2d(5.2,5);
    glEnd();

////house b2

    glColor3f(0.4,0.7,0.7);
    glRectf(11,-23,25,-1);

////house b3

    glColor3f(0.4,0.7,0.7);
    glRectf(30,-23,36,8);

    glColor3f(0.4,0.8,0.6);
    glRectf(30,-23,33,-3);
    glRectf(33,-3,34,-6);

    ////house b4

    glColor3f(0.4,0.7,0.7);
    glRectf(48,-23,66,4);
    glRectf(48,4,67,7);

    glColor3f(0.5,0.8,0.8);
    glRectf(30,-23,55,-10);
    glRectf(48,-23,52,-5);


    glColor3f(0.4,0.8,0.6);
    glRectf(30,-23,33,-3);
    glRectf(33,-3,34,-6);


    //house b5

    glColor3f(0.5,0.8,0.8);

    glRectf(61,-23,69,1);



//house f4:

    glColor3f(0.8,0.5,0);

    glRectf(53,-23,64,15);
    glRectf(52,15,65,17);
    glRectf(53,17,64,18);

    //white shade
    glColor3f(1,1,1);
    glRectf(53,-18,64,-16.9);
    glRectf(53,-12,64,-10.9);
    glRectf(53,-6,64,-4.9);
    glRectf(53,0,64,1.3);
    glRectf(53,6,64,7.3);
    glRectf(53,12,64,13.3);

    glRectf(55,15,56,-23);
    glRectf(58,15,59,-23);
    glRectf(61,15,62,-23);


    //House f5:

    glColor3f(0.7,0.7,1);
    glBegin(GL_POLYGON);
    glVertex2d(63,-23);
    glVertex2d(71,-23);
    glVertex2d(72.4,-2);
    glVertex2d(63,-2);
    glEnd();

    //window
    glColor3f(0.6,0.3,0);
    glRectf(65,-22,67,-4);

    glColor3f(1,1,1);
    glRectf(65.5,-21,66.5,-19.5);
    glRectf(65.5,-18,66.5,-16.5);
    glRectf(65.5,-15,66.5,-13.5);
    glRectf(65.5,-12,66.5,-10.5);
    glRectf(65.5,-9,66.5,-7.5);
    glRectf(65.5,-6,66.5,-4.5);

    glColor3f(1,1,1);
    glRectf(67.5,-21,68.5,-19.5);
    glRectf(67.5,-18,68.5,-16.5);
    glRectf(67.5,-15,68.5,-13.5);
    glRectf(67.5,-12,68.5,-10.5);
    glRectf(67.5,-9,68.5,-7.5);
    glRectf(67.5,-6,68.5,-4.5);

    glColor3f(0.6,0.3,0);
    glRectf(69,-22,71,-4);
    glColor3f(1,1,1);
    glRectf(69.5,-21,70.5,-19.5);
    glRectf(69.5,-18,70.5,-16.5);
    glRectf(69.5,-15,70.5,-13.5);
    glRectf(69.5,-12,70.5,-10.5);
    glRectf(69.5,-9,70.5,-7.5);
    glRectf(69.5,-6,70.5,-4.5);

    glRectf(62.5,-1.5,72.5,-3);
    glColor3f(0.6,0.3,0);
    glRectf(63,0,72.5,-1.5);


//house f3: Mosjid

    //first floor
    glColor3f(0,0.4,0.1);
    glRectf(34,-23,50,-13);

    //window
    glColor3f(0.5,0.7,0.6);
    glRectf(35,-23,37,-15);
    glRectf(38.5,-23,40,-17);
    glRectf(41,-23,43.6,-15);
    glRectf(44.5,-23,46,-17);
    glRectf(47,-23,49,-15);

    //ling miner
    glColor3f(0,0.4,0.4);
    glRectf(47,-13,49.5,13);

    glColor3f(0,0.6,0.6);
    glRectf(46.8,10,49.7,15);

    glColor3f(0,0.4,0.4);
    glRectf(47,12,49.5,15);
    glColor3f(0,0.6,0.6);
    glRectf(48,15,48.5,19);

    //round minr
    glColor3f(0,0.3,0.4);
    circle(5,7,41,0);

    glColor3f(0,0.4,0.3);
    glRectf(40,6.7,42,8.5);
    glRectf(40.8,8.5,41.3,10.5);

    //2nd floor
    glColor3f(0,0.3,0);
    glRectf(35,-13.5,46.7,-03);

    //window
    glColor3f(0.5,0.7,0.6);

    glRectf(36,-12,38,-8);
    glRectf(39,-12,40.8,-8);
    glRectf(41.8,-12,43.5,-8);
    glRectf(44.5,-12,46.5,-8);

//bar


    glColor3f(0,0.5,0.7);
    glRectf(34.6,-5,47,-3);

    glColor3f(0.8,0.8,0.8);

    glRectf(35,-3,37.5,-1);
    glRectf(38,-3,40.5,-1);
    glRectf(41,-3,43.5,-1);
    glRectf(44,-3,46.7,-1);


//house f2

    glColor3f(0.7,0.8,0.3);
    glRectf(15,-23,30,4);

    glColor3f(0.7,0.6,0.3);
    glRectf(13,4,32,5);
    circle(9.5,1,22.5,5);

    //line

    glColor3f(0.4,0.4,0.0);
    glRectf(16,-4,29,-3);
    glRectf(16,-14,29,-13);

    //window

    glColor3f(0.4,0.4,0.0);
    glRectf(16.5,-1,19.5,3);

    glRectf(21,-1,24,3);
    glRectf(25.5,-1,28.5,3);

    glRectf(16.5,-6,19.5,-10);
    glRectf(21,-6,24,-10);
    glRectf(25.5,-6,28.5,-10);

    glRectf(16.5,-16,19.5,-20);
    glRectf(21,-23,24,-16);
    glRectf(25.5,-16,28.5,-20);


////house f1


    glColor3f(0.6,0.5,0.6);
    glBegin(GL_POLYGON);
    glVertex2d(7.2,-23);
    glVertex2d(17,-23);
    glVertex2d(17,-6);
    glVertex2d(5.9,-6);
    glEnd();

    glColor3f(0.9,0.7,0.2);
    glBegin(GL_POLYGON);
    glVertex2d( 6.4,-12);
    glVertex2d(20,-12);
    glVertex2d(17,-6);
    glVertex2d(5.9,-6);
    glEnd();

    glColor3f(0.6,0.5,0.6);
    glRectf(6,-6,17,-4);

    glColor3f(0.9,0.7,0.2);
    glRectf(13,-4,16,-1);


    //window

    glColor3f(0.8,0.8,0.8);
    glRectf(7,-19,10,-16);
    glRectf(12,-19,15,-16);

////Glass-2


// house back-1

    glColor3f(0.3,0.3,0.40);

    glBegin(GL_POLYGON);

    glVertex2d(-72.8,4);
    glVertex2d(-65,4);
    glVertex2d(-65,-23);
    glVertex2d(-71.2,-23);
    glEnd();

    //house b2:

    glColor3f(0.3,0.3,0.7 );
    glRectf(-36,-3,-55,-23);

    glColor3f(0.3,0.4,0.6);
    glRectf(-25,4,-45,-23);
    glRectf(-25,5,-46,2);
////
    glColor3f(0.3,0.3,0.5);

    glBegin(GL_POLYGON);

    glVertex2d(-65.8,0);
    glVertex2d(-50,0);
    glVertex2d(-50,-23);
    glVertex2d(-65.2,-23);
    glEnd();

    glRectf(-60.8,-1,-49,1);


// house back-3


    glColor3f(0.3,0.3,0.5);
    glRectf(-8,10,-20,-23);
    glRectf(-12,15,-20,-23);


    glColor3f(0.3,0.4,0.5);
    glRectf(-15,-2,-25,-23);

//2d home

    glColor3f(0.3,0.2,0.4);

    glBegin(GL_POLYGON);

    glVertex2d(-70,8.5);
    glVertex2d(-58,10);
    glVertex2d(-58,-23);
    glVertex2d(-70,-23);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.4);
    glVertex2d(-58,10);
    glVertex2d(-58,-23);
    glVertex2d(-53,-23);
    glVertex2d(-53,7.5);

    glEnd();

//shade window


    glColor3f(0.5,0.6,0.8);

    glBegin(GL_POLYGON);

    glVertex2d(-68,7);
    glVertex2d(-65,7.5);
    glVertex2d(-65,-20);
    glVertex2d(-68,-20.5);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(-63,7.5);
    glVertex2d(-60,8);
    glVertex2d(-60,-19.5);
    glVertex2d(-63,-20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(-56.5,7);
    glVertex2d(-56.5,-20);
    glVertex2d(-54.5,-20.5);
    glVertex2d(-54.5,5.5);

    glEnd();


    //house f3:


    glColor3f(0.3,0.2,0.3);

    glRectf(-19,-23,-34,8);
    glRectf(-18,8,-35,10);

    glColor3f(0.3,1,0.8);
    glRectf(-24,-20,-26,-17);
    glColor3f(0.5,0.6,0.8);

    glRectf(-24,-15,-26,-12);
    glRectf(-24,-10,-26,-7);
    glColor3f(0.3,1,0.8);
    glRectf(-24,-5,-26,-2);
    glColor3f(0.5,0.6,0.8);

    glRectf(-24,0,-26,3);
    glRectf(-24,5,-26,8);

    glRectf(-20.5,-20,-22.5,-17);
    glRectf(-20.5,-15,-22.5,-12);
    glRectf(-20.5,-10,-22.5,-7);
    glRectf(-20.5,-5,-22.5,-2);
    glRectf(-20.5,0,-22.5,3);
    glColor3f(0.3,1,0.8);
    glRectf(-20.5,5,-22.5,8);
    glColor3f(0.5,0.6,0.8);

    glRectf(-27.5,-20,-29.5,-17);
    glRectf(-27.5,-15,-29.5,-12);
    glRectf(-27.5,-10,-29.5,-7);
    glRectf(-27.5,-5,-29.5,-2);
    glRectf(-27.5,0,-29.5,3);
    glColor3f(0.3,1,0.8);
    glRectf(-27.5,5,-29.5,8);

    glColor3f(0.5,0.6,0.8);

    glRectf(-31,-20,-33,-17);
    glColor3f(0.3,1,0.8);
    glRectf(-31,-15,-33,-12);
    glColor3f(0.5,0.6,0.8);

    glRectf(-31,-10,-33,-7);
    glRectf(-31,-5,-33,-2);
    glColor3f(0.3,1,0.8);

    glRectf(-31,0,-33,3);
    glColor3f(0.5,0.6,0.8);

    glRectf(-31,5,-33,8);


    ////house front 2


    glColor3f(0.3,0.5,0.6);
    glRectf(-35,-5,-52,-23);

    glColor3f(0.3,0.6,0.8);

    glRectf(-36.5,-7,-50.5,-22);

    glColor3f(0.3,0.4,0.9);

    glBegin(GL_POLYGON);

    glVertex2d(-33,-10);
    glVertex2d(-54,-10);
    glVertex2d(-52,-6);
    glVertex2d(-35,-6);
    glEnd();

    //window

    glRectf(-41.5,-12,-45,-22);
    glColor3f(0.3,1,0.8);
    glRectf(-47,-15,-49.5,-19);
    glRectf(-37.5,-15,-40,-19);

    ////house f4

    glColor3f(0.3,0.5,0.6);

   // glColor3f(0.6,0.5,0.6);

    glBegin(GL_POLYGON);
    glVertex2d(-7.2,-23);
    glVertex2d(-12,-23);
    glVertex2d(-12,-6);
    glVertex2d(-5.9,-6);
    glEnd();

    //glColor3f(0.9,0.7,0.2);

    glColor3f(0.5,0.8,0.9);

    glBegin(GL_POLYGON);
    glVertex2d( -6.4,-12);
    glVertex2d(-15,-12);
    glVertex2d(-12,-6);
    glVertex2d(-5.9,-6);
    glEnd();
    //

    //glColor3f(0.6,0.5,0.6);
    glColor3f(0.3,0.5,0.6);
    glRectf(-6,-6,-12,-4);

    //window
    glColor3f(0.3,1,0.8);
    glRectf(-7,-19,-10,-16);

// lamp 3

    glColor3f(0,0,0);

    glRectf(-17,-23,-16,-5);
    glRectf(-12,-9,-21,-9.5);

    glRectf(-12.5,-9,-12,-7);
    glRectf(-21,-9,-20.5,-7);


    glColor3f(1,1,0.2);
    circle(1.6,2,-16.5,-5);

    glColor3f(1,1,0.7);

    circle(1,1,-12.25,-7);
    circle(1,1,-20.75,-7);

//lamp 2

    glColor3f(0,0,0);

    glRectf(-40,-23,-41,-5);
    glRectf(-36,-9,-45,-9.5);

    glRectf(-36.5,-9,-36,-7);
    glRectf(-45,-9,-44.5,-7);


    glColor3f(1,1,0.2);
    circle(1.6,2,-40.5,-5);

    glColor3f(1,1,0.7);

    circle(1,1,-36.25,-7);
    circle(1,1,-44.75,-7);

//lamp 1

    glColor3f(0,0,0);

    glRectf(-63,-23,-64,-5);
    glRectf(-59,-9,-68,-9.5);

    glRectf(-59.5,-9,-59,-7);
    glRectf(-68,-9,-68.5,-7);


    glColor3f(1,1,0.2);
    circle(1.6,2,-63.5,-5);

    glColor3f(1,1,0.7);

    circle(1,1,-59.25,-7);
    circle(1,1,-67.75,-7);


// gls-1

//lamp 2

    glColor3f(0,0,0);

    glRectf(31,-23,32,-5);
    glRectf(27,-9,36,-9.5);

    glRectf(27.5,-9,27,-7);
    glRectf(36,-9,35.5,-7);


    glColor3f(0.5,0.6,0.6);
    circle(1.6,2,31.5,-5);
    circle(1,1,27.25,-7);
    circle(1,1,35.75,-7);

//lamp 1

    glColor3f(0,0,0);

    glRectf(63,-23,64,-5);
    glRectf(59,-9,68,-9.5);

    glRectf(59.5,-9,59,-7);
    glRectf(68,-9,67.5,-7);


    glColor3f(0.5,0.6,0.6);
    circle(1.6,2,63.5,-5);
    circle(1,1,59.25,-7);
    circle(1,1,67.75,-7);


//Car


    glColor3f(0.8,0.4,0.6);
    glRectf(r+1,-15,r+22,-13.5);

    glColor3f(0.8,0.4,0.6);
    glRectf(r+1,-28,r+22,-15);
    glRectf(r+22,-28,r+21,-23);
    glRectf(r+22,-28,r+23,-23);


    glColor3f(0,0.3,0.4);
    circle(2.5,-3,r+6,-28);
    circle(2.5,-3,r+18,-28);

    glColor3f(0.9,0.9,0.8);
    circle(1.5,-2,r+18,-28);
    circle(1.5,-2,r+6,-28);


    glColor3f(0,0.3,0.4);
    glBegin(GL_POLYGON);
    glVertex2d(r+2,-23);
    glVertex2d(r+23,-23);
    glVertex2d(r+22,-15);
    glVertex2d(r+2,-15);
    glEnd();

    glColor3f(0.8,0.4,0.6);

    glRectf(r+6,-23,r+6.5,-15);
    glRectf(r+10,-23,r+10.5,-15);
    glRectf(r+14,-23,r+14.5,-15);
    glRectf(r+18,-23,r+18.5,-15);


    glColor3f(0.6,0.7,1);
   // glColor3f(0.8,0.6,0.7);

    glBegin(GL_POLYGON);
    glVertex2d(-8,-32);
    glVertex2d(8,-32);
    glVertex2d(6,-5);
    glVertex2d(-6,-5);
    glEnd();


    if(r<=48)
        r=r+0.045;

    else
        r=-72;

    glutPostRedisplay();


    //plane

    glColor3f(0,0.3,0.4);

    circle(8,1,s-71,24);
    circle(7.5,1,s-73,25.2);


    glBegin(GL_POLYGON);
    glVertex2d(s-71,24);
    glVertex2d(s-68,24);
    glVertex2d(s-74,18);
    glVertex2d(s-74.4,18);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(s-71.5,25);
    glVertex2d(s-69,25);
    glVertex2d(s-75,30);
    glVertex2d(s-75.4,30);
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2d(s-78,25);
    glVertex2d(s-76,25);
    glVertex2d(s-77,28);
    glVertex2d(s-78,28.5);
    glEnd();

    if(s<=137)
        s=s+0.05;

    else
        s=7;

    glutPostRedisplay();

//// cover white stick

    glColor3f(0.6,0.7,1);
      //glColor3f(0.8,0.6,0.7);

    glBegin(GL_POLYGON);
    glVertex2d(-4.3,18);
    glVertex2d(4.3,18);
    glVertex2d(4,21);
    glVertex2d(-4,21);

    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2d(-4,21);
    glVertex2d(4,21);
    glVertex2d(6,32);
    glVertex2d(-6,32);
    glEnd();
    ////////////
    glFlush();


}

void wlcmDisplay(void){

glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.75,0.6,0.7);
glRectf(-100,-100,100,100);

glColor3f(1,1,1);
glRectf(-60,-60,60,60);

glColor3f(0,0,0);
glRectf(-50,-50,50,50);

glColor3f(1,1,1);
glRectf(-17,35,17,42);

glColor3f(0,0,0);
glRasterPos3f(-14,37,0);

char txt1[]="Welcome to the Project";

for(int a=0;a<strlen(txt1);a++ )
    {
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,txt1[a]);

}
glColor3f(1,1,1);
glRasterPos3f(-20,22,0);

char txt2[]="Project Name: ";
for(int b=0;b<strlen(txt2);b++ ){
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24 ,txt2[b]);

}
glColor3f(1,0,0);
glRasterPos3f(-1,22,0);

char txt3[]="Reflecting Mode ";
for(int c=0;c<strlen(txt3);c++ ){
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24 ,txt3[c]);

}
glColor3f(1,1,1);
glRasterPos3f(-19,12,0);

char txt4[]="Submitted By : Nusrat Jahan Marjana";
for(int c=0;c<strlen(txt4);c++ ){
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18 ,txt4[c]);

}
glColor3f(1,1,1);
glRasterPos3f(-10,6,0);

char txt5[]="ID: 191-15-12999 ";
for(int c=0;c<strlen(txt5);c++ ){
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18 ,txt5[c]);

}

glColor3f(1,1,1);
glRasterPos3f(-5,0,0);

char txt6[]="Sec: J";
for(int c=0;c<strlen(txt6);c++ ){
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18 ,txt6[c]);

}

glColor3f(1,1,1);
glRasterPos3f(-16,-25,0);

char txt7[]="Press X to see the project";
for(int c=0;c<strlen(txt7);c++ ){
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15 ,txt7[c]);

}
glFlush();

}



void myDisplay(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    Glass();
    Cld1();
    Cld2();
    roads();
    Elements();
    star();
    glFlush();

}


void snd1 (void) {

      sndPlaySound("C:\\Users\\Gigabyte\\Desktop\\CG Lab\\Reflecting_mode\\3.wav",SND_ASYNC);

};


void snd2(void) {

      sndPlaySound("C:\\Users\\Gigabyte\\Desktop\\CG Lab\\Reflecting_mode\\4.wav",SND_ASYNC);

};

void my_keyboard(unsigned char key,int x,int y )
{
    if((key=='X')||(key=='x'))
    {
        glutDisplayFunc(myDisplay);
        snd1();
    }

    glutPostRedisplay();
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1600,1600);
    glutInitWindowPosition(150, 0);
    glutCreateWindow("Reflecting Mode");
    init();
    glutDisplayFunc(wlcmDisplay);
    //glutDisplayFunc(myDisplay);
    glutKeyboardFunc(my_keyboard);
    snd2();
    glutMainLoop();
    return 0;
}
