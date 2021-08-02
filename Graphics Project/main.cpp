#include <iostream>
#include<windows.h>
#include<GL/glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<mmsystem.h>
using namespace std;
float _move = 0.0f;
float PI=3.1416;
float metro_position1=0.0f;
float metro_speed1 = 0.02f;
float bus_position2 = 0.0f;
float bus_speed2 = 0.04f;
float car_position2 = 0.0f;
float car_speed2 = 0.02f;
float twicePi = 2.0f * PI;
float cloud_position1 = 0.0f;
float cloud_speed = 0.1f;
float ship_position1 = 0.0f;
float ship_speed1 = 0.05f;
float _angle1=0;
float speed = 1.0f;
float counter=0.0;

char text[] = "AIRPORT";
void Sprint( float x, float y, char *st)
{
    int l,i;

    l=strlen( st ); // see how many characters are in text string.
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
       glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, st[i]);

    }
}
void init(){

	glClearColor(0.0,0.5,0.8,1.0);
	glColor3f(0.0,0.0,0.5);
	glPointSize(4.0);
	gluOrtho2D(0.0,1000.0,0.0,1000.0);

}

void Day() {
    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);

    glBegin(GL_QUADS);
	glColor3ub(9, 96, 249 );
	glVertex2f(-1.0f,-1.0f);
	glColor3ub(9, 209, 249 );
	glVertex2f(1.0f,-1.0f);
	glColor3ub(146, 116, 238);
	glVertex2f(1.0f,1.0f);
	glColor3ub(78, 214, 241  );
	glVertex2f(-1.0f,1.0f);
	glEnd();
   //cloud
   glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
   float x,y,radius;
   int i;
   int triangleAmount = 20;
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

	//buildings



glPushMatrix();
glTranslatef(ship_position1,0.0f, 0.0f);
 glBegin(GL_TRIANGLES);
 //bird 1
	glColor3ub(255, 255, 255);
	glVertex2f(0.32f,0.6f);
	glVertex2f(0.34f,0.65f);
    glVertex2f(0.4f,0.65f);
	glEnd();
	 glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(0.32f,0.6f);
	glVertex2f(0.28f,0.65f);
    glVertex2f(0.22f,0.65f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(224, 224, 224);
	glVertex2f(0.3f,0.6f);
	glVertex2f(0.34f,0.6);
	glVertex2f(0.32f,0.63f);

	glEnd();
	glPopMatrix();
	glPushMatrix();
glTranslatef(ship_position1,0.0f, 0.0f);
	//bird 2

	glColor3ub(255, 255, 255);
	glVertex2f(0.25f,0.6f);
	glVertex2f(0.27f,0.65f);
    glVertex2f(0.33f,0.65f);
	glEnd();
	 glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(0.25f,0.6f);
	glVertex2f(0.21f,0.65f);
    glVertex2f(0.15f,0.65f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(224, 224, 224);
	glVertex2f(0.23f,0.6f);
	glVertex2f(0.27f,0.6);
	glVertex2f(0.25f,0.63f);

	glEnd();
glPopMatrix();
	glPushMatrix();
glTranslatef(ship_position1,0.0f, 0.0f);
	//bird 3

	glColor3ub(255, 255, 255);
	glVertex2f(0.2f,0.6f);
	glVertex2f(0.22f,0.65f);
    glVertex2f(0.28f,0.65f);
	glEnd();
	 glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f,0.6f);
	glVertex2f(0.16f,0.65f);
    glVertex2f(0.1f,0.65f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(224, 224, 224);
	glVertex2f(0.18f,0.6f);
	glVertex2f(0.22f,0.6);
	glVertex2f(0.2f,0.63f);

	glEnd();
glPopMatrix();
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.3f,0.4f);
	glVertex2f(0.3f,0.3f);
    glVertex2f(0.33f,0.3f);
	glVertex2f(0.33f,0.4f);
	glEnd();
	 glBegin(GL_TRIANGLES);
	glColor3ub(160, 160, 160);
	glVertex2f(0.32f,0.4f);
	glVertex2f(0.2f,0.5f);
    glVertex2f(0.4f,0.5f);

	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.31f,0.52f);
	glVertex2f(0.28f,0.5f);
    glVertex2f(0.33f,0.5f);

	glEnd();

glPushMatrix();
	//airport building
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.48f,0.1f);
	glVertex2f(-0.48f,-0.25f);
    glVertex2f(0.48f,-0.25f);
	glVertex2f(0.48f,0.1f);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.4f,0.3f);
	glVertex2f(-0.4f,0.0f);
    glVertex2f(0.4f,0.0f);
	glVertex2f(0.4f,0.3f);
	glEnd();

//text AIRPORT
	 glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.2f,0.4f);
	glVertex2f(-0.2f,0.3f);
    glVertex2f(0.15f,0.3f);
	glVertex2f(0.15f,0.4f);
	glEnd();
 glPushMatrix();
    Sprint(-0.12,0.35,text);
    glPopMatrix();

    glBegin(GL_TRIANGLES);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.2f,0.4f);
	glVertex2f(-0.03f,0.6f);
    glVertex2f(0.15f,0.4f);
	glEnd();
	//windows
 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(-0.02f,0.25f);
	glVertex2f(-0.02f,0.1f);
    glVertex2f(0.0f,0.1f);
	glVertex2f(0.0f,0.25f);
	glEnd();
 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(0.1f,0.25f);
	glVertex2f(0.1f,0.1f);
    glVertex2f(0.2f,0.1f);
	glVertex2f(0.2f,0.25f);
	glEnd();
	 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(0.25f,0.25f);
	glVertex2f(0.25f,0.1f);
    glVertex2f(0.35f,0.1f);
	glVertex2f(0.35f,0.25f);
	glEnd();
 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(-0.25f,0.25f);
	glVertex2f(-0.25f,0.1f);
    glVertex2f(-0.35f,0.1f);
	glVertex2f(-0.35f,0.25f);
	glEnd();
	 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(-0.1f,0.25f);
	glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.2f,0.1f);
	glVertex2f(-0.2f,0.25f);
	glEnd();
	 glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.48f,0.07f);
	glVertex2f(-0.48f,0.09f);
    glVertex2f(0.48f,0.09f);
	glVertex2f(0.48f,0.07f);
	glEnd();

 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.1f,0.05f);
	glVertex2f(0.1f,-0.3f);
    glVertex2f(-0.1f,-0.3f);
	glVertex2f(-0.1f,0.05f);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.3f,0.05f);
	glVertex2f(0.3f,-0.15f);
    glVertex2f(0.2f,-0.15f);
	glVertex2f(0.2f,0.05f);
	glEnd();
     glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.32f,0.05f);
	glVertex2f(0.32f,-0.15f);
    glVertex2f(0.34f,-0.15f);
	glVertex2f(0.34f,0.05f);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.36f,0.05f);
	glVertex2f(0.36f,-0.15f);
    glVertex2f(0.44f,-0.15f);
	glVertex2f(0.44f,0.05f);
	glEnd();


	//door

	//building3
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.98f,-.23f);
	glVertex2f(0.87f,-.23f);
    glVertex2f(0.87f,.79f);
	glVertex2f(0.98f,.79f);
	glEnd();
	//building3 window

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.75f);
	glVertex2f(0.915f,.75f);
    glVertex2f(0.915f,.71f);
	glVertex2f(0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.65f);
	glVertex2f(0.915f,.65f);
    glVertex2f(0.915f,.61f);
	glVertex2f(0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.55f);
	glVertex2f(0.915f,.55f);
    glVertex2f(0.915f,.51f);
	glVertex2f(0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.45f);
	glVertex2f(0.915f,.45f);
    glVertex2f(0.915f,.41f);
	glVertex2f(0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.35f);
	glVertex2f(0.915f,.35f);
    glVertex2f(0.915f,.31f);
	glVertex2f(0.88f,.31f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.15f);
	glVertex2f(0.915f,.15f);
    glVertex2f(0.915f,.11f);
	glVertex2f(0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.05f);
	glVertex2f(0.915f,.05f);
    glVertex2f(0.915f,.01f);
	glVertex2f(0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,-.05f);
	glVertex2f(0.915f,-.05f);
    glVertex2f(0.915f,-.09f);
	glVertex2f(0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,-.15f);
	glVertex2f(0.915f,-.15f);
    glVertex2f(0.915f,-.19f);
	glVertex2f(0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.75f);
	glVertex2f(0.97f,.75f);
    glVertex2f(0.97f,.71f);
	glVertex2f(0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.65f);
	glVertex2f(0.97f,.65f);
    glVertex2f(0.97f,.61f);
	glVertex2f(0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.55f);
	glVertex2f(0.97f,.55f);
    glVertex2f(0.97f,.51f);
	glVertex2f(0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.45f);
	glVertex2f(0.97f,.45f);
    glVertex2f(0.97f,.41f);
	glVertex2f(0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.35f);
	glVertex2f(0.97f,.35f);
    glVertex2f(0.97f,.31f);
	glVertex2f(0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.25f);
	glVertex2f(0.97f,.25f);
    glVertex2f(0.97f,.21f);
	glVertex2f(0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.15f);
	glVertex2f(0.97f,.15f);
    glVertex2f(0.97f,.11f);
	glVertex2f(0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.05f);
	glVertex2f(0.97f,.05f);
    glVertex2f(0.97f,.01f);
	glVertex2f(0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,-.05f);
	glVertex2f(0.97f,-.05f);
    glVertex2f(0.97f,-.09f);
	glVertex2f(0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,-.15f);
	glVertex2f(0.97f,-.15f);
    glVertex2f(0.97f,-.19f);
	glVertex2f(0.935f,-.19f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.15f,.05f);
	glVertex2f(-0.25f,.05f);
    glVertex2f(-0.25f,-.15f);
	glVertex2f(-0.15f,-.15f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.3f,.05f);
	glVertex2f(-0.32f,.05f);
    glVertex2f(-0.32f,-.15f);
	glVertex2f(-0.3f,-.15f);
	glEnd();

glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.35f,.05f);
	glVertex2f(-0.45f,.05f);
    glVertex2f(-0.45f,-.15f);
	glVertex2f(-0.35f,-.15f);
	glEnd();

	glPopMatrix();


	//building4
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.82f,-.23f);
	glVertex2f(0.71f,-.23f);
    glVertex2f(0.71f,.48f);
	glVertex2f(0.82f,.48f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.81f,.45f);
	glVertex2f(0.72f,.45f);
    glVertex2f(0.72f,.52f);
	glVertex2f(0.81f,.52f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.80f,.52f);
	glVertex2f(0.73f,.52f);
    glVertex2f(0.73f,.59f);
	glVertex2f(0.80f,.59f);
	glEnd();
	//building4 windows
	//middle
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.57f);
	glVertex2f(0.77f,.57f);
    glVertex2f(0.77f,.51f);
	glVertex2f(0.76f,.51f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.47f);
	glVertex2f(0.77f,.47f);
    glVertex2f(0.77f,.41f);
	glVertex2f(0.76f,.41f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.37f);
	glVertex2f(0.77f,.37f);
    glVertex2f(0.77f,.31f);
	glVertex2f(0.76f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.27f);
	glVertex2f(0.77f,.27f);
    glVertex2f(0.77f,.21f);
	glVertex2f(0.76f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.17f);
	glVertex2f(0.77f,.17f);
    glVertex2f(0.77f,.11f);
	glVertex2f(0.76f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.07f);
	glVertex2f(0.77f,.07f);
    glVertex2f(0.77f,.01);
	glVertex2f(0.76f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,-.03f);
	glVertex2f(0.77f,-.03f);
    glVertex2f(0.77f,-.09f);
	glVertex2f(0.76f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,-.13f);
	glVertex2f(0.77f,-.13f);
    glVertex2f(0.77f,-.19f);
	glVertex2f(0.76f,-.19f);
	glEnd();
	//first row
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,.46f);
	glVertex2f(0.75,.46f);
    glVertex2f(0.75,.42f);
	glVertex2f(0.72,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,.36f);
	glVertex2f(0.75,.36f);
    glVertex2f(0.75,.32f);
	glVertex2f(0.72,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,.26f);
	glVertex2f(0.75,.26f);
    glVertex2f(0.75,.22f);
	glVertex2f(0.72,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,.16f);
	glVertex2f(0.75,.16f);
    glVertex2f(0.75,.12f);
	glVertex2f(0.72,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,.06f);
	glVertex2f(0.75,.06f);
    glVertex2f(0.75,.02f);
	glVertex2f(0.72,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,-.04f);
	glVertex2f(0.75,-.04f);
    glVertex2f(0.75,-.08f);
	glVertex2f(0.72,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,-.14f);
	glVertex2f(0.75,-.14f);
    glVertex2f(0.75,-.18f);
	glVertex2f(0.72,-.18f);
	glEnd();
	//second row
	 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,.46f);
	glVertex2f(0.78,.46f);
    glVertex2f(0.78,.42f);
	glVertex2f(0.81,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,.36f);
	glVertex2f(0.78,.36f);
    glVertex2f(0.78,.32f);
	glVertex2f(0.81,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,.26f);
	glVertex2f(0.78,.26f);
    glVertex2f(0.78,.22f);
	glVertex2f(0.81,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,.16f);
	glVertex2f(0.78,.16f);
    glVertex2f(0.78,.12f);
	glVertex2f(0.81,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,.06f);
	glVertex2f(0.78,.06f);
    glVertex2f(0.78,.02f);
	glVertex2f(0.81,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,-.04f);
	glVertex2f(0.78,-.04f);
    glVertex2f(0.78,-.08f);
	glVertex2f(0.81,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,-.14f);
	glVertex2f(0.78,-.14f);
    glVertex2f(0.78,-.18f);
	glVertex2f(0.81,-.18f);
	glEnd();

	//building5
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.67f,-.23f);
	glVertex2f(0.53f,-.23f);
    glVertex2f(0.53f,.35f);
	glVertex2f(0.67f,.35f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.68f,.29f);
	glVertex2f(0.52f,.29f);
    glVertex2f(0.52f,.33f);
	glVertex2f(0.68f,.33f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.66f,.35f);
	glVertex2f(0.54f,.35f);
    glVertex2f(0.54f,.40f);
	glVertex2f(0.66f,.40f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.55f,.40f);
	glVertex2f(0.65f,.40f);
    glVertex2f(0.60f,.50f);
	glEnd();
	//building5 window
    //first window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.66f,.27f);
	glVertex2f(0.65f,.27f);
    glVertex2f(0.65f,.21f);
	glVertex2f(0.66f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.66f,.17f);
	glVertex2f(0.65f,.17f);
    glVertex2f(0.65f,.11f);
	glVertex2f(0.66f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.66f,.07f);
	glVertex2f(0.65f,.07f);
    glVertex2f(0.65f,.01);
	glVertex2f(0.66f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.66f,-.03f);
	glVertex2f(0.65f,-.03f);
    glVertex2f(0.65f,-.09f);
	glVertex2f(0.66f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.66f,-.13f);
	glVertex2f(0.65f,-.13f);
    glVertex2f(0.65f,-.19f);
	glVertex2f(0.66f,-.19f);
	glEnd();
    //second window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.61f,.27f);
	glVertex2f(0.60f,.27f);
    glVertex2f(0.60f,.21f);
	glVertex2f(0.61f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.61f,.17f);
	glVertex2f(0.60f,.17f);
    glVertex2f(0.60f,.11f);
	glVertex2f(0.61f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.61f,.07f);
	glVertex2f(0.60f,.07f);
    glVertex2f(0.60f,.01);
	glVertex2f(0.61f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.61f,-.03f);
	glVertex2f(0.60f,-.03f);
    glVertex2f(0.60f,-.09f);
	glVertex2f(0.61f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.61f,-.13f);
	glVertex2f(0.60f,-.13f);
    glVertex2f(0.60f,-.19f);
	glVertex2f(0.61f,-.19f);
	glEnd();
    //third window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.54f,.27f);
	glVertex2f(0.55f,.27f);
    glVertex2f(0.55f,.21f);
	glVertex2f(0.54f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.54f,.17f);
	glVertex2f(0.55f,.17f);
    glVertex2f(0.55f,.11f);
	glVertex2f(0.54f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.54f,.07f);
	glVertex2f(0.55f,.07f);
    glVertex2f(0.55f,.01);
	glVertex2f(0.54f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.54f,-.03f);
	glVertex2f(0.55f,-.03f);
    glVertex2f(0.55f,-.09f);
	glVertex2f(0.54f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.54f,-.13f);
	glVertex2f(0.55f,-.13f);
    glVertex2f(0.55f,-.19f);
	glVertex2f(0.54f,-.19f);
	glEnd();

	//building3
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.98f,-.23f);
	glVertex2f(-0.87f,-.23f);
    glVertex2f(-0.87f,.79f);
	glVertex2f(-0.98f,.79f);
	glEnd();
	//building3 window
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.75f);
	glVertex2f(-0.915f,.75f);
    glVertex2f(-0.915f,.71f);
	glVertex2f(-0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.65f);
	glVertex2f(-0.915f,.65f);
    glVertex2f(-0.915f,.61f);
	glVertex2f(-0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.55f);
	glVertex2f(-0.915f,.55f);
    glVertex2f(-0.915f,.51f);
	glVertex2f(-0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.45f);
	glVertex2f(-0.915f,.45f);
    glVertex2f(-0.915f,.41f);
	glVertex2f(-0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.35f);
	glVertex2f(-0.915f,.35f);
    glVertex2f(-0.915f,.31f);
	glVertex2f(-0.88f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.25f);
	glVertex2f(-0.915f,.25f);
    glVertex2f(-0.915f,.21f);
	glVertex2f(-0.88f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.15f);
	glVertex2f(-0.915f,.15f);
    glVertex2f(-0.915f,.11f);
	glVertex2f(-0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.05f);
	glVertex2f(-0.915f,.05f);
    glVertex2f(-0.915f,.01f);
	glVertex2f(-0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,-.05f);
	glVertex2f(-0.915f,-.05f);
    glVertex2f(-0.915f,-.09f);
	glVertex2f(-0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,-.15f);
	glVertex2f(-0.915f,-.15f);
    glVertex2f(-0.915f,-.19f);
	glVertex2f(-0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.75f);
	glVertex2f(-0.97f,.75f);
    glVertex2f(-0.97f,.71f);
	glVertex2f(-0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.65f);
	glVertex2f(-0.97f,.65f);
    glVertex2f(-0.97f,.61f);
	glVertex2f(-0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.55f);
	glVertex2f(-0.97f,.55f);
    glVertex2f(-0.97f,.51f);
	glVertex2f(-0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.45f);
	glVertex2f(-0.97f,.45f);
    glVertex2f(-0.97f,.41f);
	glVertex2f(-0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.35f);
	glVertex2f(-0.97f,.35f);
    glVertex2f(-0.97f,.31f);
	glVertex2f(-0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.25f);
	glVertex2f(-0.97f,.25f);
    glVertex2f(-0.97f,.21f);
	glVertex2f(-0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.15f);
	glVertex2f(-0.97f,.15f);
    glVertex2f(-0.97f,.11f);
	glVertex2f(-0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.05f);
	glVertex2f(-0.97f,.05f);
    glVertex2f(-0.97f,.01f);
	glVertex2f(-0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,-.05f);
	glVertex2f(-0.97f,-.05f);
    glVertex2f(-0.97f,-.09f);
	glVertex2f(-0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,-.15f);
	glVertex2f(-0.97f,-.15f);
    glVertex2f(-0.97f,-.19f);
	glVertex2f(-0.935f,-.19f);
	glEnd();
	glPopMatrix();

	//building4
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.82f,-.23f);
	glVertex2f(-0.71f,-.23f);
    glVertex2f(-0.71f,.48f);
	glVertex2f(-0.82f,.48f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.81f,.45f);
	glVertex2f(-0.72f,.45f);
    glVertex2f(-0.72f,.52f);
	glVertex2f(-0.81f,.52f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.80f,.52f);
	glVertex2f(-0.73f,.52f);
    glVertex2f(-0.73f,.59f);
	glVertex2f(-0.80f,.59f);
	glEnd();
	//building4 windows
	//middle
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.57f);
	glVertex2f(-0.77f,.57f);
    glVertex2f(-0.77f,.51f);
	glVertex2f(-0.76f,.51f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.47f);
	glVertex2f(-0.77f,.47f);
    glVertex2f(-0.77f,.41f);
	glVertex2f(-0.76f,.41f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.37f);
	glVertex2f(-0.77f,.37f);
    glVertex2f(-0.77f,.31f);
	glVertex2f(-0.76f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.27f);
	glVertex2f(-0.77f,.27f);
    glVertex2f(-0.77f,.21f);
	glVertex2f(-0.76f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.17f);
	glVertex2f(-0.77f,.17f);
    glVertex2f(-0.77f,.11f);
	glVertex2f(-0.76f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.07f);
	glVertex2f(-0.77f,.07f);
    glVertex2f(-0.77f,.01);
	glVertex2f(-0.76f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,-.03f);
	glVertex2f(-0.77f,-.03f);
    glVertex2f(-0.77f,-.09f);
	glVertex2f(-0.76f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,-.13f);
	glVertex2f(-0.77f,-.13f);
    glVertex2f(-0.77f,-.19f);
	glVertex2f(-0.76f,-.19f);
	glEnd();
	//first row
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,.46f);
	glVertex2f(-0.75,.46f);
    glVertex2f(-0.75,.42f);
	glVertex2f(-0.72,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,.36f);
	glVertex2f(-0.75,.36f);
    glVertex2f(-0.75,.32f);
	glVertex2f(-0.72,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,.26f);
	glVertex2f(-0.75,.26f);
    glVertex2f(-0.75,.22f);
	glVertex2f(-0.72,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,.16f);
	glVertex2f(-0.75,.16f);
    glVertex2f(-0.75,.12f);
	glVertex2f(-0.72,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,.06f);
	glVertex2f(-0.75,.06f);
    glVertex2f(-0.75,.02f);
	glVertex2f(-0.72,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,-.04f);
	glVertex2f(-0.75,-.04f);
    glVertex2f(-0.75,-.08f);
	glVertex2f(-0.72,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,-.14f);
	glVertex2f(-0.75,-.14f);
    glVertex2f(-0.75,-.18f);
	glVertex2f(-0.72,-.18f);
	glEnd();
	//second row
	 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,.46f);
	glVertex2f(-0.78,.46f);
    glVertex2f(-0.78,.42f);
	glVertex2f(-0.81,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,.36f);
	glVertex2f(-0.78,.36f);
    glVertex2f(-0.78,.32f);
	glVertex2f(-0.81,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,.26f);
	glVertex2f(-0.78,.26f);
    glVertex2f(-0.78,.22f);
	glVertex2f(-0.81,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,.16f);
	glVertex2f(-0.78,.16f);
    glVertex2f(-0.78,.12f);
	glVertex2f(-0.81,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,.06f);
	glVertex2f(-0.78,.06f);
    glVertex2f(-0.78,.02f);
	glVertex2f(-0.81,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,-.04f);
	glVertex2f(-0.78,-.04f);
    glVertex2f(-0.78,-.08f);
	glVertex2f(-0.81,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,-.14f);
	glVertex2f(-0.78,-.14f);
    glVertex2f(-0.78,-.18f);
	glVertex2f(-0.81,-.18f);
	glEnd();

//building5
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.67f,-.23f);
	glVertex2f(-0.53f,-.23f);
    glVertex2f(-0.53f,.35f);
	glVertex2f(-0.67f,.35f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.68f,.29f);
	glVertex2f(-0.52f,.29f);
    glVertex2f(-0.52f,.33f);
	glVertex2f(-0.68f,.33f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.66f,.35f);
	glVertex2f(-0.54f,.35f);
    glVertex2f(-0.54f,.40f);
	glVertex2f(-0.66f,.40f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.55f,.40f);
	glVertex2f(-0.65f,.40f);
    glVertex2f(-0.60f,.50f);
	glEnd();
	//building5 window
    //first window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.66f,.27f);
	glVertex2f(-0.65f,.27f);
    glVertex2f(-0.65f,.21f);
	glVertex2f(-0.66f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.66f,.17f);
	glVertex2f(-0.65f,.17f);
    glVertex2f(-0.65f,.11f);
	glVertex2f(-0.66f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.66f,.07f);
	glVertex2f(-0.65f,.07f);
    glVertex2f(-0.65f,.01);
	glVertex2f(-0.66f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.66f,-.03f);
	glVertex2f(-0.65f,-.03f);
    glVertex2f(-0.65f,-.09f);
	glVertex2f(-0.66f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.66f,-.13f);
	glVertex2f(-0.65f,-.13f);
    glVertex2f(-0.65f,-.19f);
	glVertex2f(-0.66f,-.19f);
	glEnd();
    //second window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.61f,.27f);
	glVertex2f(-0.60f,.27f);
    glVertex2f(-0.60f,.21f);
	glVertex2f(-0.61f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.61f,.17f);
	glVertex2f(-0.60f,.17f);
    glVertex2f(-0.60f,.11f);
	glVertex2f(-0.61f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.61f,.07f);
	glVertex2f(-0.60f,.07f);
    glVertex2f(-0.60f,.01);
	glVertex2f(-0.61f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.61f,-.03f);
	glVertex2f(-0.60f,-.03f);
    glVertex2f(-0.60f,-.09f);
	glVertex2f(-0.61f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.61f,-.13f);
	glVertex2f(-0.60f,-.13f);
    glVertex2f(-0.60f,-.19f);
	glVertex2f(-0.61f,-.19f);
	glEnd();
    //third window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.54f,.27f);
	glVertex2f(-0.55f,.27f);
    glVertex2f(-0.55f,.21f);
	glVertex2f(-0.54f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.54f,.17f);
	glVertex2f(-0.55f,.17f);
    glVertex2f(-0.55f,.11f);
	glVertex2f(-0.54f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.54f,.07f);
	glVertex2f(-0.55f,.07f);
    glVertex2f(-0.55f,.01);
	glVertex2f(-0.54f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.54f,-.03f);
	glVertex2f(-0.55f,-.03f);
    glVertex2f(-0.55f,-.09f);
	glVertex2f(-0.54f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.54f,-.13f);
	glVertex2f(-0.55f,-.13f);
    glVertex2f(-0.55f,-.19f);
	glVertex2f(-0.54f,-.19f);
	glEnd();




	//field
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(73, 252, 0 );
    glVertex2f(-1.0f, -0.23f);
    glColor3ub(36, 198, 78 );
    glVertex2f(-1.0f, -0.32f);
    glColor3ub(8, 147, 44 );
    glVertex2f(1.0f, -0.32f);
    glColor3ub(54, 186, 60 );
    glVertex2f(1.0f, -0.23f);
    glEnd();
    glPopMatrix();


    //runwayroad
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(121, 109, 109);
	glVertex2f(-1.0f,-0.32f);
	glVertex2f(-1.0f,-0.59f);
	glVertex2f(1.0f,-0.59f);
	glVertex2f(1.0f,-0.32f);
	glEnd();


    //road airport
      glBegin(GL_QUADS);
    glColor3ub(121, 109, 109);
	glVertex2f(-1.0f,-0.32f);
	glVertex2f(-1.0f,-0.59f);
	glVertex2f(-.9f,-0.59f);
	glVertex2f(-0.9f,-0.32f);
	glEnd();
    glPopMatrix();

         glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-1.0f,-0.4f);
	glVertex2f(-1.0f,-0.42f);
	glVertex2f(-.9f,-0.42f);
	glVertex2f(-0.9f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.8f,-0.4f);
	glVertex2f(-0.8f,-0.42f);
	glVertex2f(-0.7f,-0.42f);
	glVertex2f(-0.7f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.6f,-0.4f);
	glVertex2f(-0.6f,-0.42f);
	glVertex2f(-0.5,-0.42f);
	glVertex2f(-0.5f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.4f,-0.4f);
	glVertex2f(-0.4f,-0.42f);
	glVertex2f(-0.3,-0.42f);
	glVertex2f(-0.3f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.2f,-0.4f);
	glVertex2f(-0.2f,-0.42f);
	glVertex2f(-0.1,-0.42f);
	glVertex2f(-0.1f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.0f,-0.4f);
	glVertex2f(0.0f,-0.42f);
	glVertex2f(0.1,-0.42f);
	glVertex2f(0.1f,-0.4f);
	glEnd();


	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.2f,-0.4f);
	glVertex2f(0.2f,-0.42f);
	glVertex2f(0.3,-0.42f);
	glVertex2f(0.3f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.4f,-0.4f);
	glVertex2f(0.4f,-0.42f);
	glVertex2f(0.5,-0.42f);
	glVertex2f(0.5f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.6f,-0.4f);
	glVertex2f(0.6f,-0.42f);
	glVertex2f(0.7,-0.42f);
	glVertex2f(0.7f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.8f,-0.4f);
	glVertex2f(0.8f,-0.42f);
	glVertex2f(0.9,-0.42f);
	glVertex2f(0.9f,-0.4f);
	glEnd();


    //plane
     glPushMatrix();
    glScaled(1.0f,1.05f,0.0f);
    glTranslatef(-ship_position1,0.0f, ship_position1);


     glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.0f, -0.35f);
    glVertex2f(-0.3f, -0.35f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
    glVertex2f(0.1f, -0.27f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.0f, -0.35f);
    glVertex2f(0.1f, -0.33f);
    glEnd();
     glBegin(GL_TRIANGLES);
	glColor3ub(255, 0, 0);
    glVertex2f(0.1f, -0.27f);
    glVertex2f(0.1f, -0.33f);
    glVertex2f(0.15f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(-0.3f, -0.35f);
    glVertex2f(-0.4f, -0.31f);
    glVertex2f(-0.4f, -0.27f);
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3ub(62, 84, 228);
    glVertex2f(-0.4f, -0.31f);
    glVertex2f(-0.4f, -0.27f);
    glVertex2f(-0.45f, -0.29f);
    glEnd();
 glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(0.07f, -0.28f);
    glVertex2f(0.05f, -0.28f);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.07f, -0.3f);
    glEnd();
     glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(0.03f, -0.27f);
    glVertex2f(0.0f, -0.27f);
    glVertex2f(0.0f, -0.33f);
    glVertex2f(0.03f, -0.33f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.01f, -0.28f);
    glVertex2f(-0.03f, -0.28f);
    glVertex2f(-0.03f, -0.3f);
    glVertex2f(-0.01f, -0.3f);
    glEnd();
     glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.05f, -0.28f);
    glVertex2f(-0.07f, -0.28f);
    glVertex2f(-0.07f, -0.3f);
    glVertex2f(-0.05f, -0.3f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.09f, -0.28f);
    glVertex2f(-0.11f, -0.28f);
    glVertex2f(-0.11f, -0.3f);
    glVertex2f(-0.09f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.13f, -0.28f);
    glVertex2f(-0.15f, -0.28f);
    glVertex2f(-0.15f, -0.3f);
    glVertex2f(-0.13f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.17f, -0.28f);
    glVertex2f(-0.19f, -0.28f);
    glVertex2f(-0.19f, -0.3f);
    glVertex2f(-0.17f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.21f, -0.28f);
    glVertex2f(-0.23f, -0.28f);
    glVertex2f(-0.23f, -0.3f);
    glVertex2f(-0.21f, -0.3f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.25f, -0.28f);
    glVertex2f(-0.27f, -0.28f);
    glVertex2f(-0.27f, -0.3f);
    glVertex2f(-0.25f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.29f, -0.28f);
    glVertex2f(-0.31f, -0.28f);
    glVertex2f(-0.31f, -0.3f);
    glVertex2f(-0.29f, -0.3f);
    glEnd();
    //wings
      glBegin(GL_QUADS);
	glColor3ub(255, 0, 0);
    glVertex2f(-0.15f, -0.32f);
    glVertex2f(-0.2f, -0.42f);
    glVertex2f(-0.15f, -0.42f);
    glVertex2f(-0.1f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 0, 0);
    glVertex2f(-0.36f, -0.27f);
    glVertex2f(-0.43f, -0.2);
    glVertex2f(-0.38f, -0.2f);
    glVertex2f(-0.31f, -0.27f);

    glEnd();



  glPopMatrix();

    //windows

    glPopMatrix();

//lamppost
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.79f, -0.59f);
    glVertex2f(-0.81f, -0.59f);
    glVertex2f(-0.81f, -0.40f);
    glVertex2f(-0.79f, -0.40f);
    glEnd();
    glPushMatrix();
    glTranslated(-0.80,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
          glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

//lamppost2
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.01f, -0.59f);
    glVertex2f(0.01f, -0.59f);
    glVertex2f(0.01f, -0.40f);
    glVertex2f(-0.01f, -0.40f);
    glEnd();
    glPushMatrix();
    glTranslated(0.0,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();
//lamppost3
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(0.79f, -0.59f);
    glVertex2f(0.81f, -0.59f);
    glVertex2f(0.81f, -0.40f);
    glVertex2f(0.79f, -0.40f);
    glEnd();
       glPushMatrix();
    glTranslated(0.80,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();




	//Sideroad1
	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-1.0f,-.62f);
	glVertex2f(-1.0f,-.59f);
	glVertex2f(-.8f,-.59f);
	glVertex2f(-.8f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.8f,-.62f);
	glVertex2f(-.8f,-.59f);
	glVertex2f(-.6f,-.59f);
	glVertex2f(-.6f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.6f,-.62f);
	glVertex2f(-.6f,-.59f);
	glVertex2f(-.4f,-.59f);
	glVertex2f(-.4f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.4f,-.62f);
	glVertex2f(-.4f,-.59f);
	glVertex2f(-.2f,-.59f);
	glVertex2f(-.2f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.2f,-.62f);
	glVertex2f(-.2f,-.59f);
	glVertex2f(0.0f,-.59f);
	glVertex2f(0.0f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(0.0f,-.62f);
	glVertex2f(0.0f,-.59f);
	glVertex2f(0.2f,-.59f);
	glVertex2f(0.2f,-.62f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.2f,-.62f);
	glVertex2f(.2f,-.59f);
	glVertex2f(.4f,-.59f);
	glVertex2f(.4f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.4f,-.62f);
	glVertex2f(.4f,-.59f);
	glVertex2f(.6f,-.59f);
	glVertex2f(.6f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.6f,-.62f);
	glVertex2f(.6f,-.59f);
	glVertex2f(.8f,-.59f);
	glVertex2f(.8f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.8f,-.62f);
	glVertex2f(.8f,-.59f);
	glVertex2f(1.0f,-.59f);
	glVertex2f(1.0f,-.62f);
	glEnd();


	//sideroad2
    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-1.0f,-.97f);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-.8f,-1.0f);
	glVertex2f(-.8f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.8f,-.97f);
	glVertex2f(-.8f,-1.0f);
	glVertex2f(-.6f,-1.0f);
	glVertex2f(-.6f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.6f,-.97f);
	glVertex2f(-.6f,-1.0f);
	glVertex2f(-.4f,-1.0f);
	glVertex2f(-.4f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.4f,-.97f);
	glVertex2f(-.4f,-1.0f);
	glVertex2f(-.2f,-1.0f);
	glVertex2f(-.2f,-.97f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.2f,-.97f);
	glVertex2f(-.2f,-1.0f);
	glVertex2f(.0f,-1.0f);
	glVertex2f(.0f,-.97f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.0f,-.97f);
	glVertex2f(.0f,-1.0f);
	glVertex2f(.2f,-1.0f);
	glVertex2f(.2f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.2f,-.97f);
	glVertex2f(.2f,-1.0f);
	glVertex2f(.4f,-1.0f);
	glVertex2f(.4f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.4f,-.97f);
	glVertex2f(.4f,-1.0f);
	glVertex2f(.6f,-1.0f);
	glVertex2f(.6f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.6f,-.97f);
	glVertex2f(.6f,-1.0f);
	glVertex2f(.8f,-1.0f);
	glVertex2f(.8f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.8f,-.97f);
	glVertex2f(.8f,-1.0f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(1.0f,-.97f);
	glEnd();



    //main road
    glBegin(GL_QUADS);
	glColor3ub(122, 132, 147);
	glVertex2f(-1.0f,-.62f);
	glVertex2f(-1.0f,-.97f);
	glVertex2f(1.0f,-.97f);
	glVertex2f(1.0f,-.62f);
	glEnd();

    //road div

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.8f,-.79f);
	glVertex2f(-.8f,-.81f);
	glVertex2f(-.6f,-.81f);
	glVertex2f(-.6f,-.79f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.4f,-.79f);
	glVertex2f(-.4f,-.81f);
	glVertex2f(-.2f,-.81f);
	glVertex2f(-.2f,-.79f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.0f,-.79f);
	glVertex2f(.0f,-.81f);
	glVertex2f(.2f,-.81f);
	glVertex2f(.2f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.4f,-.79f);
	glVertex2f(.4f,-.81f);
	glVertex2f(.6f,-.81f);
	glVertex2f(.6f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.8f,-.79f);
	glVertex2f(.8f,-.81f);
	glVertex2f(1.0f,-.81f);
	glVertex2f(1.0f,-.79f);
	glEnd();

    //bus1
    glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(102, 9, 129 );
	glVertex2f(-.9f,-.45f);
	glVertex2f(-.9f,-.55f);
	glVertex2f(-.5f,-.55);
	glVertex2f(-.5f,-.55f);
	glVertex2f(-.5f,-.45);
	glEnd();

//window
    glBegin(GL_QUADS);
	glColor3ub(41, 181, 206);
	glVertex2f(-.87f,-.47f);
	glVertex2f(-.87f,-.53f);
	glVertex2f(-.82f,-.53f);
	glVertex2f(-.82f,-.47f);
	glEnd();

     glBegin(GL_QUADS);
	glColor3ub(41, 181, 206);
	glVertex2f(-.80f,-.47f);
	glVertex2f(-.80f,-.53f);
	glVertex2f(-.75f,-.53f);
	glVertex2f(-.75f,-.47f);
	glEnd();


     glBegin(GL_QUADS);
	glColor3ub(41, 181, 206);
	glVertex2f(-.73f,-.47f);
	glVertex2f(-.73f,-.53f);
	glVertex2f(-.68f,-.53f);
	glVertex2f(-.68f,-.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(41, 181, 206);
	glVertex2f(-.66f,-.47f);
	glVertex2f(-.66f,-.53f);
	glVertex2f(-.61f,-.53f);
	glVertex2f(-.61f,-.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(41, 181, 206);
	glVertex2f(-.59f,-.47f);
	glVertex2f(-.59f,-.53f);
	glVertex2f(-.51f,-.53f);
	glVertex2f(-.51f,-.47f);
	glEnd();
//body//
    glBegin(GL_QUADS);
	glColor3ub(9, 27, 129  );
	glVertex2f(-.9f,-.55f);
	glVertex2f(-.9f,-.65f);
	glVertex2f(-.5f,-.65);
	glVertex2f(-.5f,-.55f);
	glEnd();

//wheel
    glTranslatef(-.82f, -.65f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(9, 9, 9 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

//Wheel 2
    glTranslatef(.25f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(16, 16, 15 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	//Bus2:

    glPushMatrix();
    glTranslatef(bus_position2,0.0f, 0.0f);

	glBegin(GL_POLYGON);
	glColor3ub(90, 99, 17);
	glVertex2f(.95f,-.77f);
	glVertex2f(.55f,-.77f);
	glVertex2f(.55f,-.88f);
	glVertex2f(.95f,-.88f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(9, 177, 42);
	glVertex2f(.95f,-.78f);
	glVertex2f(.55f,-.78f);
	glVertex2f(.55f,-.65f);
	glVertex2f(.95f,-.65f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(15, 244, 252);
	glVertex2f(.56f,-.68f);
	glVertex2f(.56f,-.76f);
	glVertex2f(.67f,-.76f);
	glVertex2f(.67f,-.68f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(15, 244, 252);
	glVertex2f(.69f,-.68f);
	glVertex2f(.69f,-.76f);
	glVertex2f(.75f,-.76f);
	glVertex2f(.75f,-.68f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(15, 244, 252);
	glVertex2f(.77f,-.68f);
	glVertex2f(.77f,-.76f);
	glVertex2f(.84f,-.76f);
	glVertex2f(.84f,-.68f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(15, 244, 252);
	glVertex2f(.86,-.68f);
	glVertex2f(.86f,-.76f);
	glVertex2f(.93f,-.76f);
	glVertex2f(.93f,-.68f);
	glEnd();

	//wheel
    glTranslatef(.63f, -.89f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

//Wheel 2
    glTranslatef(.25f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	glFlush();
	glutSwapBuffers();
}
void evening(){
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

	   float x,y,radius;
    int i;
    int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

    glBegin(GL_QUADS);
    glColor3ub(255, 51, 0 );
	glVertex2f(-1.0f,1.0f);
	glColor3ub(255, 255, 51 );
	glVertex2f(-1.0f,-1.0f);
	glColor3ub(255, 255, 51  );
	glVertex2f(1.0f,-1.0f);
	glColor3ub(255, 51, 0);
	glVertex2f(1.0f,1.0f);
	glEnd();
	////sun
	    glPushMatrix();
    glTranslated(0.30,.50,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(222, 92, 86 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.11;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

    //cloud
      glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	////HIlls
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
	glVertex2f(-0.3f, 0.15);
	glColor3ub(101, 105, 110 );
	glVertex2f(0.0f, .87);
	glVertex2f(0.3f, 0.15);
	glEnd();
	glPushMatrix();
	glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);
	glVertex2f(0.0, 0.87);
	glVertex2f(0.05, 0.75);
	glVertex2f(0.03, 0.73);
	glVertex2f(0.0, 0.75);
	glVertex2f(-0.075,0.69);
	glVertex2f(-0.06,0.70);
	glPopMatrix();

	glEnd();

	//2
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
	glVertex2f(-0.3f, 0.15);
	glVertex2f(-0.6f, .67);
	glVertex2f(-0.9f, 0.15);
	glEnd();
	glPushMatrix();
	glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);
	glVertex2f(-0.6, 0.67);
	glVertex2f(-0.71, 0.48);
	glVertex2f(-0.62, 0.55);
	glVertex2f(-0.6, 0.54);
	glVertex2f(-0.55,0.51);
	glVertex2f(-0.53,0.55);
	glEnd();
	glPopMatrix();
    //3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
	glVertex2f(0.3f, 0.15);
	glVertex2f(0.6f, .67);
	glVertex2f(0.9f, 0.15);
	glEnd();
	glPushMatrix();
	glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);
	glVertex2f(0.6, 0.67);
	glVertex2f(0.71, 0.48);
	glVertex2f(0.62, 0.55);
	glVertex2f(0.6, 0.54);
	glVertex2f(0.55,0.51);
	glVertex2f(0.53,0.55);
	glEnd();
	glPopMatrix();


	//field
    glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(73, 252, 0 );
    glVertex2f(-1.0f, -0.10f);
    glColor3ub(36, 198, 78 );
    glVertex2f(-1.0f, -1.0f);
    glColor3ub(8, 147, 44 );
    glVertex2f(1.0f, -1.0f);
    glColor3ub(54, 186, 60 );
    glVertex2f(1.0f, -.10f);
    glEnd();
    glPopMatrix();

    //windmill
    //stand1
    glBegin(GL_POLYGON);
    glColor3ub(154, 163, 173 );
    glVertex2f(0.595,0.0);
    glVertex2f(0.60,0.45);
    glVertex2f(0.605,0.0);
    glEnd();
	//blades
    //BLADE1
    glPushMatrix();
    glTranslatef(0.6, 0.4, 0.0);
    glRotatef(_angle1, 0.0, 0.0, 1.0);
    glScaled(0.3,0.2,0.0);
    glColor3ub(255,255,254);
    glBegin(GL_LINES);
    glVertex2f(0.0,0.0);
    glVertex2f(0.5,0.0);
    glEnd();
    glPopMatrix();

    ////SECOND BLADE
    glPushMatrix();
    glTranslatef(0.6, 0.4, 0.0);
    glRotatef(_angle1, 0.0, 0.0, 1.0);
    glScaled(0.3,0.2,1.0);
    glColor3ub(255,255,254);
    glBegin(GL_LINES);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.5,0.0);
    glEnd();
    glPopMatrix();

        //motor1
     glPushMatrix();
    glTranslatef(.60f, 0.41f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(9, 31, 55);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.025;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();


    //stand2
    glBegin(GL_POLYGON);
    glColor3ub(154, 163, 173 );
    glVertex2f(0.095,0.05);
    glVertex2f(0.10,0.55);
    glVertex2f(0.105,0.05);
    glEnd();

        //BLADE1
    glPushMatrix();
    glTranslatef(0.10, 0.50, 0.0);
    glRotatef(_angle1, 0.0, 0.0, 1.0);
    glScaled(0.3,0.2,0.0);
    glColor3ub(255,255,254);
    glBegin(GL_LINES);
    glVertex2f(0.0,0.0);
    glVertex2f(0.5,0.0);
    glEnd();
    glPopMatrix();

    ////SECOND BLADE
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.10, 0.50, 0.0);
    glRotatef(_angle1, 0.0, 0.0, 1.0);
    glScaled(0.3,0.2,1.0);
    glColor3ub(255,255,254);
    glBegin(GL_LINES);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.5,0.0);
    glEnd();
    glPopMatrix();
    //motor2
    glPushMatrix();
    glTranslatef(.10f, 0.50f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(9, 31, 55);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.024;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

    //stand3
    glBegin(GL_POLYGON);
    glColor3ub(154, 163, 173 );
    glVertex2f(-0.695,-0.02);
    glVertex2f(-0.70,0.48);
    glVertex2f(-0.705,-0.02);
    glEnd();
        glPushMatrix();
    glTranslatef(-0.70f, 0.42f, 0.0f);
    glRotatef(_angle1, 0.0, 0.0, 1.0);
    glScaled(0.3,0.2,0.0);
    glColor3ub(255,255,254);
    glBegin(GL_LINES);
    glVertex2f(0.0,0.0);
    glVertex2f(0.5,0.0);
    glEnd();
    glPopMatrix();

    ////SECOND BLADE
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-0.70f, 0.42f, 0.0f);
    glRotatef(_angle1, 0.0, 0.0, 1.0);
    glScaled(0.3,0.2,1.0);
    glColor3ub(255,255,254);
    glBegin(GL_LINES);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.5,0.0);
    glEnd();
    glPopMatrix();
    //motor3
    glPushMatrix();
    glTranslatef(-.70f, 0.42f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(9, 31, 55);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.022;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();
   //plane
     glPushMatrix();
  glTranslatef(metro_position1,0.4, 0.0f);


     glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.0f, -0.35f);
    glVertex2f(-0.3f, -0.35f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
    glVertex2f(0.1f, -0.27f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.0f, -0.35f);
    glVertex2f(0.1f, -0.33f);
    glEnd();
     glBegin(GL_TRIANGLES);
	glColor3ub(255, 0, 0);
    glVertex2f(0.1f, -0.27f);
    glVertex2f(0.1f, -0.33f);
    glVertex2f(0.15f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(-0.3f, -0.35f);
    glVertex2f(-0.4f, -0.31f);
    glVertex2f(-0.4f, -0.27f);
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3ub(62, 84, 228);
    glVertex2f(-0.4f, -0.31f);
    glVertex2f(-0.4f, -0.27f);
    glVertex2f(-0.45f, -0.29f);
    glEnd();
 glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(0.07f, -0.28f);
    glVertex2f(0.05f, -0.28f);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.07f, -0.3f);
    glEnd();
     glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(0.03f, -0.27f);
    glVertex2f(0.0f, -0.27f);
    glVertex2f(0.0f, -0.33f);
    glVertex2f(0.03f, -0.33f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.01f, -0.28f);
    glVertex2f(-0.03f, -0.28f);
    glVertex2f(-0.03f, -0.3f);
    glVertex2f(-0.01f, -0.3f);
    glEnd();
     glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.05f, -0.28f);
    glVertex2f(-0.07f, -0.28f);
    glVertex2f(-0.07f, -0.3f);
    glVertex2f(-0.05f, -0.3f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.09f, -0.28f);
    glVertex2f(-0.11f, -0.28f);
    glVertex2f(-0.11f, -0.3f);
    glVertex2f(-0.09f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.13f, -0.28f);
    glVertex2f(-0.15f, -0.28f);
    glVertex2f(-0.15f, -0.3f);
    glVertex2f(-0.13f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.17f, -0.28f);
    glVertex2f(-0.19f, -0.28f);
    glVertex2f(-0.19f, -0.3f);
    glVertex2f(-0.17f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.21f, -0.28f);
    glVertex2f(-0.23f, -0.28f);
    glVertex2f(-0.23f, -0.3f);
    glVertex2f(-0.21f, -0.3f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.25f, -0.28f);
    glVertex2f(-0.27f, -0.28f);
    glVertex2f(-0.27f, -0.3f);
    glVertex2f(-0.25f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.29f, -0.28f);
    glVertex2f(-0.31f, -0.28f);
    glVertex2f(-0.31f, -0.3f);
    glVertex2f(-0.29f, -0.3f);
    glEnd();
    //wings
      glBegin(GL_QUADS);
	glColor3ub(255, 0, 0);
    glVertex2f(-0.15f, -0.32f);
    glVertex2f(-0.2f, -0.42f);
    glVertex2f(-0.15f, -0.42f);
    glVertex2f(-0.1f, -0.33f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(255, 0, 0);
    glVertex2f(-0.36f, -0.27f);
    glVertex2f(-0.43f, -0.2);
    glVertex2f(-0.38f, -0.2f);
    glVertex2f(-0.31f, -0.27f);

    glEnd();



  glPopMatrix();



    glFlush();
	glutSwapBuffers();
}
void night(){
	glLoadIdentity();

	float x, y;
	int i;
	GLfloat radius;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0 );
	glVertex2f(-1.0f,1.0f);
	glColor3ub(41, 21, 131 );
	glVertex2f(-1.0f,-1.0f);
	glColor3ub(0,0,0 );
	glVertex2f(1.0f,-1.0f);
	glColor3ub(42, 4, 69 );
	glVertex2f(1.0f,1.0f);
	glEnd();
//stars

	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex2f(.9,.8); //virgo
	glVertex2f(.90,.73);
	glVertex2f(.73,.8);
	glVertex2f(.76,.84);
	glVertex2f(.62,.65);
	glVertex2f(.64,.8);
	glVertex2f(.57,.84);

	glVertex2f(.47,.98); //capricorn
	glVertex2f(.44,.75);
	glVertex2f(.46,.64);
	glVertex2f(.37,.77);
	glVertex2f(.32,.63);
	glVertex2f(.15,.7);
	glVertex2f(.2,.74);
	glVertex2f(.24,.77);
	glVertex2f(.2,.88);

	glVertex2f(.17,.96);//Leo
	glVertex2f(.1,.92);
	glVertex2f(.03,.83);
	glVertex2f(.08,.78);
	glVertex2f(.01,.81);
	glVertex2f(-.08,.65);
	glVertex2f(-.05,.6);
	glVertex2f(-.15,.53);
	glEnd();

	glTranslatef(-.7,0,0);
	glBegin(GL_POINTS);
	glVertex2f(.47,.98); //capricorn
	glVertex2f(.44,.75);
	glVertex2f(.46,.64);
	glVertex2f(.37,.77);
	glVertex2f(.32,.63);
	glVertex2f(.15,.7);
	glVertex2f(.2,.74);
	glVertex2f(.24,.77);
	glVertex2f(.2,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(-1.5,.1,0);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex2f(.9,.8); //virgo
	glVertex2f(.77,.73);
	glVertex2f(.73,.8);
	glVertex2f(.76,.84);
	glVertex2f(.62,.65);
	glVertex2f(.64,.8);
	glVertex2f(.57,.84);
	glEnd();
	glLoadIdentity();

	glTranslatef(-1.0,-.4,0);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex2f(.17,.96);//Leo
	glVertex2f(.1,.92);
	glVertex2f(.03,.83);
	glVertex2f(.08,.78);
	glVertex2f(.01,.81);
	glVertex2f(-.08,.65);
	glVertex2f(-.05,.6);
	glVertex2f(-.15,.53);
	glEnd();
	glLoadIdentity();

	//moon
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(202, 202, 202);
        x=.3f; y=.75f; radius =.1f;

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

				glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();


	glPushMatrix();
    glTranslatef(cloud_position1,0.0f, 0.0f);

	//cloud 01 starts
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
 glPopMatrix();

	//buildings

//airport building
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.48f,0.1f);
	glVertex2f(-0.48f,-0.25f);
    glVertex2f(0.48f,-0.25f);
	glVertex2f(0.48f,0.1f);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.4f,0.3f);
	glVertex2f(-0.4f,0.0f);
    glVertex2f(0.4f,0.0f);
	glVertex2f(0.4f,0.3f);
	glEnd();

//text AIRPORT
	 glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.2f,0.4f);
	glVertex2f(-0.2f,0.3f);
    glVertex2f(0.15f,0.3f);
	glVertex2f(0.15f,0.4f);
	glEnd();
 glPushMatrix();
    Sprint(-0.12,0.35,text);
    glPopMatrix();

    glBegin(GL_TRIANGLES);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.2f,0.4f);
	glVertex2f(-0.03f,0.6f);
    glVertex2f(0.15f,0.4f);
	glEnd();
	//windows
 glBegin(GL_QUADS);
	glColor3ub(1217, 240, 19);
	glVertex2f(-0.02f,0.25f);
	glVertex2f(-0.02f,0.1f);
    glVertex2f(0.0f,0.1f);
	glVertex2f(0.0f,0.25f);
	glEnd();
 glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.1f,0.25f);
	glVertex2f(0.1f,0.1f);
    glVertex2f(0.2f,0.1f);
	glVertex2f(0.2f,0.25f);
	glEnd();
	 glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.25f,0.25f);
	glVertex2f(0.25f,0.1f);
    glVertex2f(0.35f,0.1f);
	glVertex2f(0.35f,0.25f);
	glEnd();
 glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.25f,0.25f);
	glVertex2f(-0.25f,0.1f);
    glVertex2f(-0.35f,0.1f);
	glVertex2f(-0.35f,0.25f);
	glEnd();
	 glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.1f,0.25f);
	glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.2f,0.1f);
	glVertex2f(-0.2f,0.25f);
	glEnd();
	 glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.48f,0.07f);
	glVertex2f(-0.48f,0.09f);
    glVertex2f(0.48f,0.09f);
	glVertex2f(0.48f,0.07f);
	glEnd();

 glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.1f,0.05f);
	glVertex2f(0.1f,-0.3f);
    glVertex2f(-0.1f,-0.3f);
	glVertex2f(-0.1f,0.05f);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.3f,0.05f);
	glVertex2f(0.3f,-0.15f);
    glVertex2f(0.2f,-0.15f);
	glVertex2f(0.2f,0.05f);
	glEnd();
     glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.32f,0.05f);
	glVertex2f(0.32f,-0.15f);
    glVertex2f(0.34f,-0.15f);
	glVertex2f(0.34f,0.05f);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.36f,0.05f);
	glVertex2f(0.36f,-0.15f);
    glVertex2f(0.44f,-0.15f);
	glVertex2f(0.44f,0.05f);
	glEnd();


	//door

	//building3
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.98f,-.23f);
	glVertex2f(0.87f,-.23f);
    glVertex2f(0.87f,.79f);
	glVertex2f(0.98f,.79f);
	glEnd();
	//building3 window

    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.88f,.75f);
	glVertex2f(0.915f,.75f);
    glVertex2f(0.915f,.71f);
	glVertex2f(0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.88f,.65f);
	glVertex2f(0.915f,.65f);
    glVertex2f(0.915f,.61f);
	glVertex2f(0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.88f,.55f);
	glVertex2f(0.915f,.55f);
    glVertex2f(0.915f,.51f);
	glVertex2f(0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.88f,.45f);
	glVertex2f(0.915f,.45f);
    glVertex2f(0.915f,.41f);
	glVertex2f(0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.88f,.35f);
	glVertex2f(0.915f,.35f);
    glVertex2f(0.915f,.31f);
	glVertex2f(0.88f,.31f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,.15f);
	glVertex2f(0.915f,.15f);
    glVertex2f(0.915f,.11f);
	glVertex2f(0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.88f,.05f);
	glVertex2f(0.915f,.05f);
    glVertex2f(0.915f,.01f);
	glVertex2f(0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.88f,-.05f);
	glVertex2f(0.915f,-.05f);
    glVertex2f(0.915f,-.09f);
	glVertex2f(0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.88f,-.15f);
	glVertex2f(0.915f,-.15f);
    glVertex2f(0.915f,-.19f);
	glVertex2f(0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.75f);
	glVertex2f(0.97f,.75f);
    glVertex2f(0.97f,.71f);
	glVertex2f(0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.65f);
	glVertex2f(0.97f,.65f);
    glVertex2f(0.97f,.61f);
	glVertex2f(0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.55f);
	glVertex2f(0.97f,.55f);
    glVertex2f(0.97f,.51f);
	glVertex2f(0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.45f);
	glVertex2f(0.97f,.45f);
    glVertex2f(0.97f,.41f);
	glVertex2f(0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.35f);
	glVertex2f(0.97f,.35f);
    glVertex2f(0.97f,.31f);
	glVertex2f(0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.25f);
	glVertex2f(0.97f,.25f);
    glVertex2f(0.97f,.21f);
	glVertex2f(0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.15f);
	glVertex2f(0.97f,.15f);
    glVertex2f(0.97f,.11f);
	glVertex2f(0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.05f);
	glVertex2f(0.97f,.05f);
    glVertex2f(0.97f,.01f);
	glVertex2f(0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,-.05f);
	glVertex2f(0.97f,-.05f);
    glVertex2f(0.97f,-.09f);
	glVertex2f(0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,-.15f);
	glVertex2f(0.97f,-.15f);
    glVertex2f(0.97f,-.19f);
	glVertex2f(0.935f,-.19f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.15f,.05f);
	glVertex2f(-0.25f,.05f);
    glVertex2f(-0.25f,-.15f);
	glVertex2f(-0.15f,-.15f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.3f,.05f);
	glVertex2f(-0.32f,.05f);
    glVertex2f(-0.32f,-.15f);
	glVertex2f(-0.3f,-.15f);
	glEnd();

glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.35f,.05f);
	glVertex2f(-0.45f,.05f);
    glVertex2f(-0.45f,-.15f);
	glVertex2f(-0.35f,-.15f);
	glEnd();

	glPopMatrix();
	//building3
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.98f,-.23f);
	glVertex2f(0.87f,-.23f);
    glVertex2f(0.87f,.79f);
	glVertex2f(0.98f,.79f);
	glEnd();
	//building3 window
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,.75f);
	glVertex2f(0.915f,.75f);
    glVertex2f(0.915f,.71f);
	glVertex2f(0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,.65f);
	glVertex2f(0.915f,.65f);
    glVertex2f(0.915f,.61f);
	glVertex2f(0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,.55f);
	glVertex2f(0.915f,.55f);
    glVertex2f(0.915f,.51f);
	glVertex2f(0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,.45f);
	glVertex2f(0.915f,.45f);
    glVertex2f(0.915f,.41f);
	glVertex2f(0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,.35f);
	glVertex2f(0.915f,.35f);
    glVertex2f(0.915f,.31f);
	glVertex2f(0.88f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,.25f);
	glVertex2f(0.915f,.25f);
    glVertex2f(0.915f,.21f);
	glVertex2f(0.88f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,.15f);
	glVertex2f(0.915f,.15f);
    glVertex2f(0.915f,.11f);
	glVertex2f(0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,.05f);
	glVertex2f(0.915f,.05f);
    glVertex2f(0.915f,.01f);
	glVertex2f(0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,-.05f);
	glVertex2f(0.915f,-.05f);
    glVertex2f(0.915f,-.09f);
	glVertex2f(0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,-.15f);
	glVertex2f(0.915f,-.15f);
    glVertex2f(0.915f,-.19f);
	glVertex2f(0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.935f,.75f);
	glVertex2f(0.97f,.75f);
    glVertex2f(0.97f,.71f);
	glVertex2f(0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.935f,.65f);
	glVertex2f(0.97f,.65f);
    glVertex2f(0.97f,.61f);
	glVertex2f(0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.935f,.55f);
	glVertex2f(0.97f,.55f);
    glVertex2f(0.97f,.51f);
	glVertex2f(0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.935f,.45f);
	glVertex2f(0.97f,.45f);
    glVertex2f(0.97f,.41f);
	glVertex2f(0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.935f,.35f);
	glVertex2f(0.97f,.35f);
    glVertex2f(0.97f,.31f);
	glVertex2f(0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.935f,.25f);
	glVertex2f(0.97f,.25f);
    glVertex2f(0.97f,.21f);
	glVertex2f(0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.935f,.15f);
	glVertex2f(0.97f,.15f);
    glVertex2f(0.97f,.11f);
	glVertex2f(0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.935f,.05f);
	glVertex2f(0.97f,.05f);
    glVertex2f(0.97f,.01f);
	glVertex2f(0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.935f,-.05f);
	glVertex2f(0.97f,-.05f);
    glVertex2f(0.97f,-.09f);
	glVertex2f(0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.935f,-.15f);
	glVertex2f(0.97f,-.15f);
    glVertex2f(0.97f,-.19f);
	glVertex2f(0.935f,-.19f);
	glEnd();
	glPopMatrix();
glPushMatrix();
//glRotatef(counter,0.4,counter,-1.0);
//counter+=0.5;
glTranslatef(ship_position1,0.0f, 0.0f);
 glBegin(GL_TRIANGLES);
 //bird 1
	glColor3ub(255, 255, 255);
	glVertex2f(0.32f,0.6f);
	glVertex2f(0.34f,0.65f);
    glVertex2f(0.4f,0.65f);
	glEnd();
	 glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(0.32f,0.6f);
	glVertex2f(0.28f,0.65f);
    glVertex2f(0.22f,0.65f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(224, 224, 224);
	glVertex2f(0.3f,0.6f);
	glVertex2f(0.34f,0.6);
	glVertex2f(0.32f,0.63f);

	glEnd();
	glPopMatrix();
	//building4
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.82f,-.23f);
	glVertex2f(0.71f,-.23f);
    glVertex2f(0.71f,.48f);
	glVertex2f(0.82f,.48f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.81f,.45f);
	glVertex2f(0.72f,.45f);
    glVertex2f(0.72f,.52f);
	glVertex2f(0.81f,.52f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.80f,.52f);
	glVertex2f(0.73f,.52f);
    glVertex2f(0.73f,.59f);
	glVertex2f(0.80f,.59f);
	glEnd();
	//building4 windows
	//middle

	    glBegin(GL_QUADS);
	glColor3ub(255,255,255  );
	glVertex2f(0.76f,.47f);
	glVertex2f(0.77f,.47f);
    glVertex2f(0.77f,.41f);
	glVertex2f(0.76f,.41f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(255,255,255  );
	glVertex2f(0.76f,.37f);
	glVertex2f(0.77f,.37f);
    glVertex2f(0.77f,.31f);
	glVertex2f(0.76f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2f(0.76f,.27f);
	glVertex2f(0.77f,.27f);
    glVertex2f(0.77f,.21f);
	glVertex2f(0.76f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2f(0.76f,.17f);
	glVertex2f(0.77f,.17f);
    glVertex2f(0.77f,.11f);
	glVertex2f(0.76f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2f(0.76f,.07f);
	glVertex2f(0.77f,.07f);
    glVertex2f(0.77f,.01);
	glVertex2f(0.76f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2f(0.76f,-.03f);
	glVertex2f(0.77f,-.03f);
    glVertex2f(0.77f,-.09f);
	glVertex2f(0.76f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,255,255  );
	glVertex2f(0.76f,-.13f);
	glVertex2f(0.77f,-.13f);
    glVertex2f(0.77f,-.19f);
	glVertex2f(0.76f,-.19f);
	glEnd();
	//first row
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.72,.46f);
	glVertex2f(0.75,.46f);
    glVertex2f(0.75,.42f);
	glVertex2f(0.72,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.72,.36f);
	glVertex2f(0.75,.36f);
    glVertex2f(0.75,.32f);
	glVertex2f(0.72,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.72,.26f);
	glVertex2f(0.75,.26f);
    glVertex2f(0.75,.22f);
	glVertex2f(0.72,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.72,.16f);
	glVertex2f(0.75,.16f);
    glVertex2f(0.75,.12f);
	glVertex2f(0.72,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.72,.06f);
	glVertex2f(0.75,.06f);
    glVertex2f(0.75,.02f);
	glVertex2f(0.72,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.72,-.04f);
	glVertex2f(0.75,-.04f);
    glVertex2f(0.75,-.08f);
	glVertex2f(0.72,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.72,-.14f);
	glVertex2f(0.75,-.14f);
    glVertex2f(0.75,-.18f);
	glVertex2f(0.72,-.18f);
	glEnd();
	//second row
	 glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.81,.46f);
	glVertex2f(0.78,.46f);
    glVertex2f(0.78,.42f);
	glVertex2f(0.81,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.81,.36f);
	glVertex2f(0.78,.36f);
    glVertex2f(0.78,.32f);
	glVertex2f(0.81,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.81,.26f);
	glVertex2f(0.78,.26f);
    glVertex2f(0.78,.22f);
	glVertex2f(0.81,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.81,.16f);
	glVertex2f(0.78,.16f);
    glVertex2f(0.78,.12f);
	glVertex2f(0.81,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.81,.06f);
	glVertex2f(0.78,.06f);
    glVertex2f(0.78,.02f);
	glVertex2f(0.81,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19  );
	glVertex2f(0.81,-.04f);
	glVertex2f(0.78,-.04f);
    glVertex2f(0.78,-.08f);
	glVertex2f(0.81,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.81,-.14f);
	glVertex2f(0.78,-.14f);
    glVertex2f(0.78,-.18f);
	glVertex2f(0.81,-.18f);
	glEnd();

	//building5
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.67f,-.23f);
	glVertex2f(0.53f,-.23f);
    glVertex2f(0.53f,.35f);
	glVertex2f(0.67f,.35f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.68f,.29f);
	glVertex2f(0.52f,.29f);
    glVertex2f(0.52f,.33f);
	glVertex2f(0.68f,.33f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.66f,.35f);
	glVertex2f(0.54f,.35f);
    glVertex2f(0.54f,.40f);
	glVertex2f(0.66f,.40f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(43, 99, 129 );
	glVertex2f(0.55f,.40f);
	glVertex2f(0.65f,.40f);
    glVertex2f(0.60f,.50f);
	glEnd();
	//building5 window
    //first window
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.66f,.27f);
	glVertex2f(0.65f,.27f);
    glVertex2f(0.65f,.21f);
	glVertex2f(0.66f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.66f,.17f);
	glVertex2f(0.65f,.17f);
    glVertex2f(0.65f,.11f);
	glVertex2f(0.66f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.66f,.07f);
	glVertex2f(0.65f,.07f);
    glVertex2f(0.65f,.01);
	glVertex2f(0.66f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.66f,-.03f);
	glVertex2f(0.65f,-.03f);
    glVertex2f(0.65f,-.09f);
	glVertex2f(0.66f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.66f,-.13f);
	glVertex2f(0.65f,-.13f);
    glVertex2f(0.65f,-.19f);
	glVertex2f(0.66f,-.19f);
	glEnd();
    //second window
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.61f,.27f);
	glVertex2f(0.60f,.27f);
    glVertex2f(0.60f,.21f);
	glVertex2f(0.61f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19  );
	glVertex2f(0.61f,.17f);
	glVertex2f(0.60f,.17f);
    glVertex2f(0.60f,.11f);
	glVertex2f(0.61f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.61f,.07f);
	glVertex2f(0.60f,.07f);
    glVertex2f(0.60f,.01);
	glVertex2f(0.61f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.61f,-.03f);
	glVertex2f(0.60f,-.03f);
    glVertex2f(0.60f,-.09f);
	glVertex2f(0.61f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19  );
	glVertex2f(0.61f,-.13f);
	glVertex2f(0.60f,-.13f);
    glVertex2f(0.60f,-.19f);
	glVertex2f(0.61f,-.19f);
	glEnd();
    //third window
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.54f,.27f);
	glVertex2f(0.55f,.27f);
    glVertex2f(0.55f,.21f);
	glVertex2f(0.54f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.54f,.17f);
	glVertex2f(0.55f,.17f);
    glVertex2f(0.55f,.11f);
	glVertex2f(0.54f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.54f,.07f);
	glVertex2f(0.55f,.07f);
    glVertex2f(0.55f,.01);
	glVertex2f(0.54f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19  );
	glVertex2f(0.54f,-.03f);
	glVertex2f(0.55f,-.03f);
    glVertex2f(0.55f,-.09f);
	glVertex2f(0.54f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.54f,-.13f);
	glVertex2f(0.55f,-.13f);
    glVertex2f(0.55f,-.19f);
	glVertex2f(0.54f,-.19f);
	glEnd();




	glPopMatrix();




	////////////////////reverse building
	//building3
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.98f,-.23f);
	glVertex2f(-0.87f,-.23f);
    glVertex2f(-0.87f,.79f);
	glVertex2f(-0.98f,.79f);
	glEnd();
	//building3 window
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,.75f);
	glVertex2f(-0.915f,.75f);
    glVertex2f(-0.915f,.71f);
	glVertex2f(-0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,.65f);
	glVertex2f(-0.915f,.65f);
    glVertex2f(-0.915f,.61f);
	glVertex2f(-0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,.55f);
	glVertex2f(-0.915f,.55f);
    glVertex2f(-0.915f,.51f);
	glVertex2f(-0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,.45f);
	glVertex2f(-0.915f,.45f);
    glVertex2f(-0.915f,.41f);
	glVertex2f(-0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,.35f);
	glVertex2f(-0.915f,.35f);
    glVertex2f(-0.915f,.31f);
	glVertex2f(-0.88f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,.25f);
	glVertex2f(-0.915f,.25f);
    glVertex2f(-0.915f,.21f);
	glVertex2f(-0.88f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,.15f);
	glVertex2f(-0.915f,.15f);
    glVertex2f(-0.915f,.11f);
	glVertex2f(-0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,.05f);
	glVertex2f(-0.915f,.05f);
    glVertex2f(-0.915f,.01f);
	glVertex2f(-0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,-.05f);
	glVertex2f(-0.915f,-.05f);
    glVertex2f(-0.915f,-.09f);
	glVertex2f(-0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,-.15f);
	glVertex2f(-0.915f,-.15f);
    glVertex2f(-0.915f,-.19f);
	glVertex2f(-0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.935f,.75f);
	glVertex2f(-0.97f,.75f);
    glVertex2f(-0.97f,.71f);
	glVertex2f(-0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.935f,.65f);
	glVertex2f(-0.97f,.65f);
    glVertex2f(-0.97f,.61f);
	glVertex2f(-0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.935f,.55f);
	glVertex2f(-0.97f,.55f);
    glVertex2f(-0.97f,.51f);
	glVertex2f(-0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.935f,.45f);
	glVertex2f(-0.97f,.45f);
    glVertex2f(-0.97f,.41f);
	glVertex2f(-0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.935f,.35f);
	glVertex2f(-0.97f,.35f);
    glVertex2f(-0.97f,.31f);
	glVertex2f(-0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.935f,.25f);
	glVertex2f(-0.97f,.25f);
    glVertex2f(-0.97f,.21f);
	glVertex2f(-0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.935f,.15f);
	glVertex2f(-0.97f,.15f);
    glVertex2f(-0.97f,.11f);
	glVertex2f(-0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.935f,.05f);
	glVertex2f(-0.97f,.05f);
    glVertex2f(-0.97f,.01f);
	glVertex2f(-0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.935f,-.05f);
	glVertex2f(-0.97f,-.05f);
    glVertex2f(-0.97f,-.09f);
	glVertex2f(-0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.935f,-.15f);
	glVertex2f(-0.97f,-.15f);
    glVertex2f(-0.97f,-.19f);
	glVertex2f(-0.935f,-.19f);
	glEnd();
	glPopMatrix();

	//building4
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.82f,-.23f);
	glVertex2f(-0.71f,-.23f);
    glVertex2f(-0.71f,.48f);
	glVertex2f(-0.82f,.48f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.81f,.45f);
	glVertex2f(-0.72f,.45f);
    glVertex2f(-0.72f,.52f);
	glVertex2f(-0.81f,.52f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.80f,.52f);
	glVertex2f(-0.73f,.52f);
    glVertex2f(-0.73f,.59f);
	glVertex2f(-0.80f,.59f);
	glEnd();
	//building4 windows
	//middle
	    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(-0.76f,.57f);
	glVertex2f(-0.77f,.57f);
    glVertex2f(-0.77f,.51f);
	glVertex2f(-0.76f,.51f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(-0.76f,.47f);
	glVertex2f(-0.77f,.47f);
    glVertex2f(-0.77f,.41f);
	glVertex2f(-0.76f,.41f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(-0.76f,.37f);
	glVertex2f(-0.77f,.37f);
    glVertex2f(-0.77f,.31f);
	glVertex2f(-0.76f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(-0.76f,.27f);
	glVertex2f(-0.77f,.27f);
    glVertex2f(-0.77f,.21f);
	glVertex2f(-0.76f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(-0.76f,.17f);
	glVertex2f(-0.77f,.17f);
    glVertex2f(-0.77f,.11f);
	glVertex2f(-0.76f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(-0.76f,.07f);
	glVertex2f(-0.77f,.07f);
    glVertex2f(-0.77f,.01);
	glVertex2f(-0.76f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2f(-0.76f,-.03f);
	glVertex2f(-0.77f,-.03f);
    glVertex2f(-0.77f,-.09f);
	glVertex2f(-0.76f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2f(-0.76f,-.13f);
	glVertex2f(-0.77f,-.13f);
    glVertex2f(-0.77f,-.19f);
	glVertex2f(-0.76f,-.19f);
	glEnd();
	//first row
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.72,.46f);
	glVertex2f(-0.75,.46f);
    glVertex2f(-0.75,.42f);
	glVertex2f(-0.72,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.72,.36f);
	glVertex2f(-0.75,.36f);
    glVertex2f(-0.75,.32f);
	glVertex2f(-0.72,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.72,.26f);
	glVertex2f(-0.75,.26f);
    glVertex2f(-0.75,.22f);
	glVertex2f(-0.72,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.72,.16f);
	glVertex2f(-0.75,.16f);
    glVertex2f(-0.75,.12f);
	glVertex2f(-0.72,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.72,.06f);
	glVertex2f(-0.75,.06f);
    glVertex2f(-0.75,.02f);
	glVertex2f(-0.72,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.72,-.04f);
	glVertex2f(-0.75,-.04f);
    glVertex2f(-0.75,-.08f);
	glVertex2f(-0.72,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.72,-.14f);
	glVertex2f(-0.75,-.14f);
    glVertex2f(-0.75,-.18f);
	glVertex2f(-0.72,-.18f);
	glEnd();
	//second row
	 glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.81,.46f);
	glVertex2f(-0.78,.46f);
    glVertex2f(-0.78,.42f);
	glVertex2f(-0.81,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.81,.36f);
	glVertex2f(-0.78,.36f);
    glVertex2f(-0.78,.32f);
	glVertex2f(-0.81,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.81,.26f);
	glVertex2f(-0.78,.26f);
    glVertex2f(-0.78,.22f);
	glVertex2f(-0.81,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.81,.16f);
	glVertex2f(-0.78,.16f);
    glVertex2f(-0.78,.12f);
	glVertex2f(-0.81,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.81,.06f);
	glVertex2f(-0.78,.06f);
    glVertex2f(-0.78,.02f);
	glVertex2f(-0.81,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.81,-.04f);
	glVertex2f(-0.78,-.04f);
    glVertex2f(-0.78,-.08f);
	glVertex2f(-0.81,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.81,-.14f);
	glVertex2f(-0.78,-.14f);
    glVertex2f(-0.78,-.18f);
	glVertex2f(-0.81,-.18f);
	glEnd();

	//building5
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.67f,-.23f);
	glVertex2f(-0.53f,-.23f);
    glVertex2f(-0.53f,.35f);
	glVertex2f(-0.67f,.35f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.68f,.29f);
	glVertex2f(-0.52f,.29f);
    glVertex2f(-0.52f,.33f);
	glVertex2f(-0.68f,.33f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.66f,.35f);
	glVertex2f(-0.54f,.35f);
    glVertex2f(-0.54f,.40f);
	glVertex2f(-0.66f,.40f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(43, 99, 129 );
	glVertex2f(-0.55f,.40f);
	glVertex2f(-0.65f,.40f);
    glVertex2f(-0.60f,.50f);
	glEnd();
	//building5 window
    //first window
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.66f,.27f);
	glVertex2f(-0.65f,.27f);
    glVertex2f(-0.65f,.21f);
	glVertex2f(-0.66f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.66f,.17f);
	glVertex2f(-0.65f,.17f);
    glVertex2f(-0.65f,.11f);
	glVertex2f(-0.66f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.66f,.07f);
	glVertex2f(-0.65f,.07f);
    glVertex2f(-0.65f,.01);
	glVertex2f(-0.66f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.66f,-.03f);
	glVertex2f(-0.65f,-.03f);
    glVertex2f(-0.65f,-.09f);
	glVertex2f(-0.66f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.66f,-.13f);
	glVertex2f(-0.65f,-.13f);
    glVertex2f(-0.65f,-.19f);
	glVertex2f(-0.66f,-.19f);
	glEnd();
    //second window
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.61f,.27f);
	glVertex2f(-0.60f,.27f);
    glVertex2f(-0.60f,.21f);
	glVertex2f(-0.61f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.61f,.17f);
	glVertex2f(-0.60f,.17f);
    glVertex2f(-0.60f,.11f);
	glVertex2f(-0.61f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.61f,.07f);
	glVertex2f(-0.60f,.07f);
    glVertex2f(-0.60f,.01);
	glVertex2f(-0.61f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.61f,-.03f);
	glVertex2f(-0.60f,-.03f);
    glVertex2f(-0.60f,-.09f);
	glVertex2f(-0.61f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.61f,-.13f);
	glVertex2f(-0.60f,-.13f);
    glVertex2f(-0.60f,-.19f);
	glVertex2f(-0.61f,-.19f);
	glEnd();
    //third window
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.54f,.27f);
	glVertex2f(-0.55f,.27f);
    glVertex2f(-0.55f,.21f);
	glVertex2f(-0.54f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.54f,.17f);
	glVertex2f(-0.55f,.17f);
    glVertex2f(-0.55f,.11f);
	glVertex2f(-0.54f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.54f,.07f);
	glVertex2f(-0.55f,.07f);
    glVertex2f(-0.55f,.01);
	glVertex2f(-0.54f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.54f,-.03f);
	glVertex2f(-0.55f,-.03f);
    glVertex2f(-0.55f,-.09f);
	glVertex2f(-0.54f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.54f,-.13f);
	glVertex2f(-0.55f,-.13f);
    glVertex2f(-0.55f,-.19f);
	glVertex2f(-0.54f,-.19f);
	glEnd();






	//field
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(73, 252, 0 );
    glVertex2f(-1.0f, -0.23f);
    glColor3ub(36, 198, 78 );
    glVertex2f(-1.0f, -0.32f);
    glColor3ub(8, 147, 44 );
    glVertex2f(1.0f, -0.32f);
    glColor3ub(54, 186, 60 );
    glVertex2f(1.0f, -0.23f);
    glEnd();
    glPopMatrix();



    //road
     glBegin(GL_QUADS);
    glColor3ub(40, 9, 105);
	glVertex2f(-1.0f,-0.32f);
	glVertex2f(-1.0f,-0.59f);
	glVertex2f(-.9f,-0.59f);
	glVertex2f(-0.9f,-0.32f);
	glEnd();
    glPopMatrix();

         glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-1.0f,-0.4f);
	glVertex2f(-1.0f,-0.42f);
	glVertex2f(-.9f,-0.42f);
	glVertex2f(-0.9f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.8f,-0.4f);
	glVertex2f(-0.8f,-0.42f);
	glVertex2f(-0.7f,-0.42f);
	glVertex2f(-0.7f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.6f,-0.4f);
	glVertex2f(-0.6f,-0.42f);
	glVertex2f(-0.5,-0.42f);
	glVertex2f(-0.5f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.4f,-0.4f);
	glVertex2f(-0.4f,-0.42f);
	glVertex2f(-0.3,-0.42f);
	glVertex2f(-0.3f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.2f,-0.4f);
	glVertex2f(-0.2f,-0.42f);
	glVertex2f(-0.1,-0.42f);
	glVertex2f(-0.1f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.0f,-0.4f);
	glVertex2f(0.0f,-0.42f);
	glVertex2f(0.1,-0.42f);
	glVertex2f(0.1f,-0.4f);
	glEnd();


	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.2f,-0.4f);
	glVertex2f(0.2f,-0.42f);
	glVertex2f(0.3,-0.42f);
	glVertex2f(0.3f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.4f,-0.4f);
	glVertex2f(0.4f,-0.42f);
	glVertex2f(0.5,-0.42f);
	glVertex2f(0.5f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.6f,-0.4f);
	glVertex2f(0.6f,-0.42f);
	glVertex2f(0.7,-0.42f);
	glVertex2f(0.7f,-0.4f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.8f,-0.4f);
	glVertex2f(0.8f,-0.42f);
	glVertex2f(0.9,-0.42f);
	glVertex2f(0.9f,-0.4f);
	glEnd();

    //plain
    glPushMatrix();
  glTranslatef(metro_position1,-0.4f, 0.0f);
    glTranslatef(-0.9,metro_position1, 0.0f);



     glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.0f, -0.35f);
    glVertex2f(-0.3f, -0.35f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
    glVertex2f(0.1f, -0.27f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.0f, -0.35f);
    glVertex2f(0.1f, -0.33f);
    glEnd();
     glBegin(GL_TRIANGLES);
	glColor3ub(255, 0, 0);
    glVertex2f(0.1f, -0.27f);
    glVertex2f(0.1f, -0.33f);
    glVertex2f(0.15f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(-0.3f, -0.35f);
    glVertex2f(-0.4f, -0.31f);
    glVertex2f(-0.4f, -0.27f);
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3ub(62, 84, 228);
    glVertex2f(-0.4f, -0.31f);
    glVertex2f(-0.4f, -0.27f);
    glVertex2f(-0.45f, -0.29f);
    glEnd();
 glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(0.07f, -0.28f);
    glVertex2f(0.05f, -0.28f);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.07f, -0.3f);
    glEnd();
     glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(0.03f, -0.27f);
    glVertex2f(0.0f, -0.27f);
    glVertex2f(0.0f, -0.33f);
    glVertex2f(0.03f, -0.33f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.01f, -0.28f);
    glVertex2f(-0.03f, -0.28f);
    glVertex2f(-0.03f, -0.3f);
    glVertex2f(-0.01f, -0.3f);
    glEnd();
     glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.05f, -0.28f);
    glVertex2f(-0.07f, -0.28f);
    glVertex2f(-0.07f, -0.3f);
    glVertex2f(-0.05f, -0.3f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.09f, -0.28f);
    glVertex2f(-0.11f, -0.28f);
    glVertex2f(-0.11f, -0.3f);
    glVertex2f(-0.09f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.13f, -0.28f);
    glVertex2f(-0.15f, -0.28f);
    glVertex2f(-0.15f, -0.3f);
    glVertex2f(-0.13f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.17f, -0.28f);
    glVertex2f(-0.19f, -0.28f);
    glVertex2f(-0.19f, -0.3f);
    glVertex2f(-0.17f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.21f, -0.28f);
    glVertex2f(-0.23f, -0.28f);
    glVertex2f(-0.23f, -0.3f);
    glVertex2f(-0.21f, -0.3f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.25f, -0.28f);
    glVertex2f(-0.27f, -0.28f);
    glVertex2f(-0.27f, -0.3f);
    glVertex2f(-0.25f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.29f, -0.28f);
    glVertex2f(-0.31f, -0.28f);
    glVertex2f(-0.31f, -0.3f);
    glVertex2f(-0.29f, -0.3f);
    glEnd();
    //wings
      glBegin(GL_QUADS);
	glColor3ub(255, 0, 0);
    glVertex2f(-0.15f, -0.32f);
    glVertex2f(-0.2f, -0.42f);
    glVertex2f(-0.15f, -0.42f);
    glVertex2f(-0.1f, -0.33f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(255, 0, 0);
    glVertex2f(-0.36f, -0.27f);
    glVertex2f(-0.43f, -0.2);
    glVertex2f(-0.38f, -0.2f);
    glVertex2f(-0.31f, -0.27f);

    glEnd();



  glPopMatrix();

//lamppost
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.79f, -0.59f);
    glVertex2f(-0.81f, -0.59f);
    glVertex2f(-0.81f, -0.40f);
    glVertex2f(-0.79f, -0.40f);
    glEnd();
    glPushMatrix();
    glTranslated(-0.80,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(217, 240, 19);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

//lamppost2
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.01f, -0.59f);
    glVertex2f(0.01f, -0.59f);
    glVertex2f(0.01f, -0.40f);
    glVertex2f(-0.01f, -0.40f);
    glEnd();
    glPushMatrix();
    glTranslated(0.0,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(217, 240, 19);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();
//lamppost3
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(0.79f, -0.59f);
    glVertex2f(0.81f, -0.59f);
    glVertex2f(0.81f, -0.40f);
    glVertex2f(0.79f, -0.40f);
    glEnd();
       glPushMatrix();
    glTranslated(0.80,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(217, 240, 19);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();




	//Sideroad1
	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-1.0f,-.62f);
	glVertex2f(-1.0f,-.59f);
	glVertex2f(-.8f,-.59f);
	glVertex2f(-.8f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.8f,-.62f);
	glVertex2f(-.8f,-.59f);
	glVertex2f(-.6f,-.59f);
	glVertex2f(-.6f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.6f,-.62f);
	glVertex2f(-.6f,-.59f);
	glVertex2f(-.4f,-.59f);
	glVertex2f(-.4f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.4f,-.62f);
	glVertex2f(-.4f,-.59f);
	glVertex2f(-.2f,-.59f);
	glVertex2f(-.2f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.2f,-.62f);
	glVertex2f(-.2f,-.59f);
	glVertex2f(0.0f,-.59f);
	glVertex2f(0.0f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(0.0f,-.62f);
	glVertex2f(0.0f,-.59f);
	glVertex2f(0.2f,-.59f);
	glVertex2f(0.2f,-.62f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.2f,-.62f);
	glVertex2f(.2f,-.59f);
	glVertex2f(.4f,-.59f);
	glVertex2f(.4f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.4f,-.62f);
	glVertex2f(.4f,-.59f);
	glVertex2f(.6f,-.59f);
	glVertex2f(.6f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.6f,-.62f);
	glVertex2f(.6f,-.59f);
	glVertex2f(.8f,-.59f);
	glVertex2f(.8f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.8f,-.62f);
	glVertex2f(.8f,-.59f);
	glVertex2f(1.0f,-.59f);
	glVertex2f(1.0f,-.62f);
	glEnd();


	//sideroad2
    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-1.0f,-.97f);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-.8f,-1.0f);
	glVertex2f(-.8f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.8f,-.97f);
	glVertex2f(-.8f,-1.0f);
	glVertex2f(-.6f,-1.0f);
	glVertex2f(-.6f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.6f,-.97f);
	glVertex2f(-.6f,-1.0f);
	glVertex2f(-.4f,-1.0f);
	glVertex2f(-.4f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.4f,-.97f);
	glVertex2f(-.4f,-1.0f);
	glVertex2f(-.2f,-1.0f);
	glVertex2f(-.2f,-.97f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.2f,-.97f);
	glVertex2f(-.2f,-1.0f);
	glVertex2f(.0f,-1.0f);
	glVertex2f(.0f,-.97f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.0f,-.97f);
	glVertex2f(.0f,-1.0f);
	glVertex2f(.2f,-1.0f);
	glVertex2f(.2f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.2f,-.97f);
	glVertex2f(.2f,-1.0f);
	glVertex2f(.4f,-1.0f);
	glVertex2f(.4f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.4f,-.97f);
	glVertex2f(.4f,-1.0f);
	glVertex2f(.6f,-1.0f);
	glVertex2f(.6f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.6f,-.97f);
	glVertex2f(.6f,-1.0f);
	glVertex2f(.8f,-1.0f);
	glVertex2f(.8f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.8f,-.97f);
	glVertex2f(.8f,-1.0f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(1.0f,-.97f);
	glEnd();



    //main road
    glBegin(GL_QUADS);
	glColor3ub(122, 132, 147);
	glVertex2f(-1.0f,-.62f);
	glVertex2f(-1.0f,-.97f);
	glVertex2f(1.0f,-.97f);
	glVertex2f(1.0f,-.62f);
	glEnd();

    //road div

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.8f,-.79f);
	glVertex2f(-.8f,-.81f);
	glVertex2f(-.6f,-.81f);
	glVertex2f(-.6f,-.79f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.4f,-.79f);
	glVertex2f(-.4f,-.81f);
	glVertex2f(-.2f,-.81f);
	glVertex2f(-.2f,-.79f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.0f,-.79f);
	glVertex2f(.0f,-.81f);
	glVertex2f(.2f,-.81f);
	glVertex2f(.2f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.4f,-.79f);
	glVertex2f(.4f,-.81f);
	glVertex2f(.6f,-.81f);
	glVertex2f(.6f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.8f,-.79f);
	glVertex2f(.8f,-.81f);
	glVertex2f(1.0f,-.81f);
	glVertex2f(1.0f,-.79f);
	glEnd();

    //bus1
    glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(100, 9, 129 );
	glVertex2f(-.9f,-.45f);
	glVertex2f(-.9f,-.55f);
	glVertex2f(-.5f,-.55);
	glVertex2f(-.5f,-.55f);
	glVertex2f(-.5f,-.45);
	glEnd();

//window
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-.87f,-.47f);
	glVertex2f(-.87f,-.53f);
	glVertex2f(-.82f,-.53f);
	glVertex2f(-.82f,-.47f);
	glEnd();

     glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-.80f,-.47f);
	glVertex2f(-.80f,-.53f);
	glVertex2f(-.75f,-.53f);
	glVertex2f(-.75f,-.47f);
	glEnd();


     glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-.73f,-.47f);
	glVertex2f(-.73f,-.53f);
	glVertex2f(-.68f,-.53f);
	glVertex2f(-.68f,-.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-.66f,-.47f);
	glVertex2f(-.66f,-.53f);
	glVertex2f(-.61f,-.53f);
	glVertex2f(-.61f,-.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-.59f,-.47f);
	glVertex2f(-.59f,-.53f);
	glVertex2f(-.51f,-.53f);
	glVertex2f(-.51f,-.47f);
	glEnd();
//body//
    glBegin(GL_QUADS);
	glColor3ub(69, 136, 142 );
	glVertex2f(-.9f,-.55f);
	glVertex2f(-.9f,-.65f);
	glVertex2f(-.5f,-.65);
	glVertex2f(-.5f,-.55f);
	glEnd();

//wheel
    glTranslatef(-.82f, -.65f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(9, 9, 9 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

//Wheel 2
    glTranslatef(.25f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(16, 16, 15 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	//Bus2:

    glPushMatrix();
    glTranslatef(bus_position2,0.0f, 0.0f);

	glBegin(GL_POLYGON);
	glColor3ub(90, 99, 17);
	glVertex2f(.95f,-.77f);
	glVertex2f(.55f,-.77f);
	glVertex2f(.55f,-.88f);
	glVertex2f(.95f,-.88f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(9, 177, 42);
	glVertex2f(.95f,-.78f);
	glVertex2f(.55f,-.78f);
	glVertex2f(.55f,-.65f);
	glVertex2f(.95f,-.65f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(.56f,-.68f);
	glVertex2f(.56f,-.76f);
	glVertex2f(.67f,-.76f);
	glVertex2f(.67f,-.68f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(.69f,-.68f);
	glVertex2f(.69f,-.76f);
	glVertex2f(.75f,-.76f);
	glVertex2f(.75f,-.68f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(.77f,-.68f);
	glVertex2f(.77f,-.76f);
	glVertex2f(.84f,-.76f);
	glVertex2f(.84f,-.68f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(.86,-.68f);
	glVertex2f(.86f,-.76f);
	glVertex2f(.93f,-.76f);
	glVertex2f(.93f,-.68f);
	glEnd();

	//wheel
    glTranslatef(.63f, -.89f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

//Wheel 2
    glTranslatef(.25f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();
	glFlush();
	glutSwapBuffers();
}

//Functions:


void updatebus1(int value) {

    _move += .02;
    if(_move-1.3 > 1.0)
    {
        _move = -1.0;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(100, updatebus1, 0); //Notify GLUT to call update again in 25 milliseconds
}
void updatebus2(int value) {

    if(bus_position2 <-2.0f)
        bus_position2 = 1.3f;

    bus_position2 -= bus_speed2;

	glutPostRedisplay();


	glutTimerFunc(100, updatebus2, 0);
}



void metro_update1(int value) {

    if(metro_position1 >2.0)
        metro_position1 = -1.5f;

    metro_position1 += metro_speed1;

	glutPostRedisplay();


	glutTimerFunc(50, metro_update1, 0);
}

//cloud
void cloud_update1(int value) {

    if(cloud_position1 >1.8)
        cloud_position1 = -1.0f;

    cloud_position1 += cloud_speed;

	glutPostRedisplay();


	glutTimerFunc(100, cloud_update1, 0);
}
//ship1
void ship_update1(int value) {

    if(ship_position1 <-1.0)
        ship_position1 = 1.0f;

    ship_position1 -= ship_speed1;

	glutPostRedisplay();


	glutTimerFunc(100, ship_update1, 0);
}

void windmill_update(int value) {



    _angle1 += speed;
    if (_angle1 > 360) {
        _angle1 -= 360;
    }
    glutPostRedisplay();
    glutTimerFunc(20, windmill_update, 0);
}



void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'd':
    glutDisplayFunc(Day);
    glutPostRedisplay();
    break;
case 'e':
    glutDisplayFunc(evening);
    glutPostRedisplay();
    break;

case 'n':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv) {
     cout << endl << "*********** City Side AIRPORT ********************" << endl << endl;

    cout << "Press N : FOR NIGHT MODE" << endl << endl;
    cout << "Press E : FOR EVENING MODE" << endl << endl;
    cout << "Press D : FOR DAY MODEw" << endl << endl;

  ;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1200, 800);
	glutCreateWindow("Airport");
	glutDisplayFunc(Day);
    glutKeyboardFunc(handleKeypress);


    glutTimerFunc(100, updatebus1, 0);
    _move = 0.01f;

    glutTimerFunc(100, updatebus2, 0);
    bus_speed2 = 0.02f;




    glutTimerFunc(50, metro_update1, 0);
    metro_speed1 = 0.01f;

    glutTimerFunc(100, ship_update1, 0);
    ship_speed1 = 0.01f;



    glutTimerFunc(100, cloud_update1, 0);
    cloud_speed = 0.015f;


    glutTimerFunc(20, windmill_update, 0);
    init();
	glutMainLoop();
	return 0;
}
