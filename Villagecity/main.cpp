#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;

float _moveA = 0.0f;
float _moveB = 0.0f;
float _moveC = 0.0f;
float _angle1 = 0.5f;
float speed = 0.02f;
///*****************************
void sun(){
    glPushMatrix();
    glColor3d(255,210,0);
    glTranslatef(30.0, 7.0, 0);
    glutSolidSphere(1.0, 250, 250);
    glPopMatrix();
}
void Moon()
{

    glPushMatrix();


       glPointSize(2.0);
       glColor3ub(255,255,255);

       glBegin(GL_POINTS);

        glVertex2f(1,4);
        glVertex2f(2,7.5);
        glVertex2f(4,5);
        glVertex2f(-2,8);
        glVertex2f(30,5);
        glVertex2f(-1,9);
        glVertex2f(35,7);
        glVertex2f(-3,7);
        glVertex2f(-7,5);
        glVertex2f(10,7.5);
        glVertex2f(12,8.5);
        glVertex2f(-11,6);
        glVertex2f(37,7.5);
        glVertex2f(-10,4.5);
        glVertex2f(13,7);
        glVertex2f(14,7.5);
        glVertex2f(18,10);
       glVertex2f(-10,4.5);

       glEnd();



    glPopMatrix();


///moon///
    //1st circle for moon

     glPushMatrix();
     glColor3ub(217,217,217);
     glTranslatef(-8.0,7.0, 0);
     glutSolidSphere(1, 250, 250);
     glPopMatrix();

   //2nd circle for moon

     glPushMatrix();
     glColor3ub(0,0,0);
     glTranslatef(-8,7.25, 0);
     glutSolidSphere(1, 250, 250);
     glPopMatrix();


}
void sky()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(135,206,250);
    glVertex2f(38.0f,0.0f);
    glVertex2f(38.0f,14.0f);
    glVertex2f(-12.0f,14.0f);
    glVertex2f(-12.0f,0.0f);

    glEnd();
}
void Nightsky()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(38.0f,0.0f);
    glVertex2f(38.0f,14.0f);
    glVertex2f(-12.0f,14.0f);
    glVertex2f(-12.0f,0.0f);

    glEnd();
}
void Windmill()
{
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(192,192,192);
    //glColor3ub(0,206,209);

    glVertex2f(27.2f,-3.0f);
    glVertex2f(26.9f,-8.0f);
    glVertex2f(27.2f,-8.2f);
    glVertex2f(28.1f,-8.0f);
    glVertex2f(27.8f,-3.0f);
    glVertex2f(27.5f,-2.0f);
    glEnd();

     //circle//
    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(27.5f,-2.0f,0.0f);
    glutSolidSphere(0.4,150,150);
	glRotatef(-_angle1, 0.0f, 0.0f,1.0f);


    glBegin(GL_QUADS);// first stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.0f,0.0f);
    glVertex2f(3.0f,0.0f);
    glVertex2f(3.0f,0.25f);
    glVertex2f(0.0f,0.25f);
    glEnd();

    glBegin(GL_QUADS);// second stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,3.0f);
    glVertex2f(-0.25f,3.0f);
    glVertex2f(-0.25f,0.0f);
    glEnd();

    glBegin(GL_QUADS);// third stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.0f,-0.25f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-3.0f,0.0f);
    glVertex2f(-3.0f,-0.25f);
    glEnd();

    glBegin(GL_QUADS);// fourth stand to hold the blade
    glColor3ub(255,255,0);
    glVertex2f(0.25f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-3.0f);
    glVertex2f(0.25f,-3.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// first triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(0.25f,0.0f);
    glVertex2f(3.0f,-1.5f);
    glVertex2f(3.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// second triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(0.0f,0.025f);
    glVertex2f(1.5f,3.0f);
    glVertex2f(0.0f,3.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// third triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(-0.25f,0.0f);
    glVertex2f(-3.0f,1.5f);
    glVertex2f(-3.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// fourth triangular blade to hold the blade
    glColor3ub(128,0,0);
    glVertex2f(0.0f,-0.025f);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(0.0f,-3.0f);
    glEnd();

    glPopMatrix();

}
void Left_House()
{
    //polygon 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(139,69,19);
    glVertex2f(-2.7f,-3.2f);
    glVertex2f(-6.7f,-3.2f);
    glVertex2f(-5.0f,-6.0f);
    glVertex2f(-1.0f,-6.0f);

    glEnd();


//polygon 2
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(139,69,19);
    glVertex2f(-6.5f,-3.4f);
    glVertex2f(-6.7f,-3.2f);
    glVertex2f(-8.5f,-6.0f);
    glVertex2f(-8.0f,-6.0f);

    glEnd();

//polygon 3
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(205,133,63);
    glVertex2f(-6.5f,-3.4f);
    glVertex2f(-8.0f,-6.0f);
    glVertex2f(-8.0f,-7.5f);
    glVertex2f(-5.0f,-8.0f);
    glVertex2f(-5.0f,-6.0f);

    glEnd();

//polygon 4
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(128,135,32);
    glVertex2f(-6.0f,-7.0f);
    glVertex2f(-6.0f,-6.0f);
    glVertex2f(-7.0f,-6.0f);
    glVertex2f(-7.0f,-6.9f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-8.0f);
    glVertex2f(-8.0f,-7.5f);
    glVertex2f(-8.3f,-7.9f);
    glVertex2f(-5.0f,-8.5f);

    glEnd();

//polygon 6
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(184,134,11);
    glVertex2f(-1.5f,-8.0f);
    glVertex2f(-1.5f,-6.0f);
    glVertex2f(-5.0f,-6.0f);
    glVertex2f(-5.0f,-8.0f);

    glEnd();

//polygon 7
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-8.0f);
    glVertex2f(-5.0f,-8.5f);
    glVertex2f(-1.0f,-8.5f);
    glVertex2f(-1.5f,-8.0f);

    glEnd();


///door:left
//polygon a
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(-2.5f,-8.0f);
    glVertex2f(-2.5f,-6.2f);
    glVertex2f(-4.0f,-6.2f);
    glVertex2f(-4.0f,-8.0f);

    glEnd();

//polygon b
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(128,135,32);
    glVertex2f(-3.3f,-8.0f);
    glVertex2f(-3.3f,-6.4f);
    glVertex2f(-4.0f,-6.2f);
    glVertex2f(-4.0f,-8.0f);

    glEnd();

//polygon c
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(128,135,32);
    glVertex2f(-2.5f,-8.0f);
    glVertex2f(-2.5f,-6.2f);
    glVertex2f(-3.2f,-6.4f);
    glVertex2f(-3.2f,-8.0f);

    glEnd();
}
void Right_House()
{


//polygon1//
    glBegin(GL_POLYGON);

    //glColor3ub(25,25,112);
    glColor3ub(47,79,79);
    glVertex2f(35.3,-2.0);
    glVertex2f(31.5,-2.0);
    glVertex2f(33,-3.5);
    glVertex2f(37,-3.5);

    glEnd();

    //polygon2//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(31.5,-2.0);
    glVertex2f(30.5,-3.5);
    glVertex2f(30.5,-4.7);
    glVertex2f(33,-5.0);
    glVertex2f(33,-3.5);

    glEnd();
//polygon3//
    glBegin(GL_POLYGON);
      glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(31.5,-2.0);
    glVertex2f(31.8,-2.2);
    glVertex2f(30.5,-3.5);
    glVertex2f(29.9,-3.5);

    glEnd();



//polygon4//
   glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(32,-4.3);
    glVertex2f(32,-3.5);
   glVertex2f(31.3,-3.5);
    glVertex2f(31.3,-4.2);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
     glColor3ub(47,79,79);
    glVertex2f(33,-5);
    glVertex2f(30.5,-4.5);
    glVertex2f(30.2,-4.9);
    glVertex2f(33,-5.5);

    glEnd();

//polygon6//
   glBegin(GL_POLYGON);

   glColor3ub(205,133,63);
    glVertex2f(36.5,-5);
    glVertex2f(36.5,-3.5);
    glVertex2f(33,-3.5);
    glVertex2f(33,-5);

    glEnd();

//polygon7//
    glBegin(GL_POLYGON);
     glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(33,-5);
    glVertex2f(33,-5.5);
    glVertex2f(37,-5.5);
    glVertex2f(36.5,-5);

    glEnd();

    ///door:right///
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(35.2,-5);
    glVertex2f(35.2,-3.5);
    glVertex2f(34.2,-3.5);
    glVertex2f(34.2,-5);

    glEnd();

//polygon b//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(34.7,-5);
    glVertex2f(34.7,-3.8);
    glVertex2f(34.2,-3.5);
    glVertex2f(34.2,-5);

    glEnd();

//polygon c//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(35.2,-5);
    glVertex2f(35.2,-3.5);
    glVertex2f(34.8,-3.8);
    glVertex2f(34.8,-5);

    glEnd();
    //window door side
    glBegin(GL_POLYGON);
    glColor3ub(160,82,45);
    glVertex2f(36.2,-4.5);
    glVertex2f(36.2,-4.1);
    glVertex2f(35.5,-4.1);
    glVertex2f(35.5,-4.5);

    glEnd();

}
void Hill()
{
        ///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-12,3);
    glVertex2f(-11.5,4.5);
    glVertex2f(-7.5,4.5);
    glVertex2f(-7,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-11.5,4.5);
    glVertex2f(-11,5.5);
    glVertex2f(-8,5.5);
    glVertex2f(-7.5,4.5);
    //glVertex2f();
    glEnd();

//polygon3//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-11,5.5);
    glVertex2f(-10.5,6);
    glVertex2f(-8.5,6);
    glVertex2f(-8,5.5);
    //glVertex2f();
    glEnd();

//polygon4//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-10.5,6);
    glVertex2f(-10.3,6.2);
    glVertex2f(-8.7,6.2);
    glVertex2f(-8.5,6);
    //glVertex2f();
    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-10.3,6.2);
    glVertex2f(-10.2,6.3);
    glVertex2f(-8.8,6.3);
    glVertex2f(-8.7,6);
    //glVertex2f();
    glEnd();

///Hill 2///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-7,3);
    glVertex2f(-6.5,4);
    glVertex2f(-4.5,4);
    glVertex2f(-4,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-6.5,4);
    glVertex2f(-6,4.5);
    glVertex2f(-5,4.5);
    glVertex2f(-4.5,4);
    //glVertex2f();
    glEnd();

///Hill 3///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(255,100,0);
    glVertex2f(-4.5,3);
    glVertex2f(-4.3,3.5);
    glVertex2f(-3.5,4.5);
    glVertex2f(-1.5,4.5);
    glVertex2f(-1.0,4.0);
    glVertex2f(0,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-3.5,4.5);
    glVertex2f(-3,5);
    glVertex2f(-2,5);
    glVertex2f(-1.5,4.5);
    //glVertex2f();
    glEnd();

///Hill 4///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-1,3);
    glVertex2f(-0.5,6);
    glVertex2f(4.5,6);
    glVertex2f(5,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-0.5,6);
    glVertex2f(0,7);
    glVertex2f(4,7);
    glVertex2f(4.5,6);
    //glVertex2f();
    glEnd();

//polygon3//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(0,7);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(4,7);
    //glVertex2f();
    glEnd();
//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(2,8.3);
    glEnd();

///hill 5///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(255,100,0);
    glVertex2f(5,3);
    glVertex2f(5.5,4);
    glVertex2f(6.5,4);
    glVertex2f(7,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(5.5,4);
    glVertex2f(6.5,4);
    glVertex2f(6,4.5);
    glEnd();

///hill 6///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(7,3);
    glVertex2f(8,5);
    glVertex2f(13,5);
    glVertex2f(14,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(8,5);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(13,5);
    //glVertex2f();
    glEnd();
//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(10.5,6.5);
    glEnd();

///hill 7///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(14,3);
    glVertex2f(15,5);
    glVertex2f(20,5);
    glVertex2f(21,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(15,5);
    glVertex2f(16,6);
    glVertex2f(19,6);
    glVertex2f(20,5);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(16,6);
    glVertex2f(19,6);
    glVertex2f(17.5,6.5);
    glEnd();

///hill 8///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(255,100,0);
    glVertex2f(21,3);
    glVertex2f(22,5);
    glVertex2f(24,5);
    glVertex2f(25,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(22,5);
    glVertex2f(22.5,5.5);
    glVertex2f(23.5,5.5);
    glVertex2f(24,5);
    //glVertex2f();
    glEnd();

///hill 9///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(25,3);
    glVertex2f(25.5,4.5);
    glVertex2f(28.5,4.5);
    glVertex2f(29,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(25.5,4.5);
    glVertex2f(26,5);
    glVertex2f(28,5);
    glVertex2f(28.5,4.5);
    //glVertex2f();
    glEnd();

///hill 10///
//polygon4//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(29,3);
    glVertex2f(29.5,4);
    glVertex2f(30.5,4);
    glVertex2f(31,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(29.5,4);
    glVertex2f(30,4.5);
    glVertex2f(30.5,4);
    glEnd();

///hill 11///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(31,3);
    glVertex2f(31.5,4.5);
    glVertex2f(32.5,4.5);
    glVertex2f(33,3);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(31.5,4.5);
    glVertex2f(32.5,4.5);
    glVertex2f(32,5);
    glEnd();

///hill 12///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33,3);
    glVertex2f(33.5,4.5);
    glVertex2f(37.5,4.5);
    glVertex2f(38,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33.5,4.5);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(37.5,4.5);
    //glVertex2f();
    glEnd();

//triangle//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(35.5,5.5);
    glEnd();

    }
void School()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(102,204,0);
    glVertex2f(31.0f,-2.0f);
    glVertex2f(29.0f,0.0f);
    glVertex2f(35.0f,0.0f);
    glVertex2f(36.0f,-2.0f);
    glVertex2f(32.0f,-2.0f);
    glEnd();

    /*glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(5,139,55);
    glVertex2f(27.0f,-1.0f);
    glVertex2f(26.0f,0.0f);
    glVertex2f(29.0f,0.0f);
    glVertex2f(34.0f,-3.0f);
    glVertex2f(29.0f,-3.0f);
    glEnd();*/

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(192,192,192);
    glVertex2f(30.0f,2.0f);
    glVertex2f(30.0f,0.0f);
    glVertex2f(32.0f,0.0f);
    glVertex2f(32.0f,2.0f);
    glEnd();


    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(192,192,192);
    glVertex2f(32.0f,0.0f);
    glVertex2f(32.0f,2.0f);
    glVertex2f(35.0f,0.0f);
    glVertex2f(35.0f,-2.0f);
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(160,192,192);
    glVertex2f(35.0f,0.0f);
    glVertex2f(35.0f,-2.0f);
    glVertex2f(36.0f,-2.0f);
    glVertex2f(36.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(100,100,192);
    glVertex2f(36.0f,0.0f);
    glVertex2f(35.0f,0.0f);
    glVertex2f(32.0f,2.0f);
    glVertex2f(32.4f,2.1f);
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(100,100,192);
    glVertex2f(29.8f,2.1f);
    glVertex2f(30.0f,2.0f);
    glVertex2f(32.0f,2.0f);
    glVertex2f(32.4f,2.1f);
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(100,100,192);
    glVertex2f(30.0f,0.0f);
    glVertex2f(29.8f,0.0f);
    glVertex2f(29.8f,2.1f);
    glVertex2f(30.0f,2.0f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(30.0f,0.0f);
    glVertex2f(30.0f,2.0f);
    glVertex2f(30.0f,2.0f);
    glVertex2f(32.0f,2.0f);
    glVertex2f(32.0f,2.0f);
    glVertex2f(32.0f,0.0f);
    glVertex2f(32.0f,0.0f);
    glVertex2f(30.0f,0.0f);
    glEnd();

            glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(32.0f,0.0f);
    glVertex2f(32.0f,2.0f);
    glVertex2f(32.0f,2.0f);
    glVertex2f(35.0f,0.0f);
    glVertex2f(35.0f,0.0f);
    glVertex2f(35.0f,-2.0f);
    glVertex2f(35.0f,-2.0f);
    glVertex2f(32.0f,0.0f);
    glEnd();

    //windows
    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(34.7f,-1.05f);
    glVertex2f(34.7f,-1.39f);
    glVertex2f(34.5f,-1.2f);
    glVertex2f(34.5f,-0.85f);
    glEnd();

    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(34.7f,-0.25f);
    glVertex2f(34.7f,-0.59f);
    glVertex2f(34.5f,-0.4f);
    glVertex2f(34.5f,-0.05f);
    glEnd();
    //2222
    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(33.9f,0.20f);
    glVertex2f(33.9f,-0.09f);
    glVertex2f(33.7f,0.0f);
    glVertex2f(33.7f,0.35f);
    glEnd();

    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(33.9f,-0.45f);
    glVertex2f(33.9f,-0.79f);
    glVertex2f(33.7f,-0.6f);
    glVertex2f(33.7f,-0.25f);
    glEnd();

//3
    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(32.2f,1.05f);
    glVertex2f(32.2f,1.37f);
    glVertex2f(32.4f,1.2f);
    glVertex2f(32.4f,0.85f);
    glEnd();

    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(32.2f,0.40f);
    glVertex2f(32.2f,0.77f);
    glVertex2f(32.4f,0.55f);
    glVertex2f(32.4f,0.2f);
    glEnd();
//4
    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(32.9f,0.55f);
    glVertex2f(32.9f,0.87f);
    glVertex2f(33.1f,0.7f);
    glVertex2f(33.1f,0.35f);
    glEnd();

    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(32.9f,-0.05f);
    glVertex2f(32.9f,0.27f);
    glVertex2f(33.1f,0.1f);
    glVertex2f(33.1f,-0.25f);
    glEnd();

        glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(30.3f,1.2f);
    glVertex2f(30.3f,1.6f);
    glVertex2f(30.6f,1.6f);
    glVertex2f(30.6f,1.2f);
    glEnd();

        glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(31.3f,1.2f);
    glVertex2f(31.3f,1.6f);
    glVertex2f(31.6f,1.6f);
    glVertex2f(31.6f,1.2f);
    glEnd();

        glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(30.3f,0.4f);
    glVertex2f(30.3f,0.8f);
    glVertex2f(30.6f,0.8f);
    glVertex2f(30.6f,0.4f);
    glEnd();

        glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(31.3f,0.4f);
    glVertex2f(31.3f,0.8f);
    glVertex2f(31.6f,0.8f);
    glVertex2f(31.6f,0.4f);
    glEnd();
}
void Cloud1()
{
     glPushMatrix();
    glTranslatef(_moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7,250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();

}
void Cloud2()
{
     glPushMatrix();

    glTranslatef(_moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

     glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(14.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(17.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPopMatrix();

}
void Cloud3()
{
    glPushMatrix();

    glTranslatef(_moveC,0.0f,0.0f);

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(24.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(21.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPopMatrix();

}
void CloudN1()
{
     glPushMatrix();
    glTranslatef(_moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7,250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();

}
void CloudN2()
{
     glPushMatrix();

    glTranslatef(_moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(15.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

     glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(15.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(16.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(16.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(14.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(17.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPopMatrix();

}
void CloudN3()
{
    glPushMatrix();

    glTranslatef(_moveC,0.0f,0.0f);

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(22.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(22.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(23.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(23.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(24.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(105,105,105);
    glTranslatef(21.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPopMatrix();

}
void Sea()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(65,105,225);
    glVertex2f(38.0f,-19.0f);
    glVertex2f(38.0f,1.0f);
    glVertex2f(-12.0f,1.0f);
    glVertex2f(-12.0f,-19.0f);
    glEnd();
}
void SeaN()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(21,21,104);
    glVertex2f(38.0f,-19.0f);
    glVertex2f(38.0f,1.0f);
    glVertex2f(-12.0f,1.0f);
    glVertex2f(-12.0f,-19.0f);
    glEnd();
}
void LeftSide()
{
    //polygon 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,128,0);
    glVertex2f(4.0f,0.0f);
    glVertex2f(6.0f,1.0f);
    glVertex2f(3.0f,1.0f);
    glVertex2f(-12.0f,1.0f);
    glVertex2f(-12.0f,0.0f);

    glEnd();

//polygon 2
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,128,0);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(-12.0f,0.0f);
    glVertex2f(-12.0f,-3.0f);

    glEnd();

//polygon 3
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,128,0);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(-12.0f,-3.0f);
    glVertex2f(-12.0f,-4.5f);

    glEnd();

//polygon 4
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,128,0);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(-12.0f,-4.5f);
    glVertex2f(-12.0f,-9.5f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,128,0);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(-12.0f,-9.0f);
    glVertex2f(-12.0f,-11.5f);

    glEnd();

///left sidewise border partition///
 //polygon 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(6.0f,0.5f);
    glVertex2f(6.0f,1.0f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(4.5f,-0.25f);

    glEnd();

 //polygon 2
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(7.0f,-2.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(5.5f,-3.15f);

    glEnd();

//polygon 3
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(8.0f,-4.4f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(6.3f,-4.8f);

    glEnd();

//polygon 4
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(9.5f,-7.5f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(3.0f,-9.3f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(5.0f,-10.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(2.0f,-12.0f);

    glEnd();

//polygon 6
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(2.0f,-12.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(-12.0f,-11.5f);
    glVertex2f(-12.0f,-12.0f);

    glEnd();



}
void RightSide()
{
    //polygon1//


//polygon2//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(16,1);
    glVertex2f(14,0);
    glVertex2f(17,-1.5);
    glVertex2f(38,-1.5);
    glVertex2f(38,1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(17,-1.5);
    glVertex2f(15,-3);
    glVertex2f(18,-4);
    glVertex2f(38,-4);
    glVertex2f(38,-1.5);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(18,-4);
    glVertex2f(16,-4.5);
    glVertex2f(21,-7);
    glVertex2f(38,-7);
    glVertex2f(38,-4);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(21,-7);
    glVertex2f(19,-8);
    glVertex2f(22,-9);
    glVertex2f(38,-9);
    glVertex2f(38,-7);

    glEnd();

///right sidewise border partition///

//polygon1//


//polygon2//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(14,-0.5);
    glVertex2f(16.4,-1.9);
    glVertex2f(17,-1.5);
    glVertex2f(14,0);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(15,-3.5);
    glVertex2f(17,-4.2);
    glVertex2f(18,-4);
    glVertex2f(15,-3);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(16,-5);
    glVertex2f(20.5,-7.2);
    glVertex2f(21,-7);
    glVertex2f(16,-4.5);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(19,-8.5);
    glVertex2f(22,-9.5);
    glVertex2f(22,-9);
    glVertex2f(19,-8);

    glEnd();

//polygon6//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(38,-9);
    glVertex2f(22,-9);
    glVertex2f(22,-9.5);
    glVertex2f(38,-9.5);
    glEnd();
}

void LeftSideN()
{
    //polygon 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,81,0);
    glVertex2f(4.0f,0.0f);
    glVertex2f(6.0f,1.0f);
    glVertex2f(3.0f,1.0f);
    glVertex2f(-12.0f,1.0f);
    glVertex2f(-12.0f,0.0f);

    glEnd();

//polygon 2
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,81,0);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(-12.0f,0.0f);
    glVertex2f(-12.0f,-3.0f);

    glEnd();

//polygon 3
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,81,0);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(-12.0f,-3.0f);
    glVertex2f(-12.0f,-4.5f);

    glEnd();

//polygon 4
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,81,0);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(-12.0f,-4.5f);
    glVertex2f(-12.0f,-9.5f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,81,0);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(-12.0f,-9.0f);
    glVertex2f(-12.0f,-11.5f);

    glEnd();

///left sidewise border partition///
 //polygon 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(6.0f,0.5f);
    glVertex2f(6.0f,1.0f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(4.5f,-0.25f);

    glEnd();

 //polygon 2
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(7.0f,-2.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(5.5f,-3.15f);

    glEnd();

//polygon 3
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(8.0f,-4.4f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(6.3f,-4.8f);

    glEnd();

//polygon 4
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(9.5f,-7.5f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(3.0f,-9.3f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(5.0f,-10.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(2.0f,-12.0f);

    glEnd();

//polygon 6
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(2.0f,-12.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(-12.0f,-11.5f);
    glVertex2f(-12.0f,-12.0f);

    glEnd();



}
void RightSideN()
{
    //polygon1//


//polygon2//
    glBegin(GL_POLYGON);

    glColor3ub(0,81,0);
    glVertex2f(16,1);
    glVertex2f(14,0);
    glVertex2f(17,-1.5);
    glVertex2f(38,-1.5);
    glVertex2f(38,1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(0,81,0);
    glVertex2f(17,-1.5);
    glVertex2f(15,-3);
    glVertex2f(18,-4);
    glVertex2f(38,-4);
    glVertex2f(38,-1.5);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(0,81,0);
    glVertex2f(18,-4);
    glVertex2f(16,-4.5);
    glVertex2f(21,-7);
    glVertex2f(38,-7);
    glVertex2f(38,-4);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);

    glColor3ub(0,81,0);
    glVertex2f(21,-7);
    glVertex2f(19,-8);
    glVertex2f(22,-9);
    glVertex2f(38,-9);
    glVertex2f(38,-7);

    glEnd();

///right sidewise border partition///

//polygon1//


//polygon2//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(14,-0.5);
    glVertex2f(16.4,-1.9);
    glVertex2f(17,-1.5);
    glVertex2f(14,0);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(15,-3.5);
    glVertex2f(17,-4.2);
    glVertex2f(18,-4);
    glVertex2f(15,-3);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(16,-5);
    glVertex2f(20.5,-7.2);
    glVertex2f(21,-7);
    glVertex2f(16,-4.5);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(19,-8.5);
    glVertex2f(22,-9.5);
    glVertex2f(22,-9);
    glVertex2f(19,-8);

    glEnd();

//polygon6//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(38,-9);
    glVertex2f(22,-9);
    glVertex2f(22,-9.5);
    glVertex2f(38,-9.5);

    glEnd();


}

void Straw()
{
    //polygon 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(189,183,107);
    glVertex2f(2.5f,-8.0f);
    glVertex2f(2.0f,-6.0f);
    glVertex2f(-3.0f,-6.0f);
    glVertex2f(-3.5f,-8.0f);

    glEnd();

 //polygon 2
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(189,183,107);
    glVertex2f(2.0f,-6.0f);
    glVertex2f(1.0f,-4.5f);
    glVertex2f(-2.0f,-4.5f);
    glVertex2f(-3.0f,-6.0f);

    glEnd();
//polygon 3
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(189,183,107);
    glVertex2f(1.0f,-4.5f);
    glVertex2f(0.0f,-3.2f);
    glVertex2f(-1.0f,-3.2f);
    glVertex2f(-2.0f,-4.5f);

    glEnd();

///triangle///

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(189,183,107);
    glVertex2f(0.0f,-3.2f);
    glVertex2f(-0.5f,-3.0f);
    glVertex2f(-1.0f,-3.2f);

    glEnd();

//polygon

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(189,183,107);
    glVertex2f(-0.4f,-3.1f);
    glVertex2f(-0.4f,-2.8f);
    glVertex2f(-0.6f,-2.8f);
    glVertex2f(-0.6f,-3.1f);

    glEnd();
}
void Tree()
{
       //polygon 1
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

//polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();

//polygon 4
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-8.5,-3);
    glVertex2f(-9.5,-3);
    glVertex2f(-10.5,-3.5);
    glVertex2f(-7.5,-3.5);
    glEnd();



//triangle 1
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-10,-0.5);
    glVertex2f(-9.5,-1);
    glVertex2f(-9.5,-0.6);
    glEnd();

//triangle 2
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();
    ///tree upper side///

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-9.5, 3.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,215,50);
    glTranslatef(-7.5, 1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,250,50);
    glTranslatef(-7.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.5, 3.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,250,50);
    glTranslatef(-10.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-9.0, 5.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();


}
void Boat1()
{
    ///boat-1 motion left to right
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveA, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(1.0f, -14.0f);
        glVertex2f(1.50f, -13.0f);
        glVertex2f(-2.0f, -13.0f);
        glVertex2f(-3.0f, -14.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
        glVertex2f(2.0f, -14.5f);
        glVertex2f(2.0f, -14.0f);
        glVertex2f(-3.0f, -14.0f);
        glVertex2f(-3.0f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(-3.0f, -14.5f);
        glVertex2f(-3.0f, -14.0f);
        glVertex2f(-4.5f, -13.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(2.0f, -14.5f);
        glVertex2f(3.5f, -13.7f);
        glVertex2f(2.0f, -14.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(2.0f, -14.0f);
        glVertex2f(1.5f, -13.0f);
        glVertex2f(1.0f, -14.0f);

    glEnd();

    glPopMatrix();


}
void Boat2()
{
     glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(22.0f, -17.5f);
        glVertex2f(21.0f, -16.5f);
        glVertex2f(17.50f, -16.5f);
        glVertex2f(18.0f, -17.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
        glVertex2f(22.0f, -18.0f);
        glVertex2f(22.0f, -17.5f);
        glVertex2f(17.0f, -17.5f);
        glVertex2f(17.0f, -18.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,99,71);
        glVertex2f(20.5f, -16.5f);
        glVertex2f(21.0f, -14.5f);
        glVertex2f(18.5f, -14.5f);
        glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(19.8f, -14.5f);
        glVertex2f(19.8f, -14.0f);
        glVertex2f(19.7f, -14.0f);
        glVertex2f(19.7f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(17.0f, -18.0f);
        glVertex2f(17.0f, -17.5f);
        glVertex2f(15.5f, -17.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(22.0f, -17.5f);
        glVertex2f(22.0f, -18.0f);
        glVertex2f(23.5f, -17.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(17.0f, -17.5f);
        glVertex2f(18.0f, -17.5f);
        glVertex2f(17.5f, -16.5f);

    glEnd();

    glPopMatrix();

}
void Boat3()
{
    //polygon-1//
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(8,-2.5);
    glVertex2f(10.5,-2.5);
    glVertex2f(10.5,-2.2);
    glVertex2f(8,-2.2);
    glEnd();

//triangle-1//
    glBegin(GL_TRIANGLES);
    glColor3f(0,0,0);
    glVertex2f(8,-2.2);
    glVertex2f(7,-2);
    glVertex2f(8,-2.5);
    glEnd();

//triangle-2//
    glBegin(GL_TRIANGLES);
    glColor3f(0,0,0);
    glVertex2f(11.5,-2);
    glVertex2f(10.5,-2.2);
    glVertex2f(10.5,-2.5);
    glEnd();
}
void DirtRoad()
{
    glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(-12.0,-3.2);
    glVertex2f(-12.0,-2.0);
    glVertex2f(-6.0,-1.3);
    glVertex2f(-6.0,-2.5);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(-6.0,-2.5);
    glVertex2f(-6.0,-1.3);
    glVertex2f(-5.9,-1.2);
    glVertex2f(-5.8,-1.5);
    glVertex2f(-5.7,-1.3);
    glVertex2f(-5.6,-1.5);
    glVertex2f(-5.5,-1.7);

    glEnd();


        glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(-5.5,-1.3);
    glVertex2f(-1.0,-2.3);
    glVertex2f(-1.0,-3.2);
    glVertex2f(-6.0,-2.4);
    glEnd();

            glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(6.0,-2.3);
    glVertex2f(-1.0,-2.3);
    glVertex2f(-1.0,-3.2);
    glVertex2f(5.3,-2.9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(16.0,-2.2);
    glVertex2f(23,-2.6);
    glVertex2f(23.0,-3.1);
    glVertex2f(15.3,-2.6);
    glEnd();
    ///To School
    glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(29.5,-0.2);
    glVertex2f(23,-2.6);
    glVertex2f(23.0,-3.1);
    glVertex2f(29.3,-0.5);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(36.0,-2.2);
    glVertex2f(23,-2.6);
    glVertex2f(23.0,-3.1);
    glVertex2f(35.3,-2.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(36.0,-2.2);
    glVertex2f(40,-2.6);
    glVertex2f(40.0,-3.1);
    glVertex2f(35.3,-2.6);
    glEnd();
}
void Road()
{
        glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-12.0,-3.2);
    glVertex2f(-12.0,-2.0);
    glVertex2f(6.0,-2.0);
    glVertex2f(5.5,-3.2);
    glEnd();

            glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(16.0,-3.2);
    glVertex2f(16.0,-2.0);
    glVertex2f(38.0,-2.0);
    glVertex2f(38.5,-3.2);
    glEnd();
///White line
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(36.0,-2.7);
    glVertex2f(36.0,-2.5);
    glVertex2f(37.0,-2.5);
    glVertex2f(37.0,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(33.5,-2.7);
    glVertex2f(33.5,-2.5);
    glVertex2f(34.5,-2.5);
    glVertex2f(34.5,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(31.0,-2.7);
    glVertex2f(31.0,-2.5);
    glVertex2f(32.0,-2.5);
    glVertex2f(32.0,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(28.5,-2.7);
    glVertex2f(28.5,-2.5);
    glVertex2f(29.5,-2.5);
    glVertex2f(29.5,-2.7);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(26.0,-2.7);
    glVertex2f(26.0,-2.5);
    glVertex2f(27.0,-2.5);
    glVertex2f(27.0,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(23.5,-2.7);
    glVertex2f(23.5,-2.5);
    glVertex2f(24.5,-2.5);
    glVertex2f(24.5,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(21.0,-2.7);
    glVertex2f(21.0,-2.5);
    glVertex2f(22.0,-2.5);
    glVertex2f(22.0,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(18.5,-2.7);
    glVertex2f(18.5,-2.5);
    glVertex2f(19.5,-2.5);
    glVertex2f(19.5,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(16.0,-2.7);
    glVertex2f(16.0,-2.5);
    glVertex2f(17.0,-2.5);
    glVertex2f(17.0,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(6.0,-2.7);
    glVertex2f(6.0,-2.5);
    glVertex2f(5.0,-2.5);
    glVertex2f(5.0,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(3.5,-2.7);
    glVertex2f(3.5,-2.5);
    glVertex2f(2.5,-2.5);
    glVertex2f(2.5,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(1.0,-2.7);
    glVertex2f(1.0,-2.5);
    glVertex2f(0.0,-2.5);
    glVertex2f(0.0,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-1.5,-2.7);
    glVertex2f(-1.5,-2.5);
    glVertex2f(-2.5,-2.5);
    glVertex2f(-2.5,-2.7);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-4.0,-2.7);
    glVertex2f(-4.0,-2.5);
    glVertex2f(-5.0,-2.5);
    glVertex2f(-5.0,-2.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-6.5,-2.7);
    glVertex2f(-6.5,-2.5);
    glVertex2f(-7.5,-2.5);
    glVertex2f(-7.5,-2.7);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-9.0,-2.7);
    glVertex2f(-9.0,-2.5);
    glVertex2f(-10.0,-2.5);
    glVertex2f(-10.0,-2.7);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-11.5,-2.7);
    glVertex2f(-11.5,-2.5);
    glVertex2f(-12.5,-2.5);
    glVertex2f(-12.5,-2.7);
    glEnd();
        glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-14.0,-2.7);
    glVertex2f(-14.0,-2.5);
    glVertex2f(-15.0,-2.5);
    glVertex2f(-15.0,-2.7);
    glEnd();

    ///Bridge
    //left
    glBegin(GL_QUADS);
    glColor3ub(100,0,0);
    glVertex2f(5.5,-3.2);
    glVertex2f(6.0,-2.0);
    glVertex2f(8.5,-1.2);
    glVertex2f(8.4,-2);
    glEnd();
    //right
    glBegin(GL_QUADS);
    glColor3ub(100,0,0);
    glVertex2f(16.1,-3.2);
    glVertex2f(16.0,-2.0);
    glVertex2f(13.4,-1.2);
    glVertex2f(13.5,-2);
    glEnd();
    //middle
    glBegin(GL_QUADS);
    glColor3ub(100,0,0);
    glVertex2f(8.4,-2);
    glVertex2f(8.5,-1.2);
    glVertex2f(13.4,-1.2);
    glVertex2f(13.5,-2);
    glEnd();
    //Railing
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(5.5f,-3.2f);
    glVertex2f(5.5f,-2.4f);

    glColor3ub(255, 0, 0);
    glVertex2f(6.0f,-2.0f);
    glVertex2f(6.0f,-1.2f);


    glColor3ub(255, 255, 102);
    glVertex2f(8.4f,-2.0f);
    glVertex2f(8.4f,-1.2f);


    glColor3ub(255, 255, 102);
    glVertex2f(8.5f,-0.6f);
    glVertex2f(8.5f,-1.2f);

    glColor3ub(255, 255, 102);
    glVertex2f(16.1f,-3.2f);
    glVertex2f(16.1f,-2.4f);

    glColor3ub(255, 255, 102);
    glVertex2f(16.0f,-2.0f);
    glVertex2f(16.0f,-1.2f);


    glColor3ub(255, 255, 102);
    glVertex2f(13.4f,-1.2f);
    glVertex2f(13.4f,-0.6f);

    glColor3ub(255, 255, 102);
    glVertex2f(13.5f,-2.0f);
    glVertex2f(13.5f,-1.2f);

    glColor3ub(255,255,255);
    glVertex2f(5.5f,-2.7f);
    glVertex2f(8.4f,-1.5f);

    glColor3ub(255,255,255);
    glVertex2f(13.4f,-1.5f);
    glVertex2f(8.4f,-1.5f);

    glColor3ub(255,255,255);
    glVertex2f(13.4f,-1.5f);
    glVertex2f(16.1f,-2.7f);

    glColor3ub(255,255,255);
    glVertex2f(5.5f,-2.4f);
    glVertex2f(8.4f,-1.2f);

    glColor3ub(255,255,255);
    glVertex2f(13.4f,-1.2f);
    glVertex2f(8.4f,-1.2f);

    glColor3ub(255,255,255);
    glVertex2f(13.4f,-1.2f);
    glVertex2f(16.1f,-2.4f);

    glColor3ub(255,255,255);
    glVertex2f(6.0f,-1.2f);
    glVertex2f(8.5f,-0.6f);
    glColor3ub(255,255,255);
    glVertex2f(13.5f,-0.6f);
    glVertex2f(8.5f,-0.6f);
    glColor3ub(255,255,255);
    glVertex2f(16.0f,-1.2f);
    glVertex2f(13.5f,-0.6f);

    glColor3ub(255,255,255);
    glVertex2f(6.0f,-1.5f);
    glVertex2f(8.5f,-0.9f);
    glColor3ub(255,255,255);
    glVertex2f(13.5f,-0.9f);
    glVertex2f(8.5f,-0.9f);
    glColor3ub(255,255,255);
    glVertex2f(16.0f,-1.5f);
    glVertex2f(13.5f,-0.9f);

    glEnd();

}
void fence()
{
    glLineWidth(2);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(-15.0f,4.0f);
    glVertex2f(-20.0f,4.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-15.0f,3.5f);
    glVertex2f(-20.0f,3.5f);


    glColor3ub(255, 255, 102);
    glVertex2f(-15.0f,3.0f);
    glVertex2f(-20.0f,3.0f);


    glColor3ub(255, 255, 102);
    glVertex2f(-15.0f,2.5f);
    glVertex2f(-20.0f,2.5f);


    glColor3ub(255, 255, 102);
    glVertex2f(-15.0f,2.0f);
    glVertex2f(-20.0f,2.0f);


    glColor3ub(255, 255, 102);
    glVertex2f(-15.0f,1.5f);
    glVertex2f(-20.0f,1.5f);


    glColor3ub(255, 255, 102);
    glVertex2f(-15.0f,1.0f);
    glVertex2f(-20.0f,1.0f);


    glColor3ub(255, 255, 102);
    glVertex2f(-15.0f,0.5f);
    glVertex2f(-20.0f,0.5f);


    glColor3ub(255, 255, 102);
    glVertex2f(-15.5f,4.5f);
    glVertex2f(-15.5f,0.0f);


    glColor3ub(255, 255, 102);
    glVertex2f(-16.0f,4.5f);
    glVertex2f(-16.0f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-16.5f,4.5f);
    glVertex2f(-16.5f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-17.0f,4.5f);
    glVertex2f(-17.0f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-17.5f,4.5f);
    glVertex2f(-17.5f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-18.0f,4.5f);
    glVertex2f(-18.0f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-18.5f,4.5f);
    glVertex2f(-18.5f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-19.0f,4.5f);
    glVertex2f(-19.0f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-19.5f,4.5f);
    glVertex2f(-19.5f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.0f,4.0f);
    glVertex2f(-4.0f,4.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.0f,3.5f);
    glVertex2f(-4.0f,3.5f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.0f,3.0f);
    glVertex2f(-4.0f,3.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.0f,2.5f);
    glVertex2f(-4.0f,2.5f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.0f,2.0f);
    glVertex2f(-4.0f,2.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.0f,1.5f);
    glVertex2f(-4.0f,1.5f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.0f,1.0f);
    glVertex2f(-4.0f,1.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.0f,0.5f);
    glVertex2f(-4.0f,0.5f);


    glColor3ub(255, 255, 102);
    glVertex2f(-3.5f,4.5f);
    glVertex2f(-3.5f,0.0f);


    glColor3ub(255, 255, 102);
    glVertex2f(-3.0f,4.5f);
    glVertex2f(-3.0f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-2.5f,4.5f);
    glVertex2f(-2.5f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-2.0f,4.5f);
    glVertex2f(-2.0f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.5f,4.5f);
    glVertex2f(-1.5f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,4.5f);
    glVertex2f(-1.0f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.5f,4.5f);
    glVertex2f(-0.5f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(0.0f,4.5f);
    glVertex2f(0.0f,0.0f);

    glEnd();
}
void Factory1()
{
    glBegin(GL_POLYGON);
    glColor3ub(120,0,0);
    glVertex2f(16.0,1.2);
    glVertex2f(16.0,0.2);
    glVertex2f(18.0,0.2);
    glVertex2f(18,1.2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(15.8,0.4);
    glVertex2f(15.8,0.2);
    glVertex2f(18.2,0.2);
    glVertex2f(18.2,0.4);
    glEnd();
    //cimbi
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(17.6,1.2);
    glVertex2f(17.66,1.6);
    glVertex2f(17.62,1.65);
    glVertex2f(17.66,1.7);
    glVertex2f(17.86,1.7);
    glVertex2f(17.82,1.65);
    glVertex2f(17.86,1.6);
    glVertex2f(17.85,1.2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(17.7,1.7);
    glVertex2f(17.80,1.90);
    glVertex2f(17.90,2.0);
    glVertex2f(18.00,2.10);
    glVertex2f(18.10,2.16);
    glVertex2f(18.00,2.0);
    glVertex2f(17.90,1.90);
    glVertex2f(17.80,1.75);
    glVertex2f(17.7,1.7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(16.0,1.2);
    glVertex2f(16.4,1.2);
    glVertex2f(16.4,1.4);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(16.5,1.2);
    glVertex2f(16.9,1.2);
    glVertex2f(16.9,1.4);
    glEnd();

    ///window
    /*glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(15.9f,1.2f);
    glVertex2f(15.9f,1.4f);
    glVertex2f(15.7f,1.4f);
    glVertex2f(15.7f,1.2f);
    glEnd;*/


    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(16.5f,0.8f);
    glVertex2f(16.5f,1.0f);
    glVertex2f(16.3f,1.0f);
    glVertex2f(16.3f,0.8f);
    glEnd();

        glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(16.6f,0.8f);
    glVertex2f(16.6f,1.0f);
    glVertex2f(16.8f,1.0f);
    glVertex2f(16.8f,0.8f);
    glEnd();
    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(16.9f,0.8f);
    glVertex2f(16.9f,1.0f);
    glVertex2f(17.1f,1.0f);
    glVertex2f(17.1f,0.8f);
    glEnd();
    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(17.2f,0.8f);
    glVertex2f(17.2f,1.0f);
    glVertex2f(17.4f,1.0f);
    glVertex2f(17.4f,0.8f);
    glEnd();
    glBegin(GL_QUADS);//
    glColor3ub(255,255,255);
    glVertex2f(17.5f,0.8f);
    glVertex2f(17.5f,1.0f);
    glVertex2f(17.7f,1.0f);
    glVertex2f(17.7f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(16.5f,0.4f);
    glVertex2f(14.5f,0.2f);
    glVertex2f(14.5f,0.3f);
    glEnd();

}
void Factory2()
{
     glBegin(GL_POLYGON);
    glColor3ub(120,0,0);
    glVertex2f(20.3,-1.2);
    glVertex2f(20.3,-0.2);
    glVertex2f(18.3,0.2);
    glVertex2f(18.3,-1.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(19.5,-1.2);
    glVertex2f(19.5,0.6);
    glVertex2f(18.3,0.6);
    glVertex2f(18.3,-1.2);
    glEnd();
     glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(19.4,-1.2);
    glVertex2f(19.4,0.7);
    glVertex2f(18.4,0.7);
    glVertex2f(18.4,-1.2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(20.5,-1.2);
    glVertex2f(20.5,-1.3);
    glVertex2f(18.2,-1.3);
    glVertex2f(18.2,-1.2);
    glEnd();

    ///cimmi
     glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(19.8,-0.2);
    glVertex2f(19.86,0.6);
    glVertex2f(19.82,0.65);
    glVertex2f(19.86,0.7);
    glVertex2f(20.06,0.7);
    glVertex2f(20.02,0.65);
    glVertex2f(20.06,0.6);
    glVertex2f(20.05,-0.2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(19.8,0.7);
    glVertex2f(19.90,0.90);
    glVertex2f(19.95,1.0);
    glVertex2f(20.00,1.10);
    glVertex2f(20.10,1.16);
    glVertex2f(20.00,1.0);
    glVertex2f(19.90,0.90);
    glVertex2f(19.85,0.75);
    glVertex2f(19.8,0.7);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(18.5f,-1.3f);
    glVertex2f(16.5f,-1.8f);
    glVertex2f(16.5f,-1.6f);
    glEnd();

    ///window
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(19.3,0.5);
    glVertex2f(19.3,0.4);
    glVertex2f(18.5,0.4);
    glVertex2f(18.5,0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(19.3,0.3);
    glVertex2f(19.3,0.2);
    glVertex2f(18.5,0.2);
    glVertex2f(18.5,0.3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(19.3,0.1);
    glVertex2f(19.3,0.0);
    glVertex2f(18.5,0.0);
    glVertex2f(18.5,0.1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(19.3,-0.1);
    glVertex2f(19.3,-0.2);
    glVertex2f(18.5,-0.2);
    glVertex2f(18.5,-0.1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(19.3,-0.4);
    glVertex2f(19.3,-0.3);
    glVertex2f(18.5,-0.3);
    glVertex2f(18.5,-0.4);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(19.3,-0.5);
    glVertex2f(19.3,-0.6);
    glVertex2f(18.5,-0.6);
    glVertex2f(18.5,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(19.3,-0.7);
    glVertex2f(19.3,-0.8);
    glVertex2f(18.5,-0.8);
    glVertex2f(18.5,-0.7);
    glEnd();


}
void Factory_Road()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.9,-2.0);
    glVertex2f(21.7,0.8);
    glVertex2f(22.0,0.8);
    glVertex2f(22.3,-2.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(17.9,0.75);
    glVertex2f(17.7,0.7);
    glVertex2f(22.0,0.7);
    glVertex2f(22.0,0.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(19.9,-0.55);
    glVertex2f(19.7,-0.5);
    glVertex2f(22.0,-0.5);
    glVertex2f(22.0,-0.55);
    glEnd();
}
void Bulding1()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,256,94);
    glVertex2f(-10.3,2.65);
    glVertex2f(-11.6,2.55);
    glVertex2f(-11.6,-0.5);
    glVertex2f(-10.3,-0.5);
    glVertex2f(-10.0,-0.4);
    glVertex2f(-10.0,2.55);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(-10.3f,2.6f);
    glVertex2f(-10.3f,-0.5f);
    glEnd();
    //Windows
    //top_right
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-10.8,2.2);
    glVertex2f(-10.5,2.2);
    glVertex2f(-10.5,1.9);
    glVertex2f(-10.8,1.9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-11.1,2.2);
    glVertex2f(-11.4,2.2);
    glVertex2f(-11.4,1.9);
    glVertex2f(-11.1,1.9);
    glEnd();
    //middle
        glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-10.8,1.0);
    glVertex2f(-10.5,1.0);
    glVertex2f(-10.5,1.3);
    glVertex2f(-10.8,1.3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-11.1,1.0);
    glVertex2f(-11.4,1.0);
    glVertex2f(-11.4,1.3);
    glVertex2f(-11.1,1.3);
    glEnd();
    //bottom
            glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-10.8,0.4);
    glVertex2f(-10.5,0.4);
    glVertex2f(-10.5,0.1);
    glVertex2f(-10.8,0.1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-11.1,0.1);
    glVertex2f(-11.4,0.1);
    glVertex2f(-11.4,0.4);
    glVertex2f(-11.1,0.4);
    glEnd();


    ///Bulding2
        glBegin(GL_POLYGON);
    glColor3ub(51,0,102);
    glVertex2f(-8.7,2.1);
    glVertex2f(-9.7,2.0);
    glVertex2f(-9.7,0.0);
    glVertex2f(-8.7,0.0);
    glVertex2f(-8.5,0.1);
    glVertex2f(-8.5,2.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(-8.7,2.1);
    glVertex2f(-8.7,0.1);
    glEnd();
    //Windows
    //top_right
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-8.8,1.6);
    glVertex2f(-9.0,1.6);
    glVertex2f(-9.0,1.85);
    glVertex2f(-8.8,1.85);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-9.5,1.6);
    glVertex2f(-9.3,1.6);
    glVertex2f(-9.3,1.85);
    glVertex2f(-9.5,1.85);
    glEnd();
    //middle
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-8.8,1.25);
    glVertex2f(-9.0,1.25);
    glVertex2f(-9.0,1.0);
    glVertex2f(-8.8,1.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-9.5,1.25);
    glVertex2f(-9.3,1.25);
    glVertex2f(-9.3,1.0);
    glVertex2f(-9.5,1.0);
    glEnd();
    //bottom
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-8.8,0.38);
    glVertex2f(-9.0,0.38);
    glVertex2f(-9.0,0.63);
    glVertex2f(-8.8,0.63);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-9.5,0.38);
    glVertex2f(-9.3,0.38);
    glVertex2f(-9.3,0.63);
    glVertex2f(-9.5,0.63);
    glEnd();

    ///Building 3
        glBegin(GL_POLYGON);
    glColor3ub(204,102,100);
    glVertex2f(-7.7,1.7);
    glVertex2f(-8.3,1.6);
    glVertex2f(-8.3,0.4);
    glVertex2f(-7.7,0.4);
    glVertex2f(-7.6,0.5);
    glVertex2f(-7.6,1.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(-7.7,1.7);
    glVertex2f(-7.7,0.4);
    glEnd();
    //Windows
    //top_right
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-8.1,1.5);
    glVertex2f(-8.24,1.5);
    glVertex2f(-8.24,1.35);
    glVertex2f(-8.1,1.35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-7.8,1.5);
    glVertex2f(-7.94,1.5);
    glVertex2f(-7.94,1.35);
    glVertex2f(-7.8,1.35);
    glEnd();
    //middle
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-8.1,1.0);
    glVertex2f(-8.24,1.0);
    glVertex2f(-8.24,1.15);
    glVertex2f(-8.1,1.15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-7.8,1.0);
    glVertex2f(-7.94,1.0);
    glVertex2f(-7.94,1.15);
    glVertex2f(-7.8,1.15);
    glEnd();
    //bottom
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-8.1,0.8);
    glVertex2f(-8.24,0.8);
    glVertex2f(-8.24,0.65);
    glVertex2f(-8.1,0.65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-7.8,0.8);
    glVertex2f(-7.94,0.8);
    glVertex2f(-7.94,0.65);
    glVertex2f(-7.8,0.65);
    glEnd();
}
void Bulding2()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,51,102);
    glVertex2f(-4.8,2.6);
    glVertex2f(-6.1,2.5);
    glVertex2f(-6.1,-0.5);
    glVertex2f(-4.8,-0.5);
    glVertex2f(-4.5,-0.4);
    glVertex2f(-4.5,2.55);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(-4.8f,2.6f);
    glVertex2f(-4.8f,-0.5f);
    glEnd();
    //Windows
         //top_right
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-5.0,2.2);
    glVertex2f(-5.3,2.2);
    glVertex2f(-5.3,1.9);
    glVertex2f(-5.0,1.9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-5.6,2.2);
    glVertex2f(-5.9,2.2);
    glVertex2f(-5.9,1.9);
    glVertex2f(-5.6,1.9);
    glEnd();
    //middle
        glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-5.0,1.0);
    glVertex2f(-5.3,1.0);
    glVertex2f(-5.3,1.3);
    glVertex2f(-5.0,1.3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-5.6,1.0);
    glVertex2f(-5.9,1.0);
    glVertex2f(-5.9,1.3);
    glVertex2f(-5.6,1.3);
    glEnd();
    //bottom
            glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-5.0,0.4);
    glVertex2f(-5.3,0.4);
    glVertex2f(-5.3,0.1);
    glVertex2f(-5.0,0.1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-5.6,0.1);
    glVertex2f(-5.9,0.1);
    glVertex2f(-5.9,0.4);
    glVertex2f(-5.6,0.4);
    glEnd();



    ///Bulding2
    glBegin(GL_POLYGON);
    glColor3ub(51,0,102);
    glVertex2f(-3.3,2.1);
    glVertex2f(-4.3,2.0);
    glVertex2f(-4.3,0.0);
    glVertex2f(-3.3,0.0);
    glVertex2f(-3.1,0.1);
    glVertex2f(-3.1,2.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(-3.3,2.1);
    glVertex2f(-3.3,0.1);
    glEnd();
    //Windows

        //top_right
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-3.4,1.6);
    glVertex2f(-3.6,1.6);
    glVertex2f(-3.6,1.85);
    glVertex2f(-3.4,1.85);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-3.9,1.6);
    glVertex2f(-4.1,1.6);
    glVertex2f(-4.1,1.85);
    glVertex2f(-3.9,1.85);
    glEnd();
    //middle
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-3.4,1.25);
    glVertex2f(-3.6,1.25);
    glVertex2f(-3.6,1.0);
    glVertex2f(-3.4,1.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-3.9,1.25);
    glVertex2f(-4.1,1.25);
    glVertex2f(-4.1,1.0);
    glVertex2f(-3.9,1.0);
    glEnd();
    //bottom
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-3.4,0.38);
    glVertex2f(-3.6,0.38);
    glVertex2f(-3.6,0.63);
    glVertex2f(-3.4,0.63);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-3.9,0.38);
    glVertex2f(-4.1,0.38);
    glVertex2f(-4.1,0.63);
    glVertex2f(-3.9,0.63);
    glEnd();


    ///Building3
        glBegin(GL_POLYGON);
    glColor3ub(204,102,100);
    glVertex2f(-2.3,1.7);
    glVertex2f(-2.9,1.6);
    glVertex2f(-2.9,0.4);
    glVertex2f(-2.3,0.4);
    glVertex2f(-2.2,0.5);
    glVertex2f(-2.2,1.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(-2.3,1.7);
    glVertex2f(-2.3,0.4);
    glEnd();
    //Windows
    //top_right
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-2.7,1.5);
    glVertex2f(-2.84,1.5);
    glVertex2f(-2.84,1.35);
    glVertex2f(-2.7,1.35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-2.4,1.5);
    glVertex2f(-2.54,1.5);
    glVertex2f(-2.54,1.35);
    glVertex2f(-2.4,1.35);
    glEnd();
    //middle
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-2.7,1.0);
    glVertex2f(-2.84,1.0);
    glVertex2f(-2.84,1.15);
    glVertex2f(-2.7,1.15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-2.4,1.0);
    glVertex2f(-2.54,1.0);
    glVertex2f(-2.54,1.15);
    glVertex2f(-2.4,1.15);
    glEnd();
    //bottom
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-2.7,0.8);
    glVertex2f(-2.84,0.8);
    glVertex2f(-2.84,0.65);
    glVertex2f(-2.7,0.65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-2.4,0.8);
    glVertex2f(-2.54,0.8);
    glVertex2f(-2.54,0.65);
    glVertex2f(-2.4,0.65);
    glEnd();
}
void Bulding3()
{
    glBegin(GL_POLYGON);
    glColor3ub(204,102,0);
    glVertex2f(0.7,2.6);
    glVertex2f(-0.6,2.5);
    glVertex2f(-0.6,-0.5);
    glVertex2f(0.7,-0.5);
    glVertex2f(1.0,-0.4);
    glVertex2f(1.0,2.55);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(0.7f,2.6f);
    glVertex2f(0.7f,-0.5f);
    glEnd();
    //Windows
     //top_right
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.5,2.2);
    glVertex2f(0.2,2.2);
    glVertex2f(0.2,1.9);
    glVertex2f(0.5,1.9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.1,2.2);
    glVertex2f(-0.4,2.2);
    glVertex2f(-0.4,1.9);
    glVertex2f(-0.1,1.9);
    glEnd();
    //middle
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.5,1.0);
    glVertex2f(0.2,1.0);
    glVertex2f(0.2,1.3);
    glVertex2f(0.5,1.3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.1,1.0);
    glVertex2f(-0.4,1.0);
    glVertex2f(-0.4,1.3);
    glVertex2f(-0.1,1.3);
    glEnd();
    //bottom
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.5,0.4);
    glVertex2f(0.2,0.4);
    glVertex2f(0.2,0.1);
    glVertex2f(0.5,0.1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.1,0.1);
    glVertex2f(-0.4,0.1);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.1,0.4);
    glEnd();


    ///Building2
        glBegin(GL_POLYGON);
    glColor3ub(204,102,100);
    glVertex2f(1.9,2.1);
    glVertex2f(1.0,2.0);
    glVertex2f(1.0,0.0);
    glVertex2f(1.9,0.0);
    glVertex2f(2.1,0.1);
    glVertex2f(2.1,2.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(1.9,2.1);
    glVertex2f(1.9,0.1);
    glEnd();
    //Windows
    //top_right
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(1.6,1.6);
    glVertex2f(1.8,1.6);
    glVertex2f(1.8,1.85);
    glVertex2f(1.6,1.85);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(1.1,1.6);
    glVertex2f(1.3,1.6);
    glVertex2f(1.3,1.85);
    glVertex2f(1.1,1.85);
    glEnd();
    //middle
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(1.6,1.25);
    glVertex2f(1.8,1.25);
    glVertex2f(1.8,1.0);
    glVertex2f(1.6,1.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(1.3,1.25);
    glVertex2f(1.1,1.25);
    glVertex2f(1.1,1.0);
    glVertex2f(1.3,1.0);
    glEnd();
    //bottom
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(1.8,0.38);
    glVertex2f(1.6,0.38);
    glVertex2f(1.6,0.63);
    glVertex2f(1.8,0.63);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(1.3,0.38);
    glVertex2f(1.1,0.38);
    glVertex2f(1.1,0.63);
    glVertex2f(1.3,0.63);
    glEnd();


    ///Building3
        glBegin(GL_POLYGON);
    glColor3ub(204,102,100);
    glVertex2f(2.8,1.7);
    glVertex2f(2.2,1.6);
    glVertex2f(2.2,0.4);
    glVertex2f(2.8,0.4);
    glVertex2f(2.9,0.5);
    glVertex2f(2.9,1.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(2.8,1.7);
    glVertex2f(2.8,0.4);
    glEnd();
    //Windows
        //top_right
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(2.7,1.5);
    glVertex2f(2.56,1.5);
    glVertex2f(2.56,1.35);
    glVertex2f(2.7,1.35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(2.45,1.5);
    glVertex2f(2.3,1.5);
    glVertex2f(2.3,1.35);
    glVertex2f(2.45,1.35);
    glEnd();
    //middle
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(2.7,1.0);
    glVertex2f(2.56,1.0);
    glVertex2f(2.56,1.15);
    glVertex2f(2.7,1.15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(2.45,1.0);
    glVertex2f(2.3,1.0);
    glVertex2f(2.3,1.15);
    glVertex2f(2.45,1.15);
    glEnd();
    //bottom
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(2.7,0.8);
    glVertex2f(2.56,0.8);
    glVertex2f(2.56,0.65);
    glVertex2f(2.7,0.65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(2.45,0.8);
    glVertex2f(2.3,0.8);
    glVertex2f(2.3,0.65);
    glVertex2f(2.45,0.65);
    glEnd();
}
void BuldingRoad3()
{
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(0.3,-2.0);
    glVertex2f(4.2,0.7);
    glVertex2f(4.0,0.7);
    glVertex2f(-0.5,-2.0);
    glEnd();
        ///Building1
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(0.9,-0.35);
    glVertex2f(2.2,-0.35);
    glVertex2f(2.2,-0.4);
    glVertex2f(0.9,-0.4);
    glEnd();
    ///Building2
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(2.1,0.04);
    glVertex2f(3.0,0.04);
    glVertex2f(3.0,0.09);
    glVertex2f(2.1,0.09);
    glEnd();
                ///Building3
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(2.9,0.40);
    glVertex2f(3.6,0.40);
    glVertex2f(3.6,0.45);
    glVertex2f(2.9,0.45);
    glEnd();
}
void BuldingRoad2()
{
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(-6.8,-2.0);
    glVertex2f(-0.8,0.7);
    glVertex2f(-0.6,0.7);
    glVertex2f(-6.0,-2.0);
    glEnd();

    ///Building1
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(-4.5,-0.35);
    glVertex2f(-3.1,-0.35);
    glVertex2f(-3.2,-0.4);
    glVertex2f(-4.5,-0.4);
    glEnd();
        ///Building2
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(-2.1,0.04);
    glVertex2f(-3.3,0.04);
    glVertex2f(-3.3,0.09);
    glVertex2f(-2.1,0.09);
    glEnd();
                ///Building3
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(-1.4,0.40);
    glVertex2f(-2.2,0.40);
    glVertex2f(-2.2,0.45);
    glVertex2f(-1.4,0.45);
    glEnd();
}
void BuldingRoad1()
{
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(-12.8,-2.0);
    glVertex2f(-6.5,0.4);
    glVertex2f(-6.3,0.4);
    glVertex2f(-12.0,-2.0);
    glEnd();
    ///Building1
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(-10.0,-0.35);
    glVertex2f(-8.5,-0.35);
    glVertex2f(-8.3,-0.4);
    glVertex2f(-10.0,-0.4);
    glEnd();
        ///Building2
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(-7.1,0.04);
    glVertex2f(-8.6,0.04);
    glVertex2f(-8.6,0.09);
    glVertex2f(-7.1,0.09);
    glEnd();
            ///Building3
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(-6.4,0.40);
    glVertex2f(-7.6,0.40);
    glVertex2f(-7.6,0.45);
    glVertex2f(-6.4,0.45);
    glEnd();

}
void Ship()
{
    ///boat-1 motion left to right
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveA, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(44,2,2);
    glVertex2f(-5,-14);
    glVertex2f(-5,-14.8);
    glVertex2f(1,-14.8);
    glVertex2f(2,-14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-4.5,-13.5);
    glVertex2f(-4.5,-14);
    glVertex2f(1.1,-14);
    glVertex2f(0.7,-13.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-4.3,-12.7);
    glVertex2f(-4.5,-13.5);
    glVertex2f(-2.1,-13.5);
    glVertex2f(-2.3,-12.7);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(256,0,0);
    glVertex2f(-4.0,-13.5);
    glVertex2f(-4.0,-12.9);
    glVertex2f(-3.4,-12.9);
    glVertex2f(-3.4,-13.5);
    glEnd();
        glBegin(GL_POLYGON);
    glColor3ub(224,224,224);
    glVertex2f(-2.15,-13.5);
    glVertex2f(-2.3,-12.9);
    glVertex2f(-3.2,-12.9);
    glVertex2f(-3.2,-13.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(224,224,224);
    glVertex2f(0.65,-13.6);
    glVertex2f(0.9,-13.9);
    glVertex2f(-1.2,-13.9);
    glVertex2f(-1.2,-13.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(0.65f,-13.6f);
    glVertex2f(0.65f,-13.9f);
    glVertex2f(0.35f,-13.6f);
    glVertex2f(0.35f,-13.9f);
     glVertex2f(0.05f,-13.6f);
    glVertex2f(0.05f,-13.9f);
     glVertex2f(-0.25f,-13.6f);
    glVertex2f(-0.25f,-13.9f);
     glVertex2f(-0.55f,-13.6f);
    glVertex2f(-0.55f,-13.9f);
     glVertex2f(-0.85f,-13.6f);
    glVertex2f(-0.85f,-13.9f);
    glEnd();

    glPopMatrix();


}
void Mosque()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(256,0,0);
    glVertex2f(1.5f,-3.0f);
    glVertex2f(-2.0f,-6.0f);
    glVertex2f(-1.0f,-6.0f);
    glVertex2f(2.0f,-3.0f);
    glEnd();

    //polygon 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(255,255,255);
    glVertex2f(-1.0f,-6.0f);
    glVertex2f(-4.0f,-6.0f);
    glVertex2f(-5.0f,-7.0f);
    glVertex2f(-5.0f,-9.0f);
    glVertex2f(-2.0f,-9.0f);
    glVertex2f(-1.0f,-8.0f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(-2.0f,-7.0f);
    glVertex2f(-2.0f,-9.0f);
    glVertex2f(-2.0f,-7.0f);
    glVertex2f(-5.0f,-7.0f);
    glVertex2f(-2.0f,-7.0f);
    glVertex2f(-1.0f,-6.0f);
    glEnd();

    glPushMatrix();
    glColor3d(255,255,0);
    glTranslatef(-3.0, -6.5, 0);
    glutSolidSphere(1.0, 250, 250);
    glPopMatrix();
    glPushMatrix();
    glColor3d(255,255,0);
    glTranslatef(-3.0, -5.3, 0);
    glutSolidSphere(0.3, 260, 250);
    glPopMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-1.5f,-6.5f);
    glVertex2f(-4.5f,-6.5f);
    glVertex2f(-5.0f,-7.0f);
    glVertex2f(-5.0f,-9.0f);
    glVertex2f(-2.0f,-9.0f);
    glVertex2f(-1.5f,-8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(256,0,0);
    glVertex2f(-2.0f,-7.0f);
    glVertex2f(-2.0f,-9.0f);
    glVertex2f(-2.0f,-7.0f);
    glVertex2f(-5.0f,-7.0f);
    glVertex2f(-2.0f,-7.0f);
    glVertex2f(-1.0f,-6.0f);
    glEnd();
        glBegin(GL_POLYGON);
    glColor3ub(256,255,255);
    glVertex2f(-3.0f,-9.0f);
    glVertex2f(-4.0f,-9.0f);
    glVertex2f(-4.0f,-7.6f);
    glVertex2f(-3.5f,-7.4f);
    glVertex2f(-3.0f,-7.6f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(256,255,255);
    glVertex2f(-1.7f,-4.0f);
    glVertex2f(-1.3f,-4.0f);
    glVertex2f(-1.2f,-6.0f);
    glVertex2f(-1.8f,-6.0f);
    glEnd();
        glBegin(GL_POLYGON);
    glColor3ub(256,255,255);
    glVertex2f(-1.9f,-4.0f);
    glVertex2f(-1.1f,-4.0f);
    glVertex2f(-1.1f,-3.9f);
    glVertex2f(-1.5f,-3.7f);
    glVertex2f(-1.9f,-3.9f);
    glEnd();


}

void drawScene()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);


    ///sky///
    sky();
     ///sun///
    sun();
    ///hillview///
    //Hill();
    ///cloud 1///
    Cloud1();
    ///cloud 2///
    Cloud2();
    ///cloud 3///
    Cloud3();
    ///sea portion///
    Sea();
    ///left soil portion///
    LeftSide();
    ///right soil portion///
    RightSide();
    ///Road
    Road();
    ///straw///
    Straw();
    ///house on left side///
    Left_House();
    ///DirtRoad
    //DirtRoad();

    ///tree left side


    ///School
    School();
    ///house on right side///
    Right_House();
    ///boat1
    //Boat1();
    Ship();
    ///////////////
    ///boat-2 motion right to left
   Boat2();
    ///boat-3 without motion
    Boat3();
    ///windmill structure///
    Windmill();
    //fence();
    Factory_Road();
    Factory1();
    Factory2();

    Bulding1();
    Bulding2();
    Bulding3();
    BuldingRoad1();
    BuldingRoad2();
    BuldingRoad3();
    Tree();
    glutSwapBuffers();
}
void Scene1()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);
    sky();
    sun();
    Cloud1();
    Cloud2();
    Cloud3();
    Sea();
    LeftSide();
    RightSide();
    Straw();
    Boat1();
    Boat2();
    Boat3();
    Right_House();
    Left_House();
    //Mosque();
    Tree();
   glutSwapBuffers();
}
void Scene2()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);
    sky();
    sun();
    Cloud1();
    Cloud2();
    Cloud3();
    Sea();
    LeftSide();
    RightSide();
    DirtRoad();
    Straw();
    Boat1();
    Boat2();
    Boat3();
    School();
    Right_House();
    Left_House();
    Tree();
   glutSwapBuffers();
}
void Scene3()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);
    sky();
    sun();
    Cloud1();
    Cloud2();
    Cloud3();
    Sea();
    LeftSide();
    RightSide();
    Road();
    Straw();
    Boat1();
    Boat2();
    //Boat3();
    School();
    Left_House();
    Right_House();
   glutSwapBuffers();
}
void Scene4()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);
    sky();
    sun();
    Cloud1();
    Cloud2();
    Cloud3();
    Sea();
    LeftSide();
    RightSide();
    Road();
    Ship();
    //Boat2();
    School();
    Bulding1();
    Bulding2();
    Bulding3();
    BuldingRoad1();
    BuldingRoad2();
    BuldingRoad3();
    //Left_House();
    Mosque();
    Right_House();
    Windmill();
    glutSwapBuffers();
}
void Scene5()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);
    sky();
    sun();
    Cloud1();
    Cloud2();
    Cloud3();
    Sea();
    LeftSide();
    RightSide();
    Road();
    //Straw();
    //Boat1();
    Ship();
    //Boat2();
    Bulding1();
    Bulding2();
    Bulding3();
    BuldingRoad1();
    BuldingRoad2();
    BuldingRoad3();
    Factory_Road();
    Factory1();
    Factory2();
    School();
    //Left_House();
    Mosque();
    Right_House();
    Windmill();
   glutSwapBuffers();
}
void Night_Scene1()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);
    Nightsky();
    Moon();
    CloudN1();
    CloudN2();
    CloudN3();
    SeaN();
    LeftSideN();
    RightSideN();
    Straw();
    Boat1();
    Boat2();
    Boat3();
    Right_House();
    Left_House();
    Tree();
   glutSwapBuffers();
}
void Night_Scene2()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);
    Nightsky();
    Moon();
    CloudN1();
    CloudN2();
    CloudN3();
    SeaN();
    LeftSideN();
    RightSideN();
    DirtRoad();
    Straw();
    Boat1();
    Boat2();
    Boat3();
    School();
    Right_House();
    Left_House();
    Tree();
   glutSwapBuffers();
}
void Night_Scene3()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);
    Nightsky();
    Moon();
    CloudN1();
    CloudN2();
    CloudN3();
    SeaN();
    LeftSideN();
    RightSideN();
    Road();
    Straw();
    Boat1();
    Boat2();
    //Boat3();
    School();
    Left_House();
    Right_House();
   glutSwapBuffers();
}
void Night_Scene4()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);
    Nightsky();
    Moon();
    CloudN1();
    CloudN2();
    CloudN3();
    SeaN();
    LeftSideN();
    RightSideN();
    Road();
    //Straw();
    //Boat1();
    Ship();
    //Boat2();
    School();
    Bulding1();
    Bulding2();
    Bulding3();
    BuldingRoad1();
    BuldingRoad2();
    BuldingRoad3();
    //Left_House();
    Mosque();
    Right_House();
    Windmill();
   glutSwapBuffers();
}
void Night_Scene5()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);
    Nightsky();
    Moon();
    CloudN1();
    CloudN2();
    CloudN3();
    SeaN();
    LeftSideN();
    RightSideN();
    Road();
    //Straw();
    //Boat1();
    Ship();
    //Boat2();
    Bulding1();
    Bulding2();
    Bulding3();
    BuldingRoad1();
    BuldingRoad2();
    BuldingRoad3();
    Factory1();
    Factory2();
    Factory_Road();
    School();
    //Left_House();
    Mosque();
    Right_House();
    Windmill();
   glutSwapBuffers();
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}






void SpecialInput(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_UP:

         glutDisplayFunc(drawScene);
        break;
        case GLUT_KEY_DOWN:

         glutDisplayFunc(Night_Scene1);
        break;

    }
glutPostRedisplay();
}
void SpecialInput1(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_UP:

         glutDisplayFunc(Scene1);
        break;
        case GLUT_KEY_DOWN:

         glutDisplayFunc(Night_Scene1);
        break;

    }
glutPostRedisplay();
}
void SpecialInput2(int key, int x, int y)
{
    switch(key)
        {
        case GLUT_KEY_UP:

         glutDisplayFunc(Scene2);
        break;
        case GLUT_KEY_DOWN:

         glutDisplayFunc(Night_Scene2);
        break;

        }
glutPostRedisplay();
}
void SpecialInput3(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_UP:

         glutDisplayFunc(Scene3);
        break;
        case GLUT_KEY_DOWN:

         glutDisplayFunc(Night_Scene3);
        break;

    }
glutPostRedisplay();
}
void SpecialInput4(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_UP:

         glutDisplayFunc(Scene4);
        break;
        case GLUT_KEY_DOWN:

         glutDisplayFunc(Night_Scene4);
        break;

    }
    glutPostRedisplay();
}
void SpecialInput5(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_UP:

         glutDisplayFunc(Scene5);
        break;
        case GLUT_KEY_DOWN:

         glutDisplayFunc(Night_Scene5);
        break;

    }
glutPostRedisplay();
}

void update1(int value) {

   _moveA += speed;
    if(_moveA > 38)
    {
        _moveA = -38;
    }
    else if(_moveA<-38)
    {
        _moveA= 38;
    }
     //Notify GLUT that the display has changed

//_moveA += 0.1;

    glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}


void handleMouse(int button, int state, int x, int y) {

    if (button == GLUT_LEFT_BUTTON)
        {
            speed += 0.05f;
        }


    else if (button == GLUT_RIGHT_BUTTON)
        {
            speed -= 0.05f;
        }
    glutPostRedisplay();
}


void handleKeypress(unsigned char key, int x, int y) {
        switch (key) {
        case 's'://stops
            speed = 0.0f;
            break;
        case 'r'://runs
            speed = 0.02f;
            break;
        case '1'://runs
            glutSpecialFunc(SpecialInput1);
            glutDisplayFunc(Scene1);
            break;
        case '2'://runs
            glutSpecialFunc(SpecialInput2);
            glutDisplayFunc(Scene2);
            break;
        case '3'://runs
            glutSpecialFunc(SpecialInput3);
            glutDisplayFunc(Scene3);
            break;
        case '4'://runs
            glutSpecialFunc(SpecialInput4);
            glutDisplayFunc(Scene4);
            break;
        case '5'://runs
            glutSpecialFunc(SpecialInput5);
            glutDisplayFunc(Scene5);
            break;

        glutPostRedisplay();
        }
	}

void update2(int value) {


    if(_moveB < -36)
    {
        _moveB = +38;
    }
     //Notify GLUT that the display has changed

_moveB -= 0.13;

    glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}
//function for windlmill
void update3(int value) {

    _angle1-=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(10, update3, 0); //Notify GLUT to call update again in 25 milliseconds
}
void update4(int value) {


    if(_moveC > +36)
    {
        _moveC = -38;
    }
     //Notify GLUT that the display has changed

_moveC += 0.07;

    glutTimerFunc(20, update4, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize(1500, 1000);
    glutCreateWindow("Village To City view5");


    init();
    glutSpecialFunc(SpecialInput1);


    glutDisplayFunc(Scene1);
    glutTimerFunc(20, update1, 0); //Add a timer
    glutTimerFunc(20, update2, 0); //Add a timer

    glutTimerFunc(10, update3, 0);
    glutTimerFunc(20, update4, 0);
    glutKeyboardFunc(handleKeypress);

    glutMouseFunc(handleMouse);
    glutMainLoop();
    return 0;
}
