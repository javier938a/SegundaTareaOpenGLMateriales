#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//Carlos Javier Ochoa Torres
//Jacob Isaac Albarenga Menjibar
//Definiendo variable que se modificara cada vez que se aplica un color de material diferente
int tipoMaterial=0;
int ancho=800;
int alto=600;
GLfloat punto_luz[3];

void init(void)
{ 
        punto_luz[0]=1.0;
        punto_luz[1]=1.0;
        punto_luz[2]=1.0;
	// Activamos la fuente de luz
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0); //Activamos las luces en 0
        glEnable(GL_LIGHT5); //Activamos las luces en 0
	glDepthFunc(GL_LESS); //comparación de profundidad
	glEnable(GL_DEPTH_TEST); //activa GL_DEPTH_TEST	
	glLightfv(GL_LIGHT0,GL_POSITION,punto_luz);

}

void AplicarMaterial(GLfloat mat_ambient[],GLfloat mat_diffuse[],GLfloat mat_specular[],GLfloat shinness[]){//Creando la funcion que recibe como parametro los diferentes materiales de color de material ambiente diffusse specular shiness
      	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
        glMaterialfv(GL_FRONT, GL_SHININESS, shinness);
}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
	// Activamos la matriz de proyeccion.
	glMatrixMode(GL_PROJECTION);
	// "limpiamos" esta con la matriz identidad.
	glLoadIdentity();
        //gluPerspective(45.0f, (GLfloat)w/(GLfloat)h, 5.0f, -20.0f);
	// Usamos proyeccion ortogonal
	 //glFrustum(-1.0,1.0,-1.0,1.0,1.5,20.0);//estableciendo la proyeccion ortogonal
	 glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	// Activamos la matriz de modelado/visionado.
	glMatrixMode(GL_MODELVIEW);
	// "Limpiamos" la matriz
	glLoadIdentity();
	ancho = w;
        alto = h;
}
void AplicarMaterial(int tipoMat){//Funcion que me aplicara material a la efera
   GLfloat mat_ambient[3];
   GLfloat mat_diffuse[3];
   GLfloat mat_specular[3];
   GLfloat shinness[1];
    switch(tipoMat){
         case 1:
            //Material ambiente
            mat_ambient[0]=0.19125;
            mat_ambient[1]=0.0735;
            mat_ambient[2]=0.0225;
            //material Diffuse
            mat_diffuse[0]=0.7038;
            mat_diffuse[1]=0.27048;
            mat_diffuse[2]=0.0828;
            //material specular
            mat_specular[0]=0.256777;
	    mat_specular[1]=0.137622;
            mat_specular[2]=0.086014; 
           //material shinnes
            shinness[0]=0.1;
            AplicarMaterial(mat_ambient,mat_diffuse,mat_specular,shinness);
            cout<<"Color tipo 1"<<endl;
            break;
         case 2:
             //Material ambiente
            mat_ambient[0]=0.0;
            mat_ambient[1]=0.0;
            mat_ambient[2]=0.0;
            //material Diffuse
            mat_diffuse[0]=0.5;
            mat_diffuse[1]=0.0;
            mat_diffuse[2]=0.0;
            //material specular
            mat_specular[0]=0.7;
	    mat_specular[1]=0.6;
            mat_specular[2]=0.6; 
           //material shinnes
            shinness[0]=0.25;
            AplicarMaterial(mat_ambient,mat_diffuse,mat_specular,shinness);
            cout<<"Color tipo 2"<<endl;
            break;
         case 3:
             //Material ambiente
            mat_ambient[0]=0.24725;
            mat_ambient[1]=0.1995;
            mat_ambient[2]=0.0745;
            //material Diffuse
            mat_diffuse[0]=0.75164;
            mat_diffuse[1]=0.60648;
            mat_diffuse[2]=0.22648;
            //material specular
            mat_specular[0]=0.628281;
	    mat_specular[1]=0.555802;
            mat_specular[2]=0.366065; 
           //material shinnes
            shinness[0]=0.4;
            AplicarMaterial(mat_ambient,mat_diffuse,mat_specular,shinness);
            cout<<"Color tipo 3"<<endl;
            break;
         case 4:
             //Material ambiente
            mat_ambient[0]=0.329412;
            mat_ambient[1]=0.223529;
            mat_ambient[2]=0.027451;
            //material Diffuse
            mat_diffuse[0]=0.780392;
            mat_diffuse[1]=0.568627;
            mat_diffuse[2]=0.113725;
            //material specular
            mat_specular[0]=0.992157;
	    mat_specular[1]=0.941176;
            mat_specular[2]=0.807843; 
           //material shinnes
            shinness[0]=0.21794872;
            AplicarMaterial(mat_ambient,mat_diffuse,mat_specular,shinness);
            cout<<"Color tipo 4"<<endl;
            break;
         case 5:
             //Material ambiente
            mat_ambient[0]=0.19225;
            mat_ambient[1]=0.19225;
            mat_ambient[2]=0.19225;
            //material Diffuse
            mat_diffuse[0]=0.50754;
            mat_diffuse[1]=0.50754;
            mat_diffuse[2]=0.50754;
            //material specular
            mat_specular[0]=0.508273;
	    mat_specular[1]=0.508273;
            mat_specular[2]=0.508273; 
           //material shinnes
            shinness[0]=0.4;
            AplicarMaterial(mat_ambient,mat_diffuse,mat_specular,shinness);
            cout<<"Color tipo 5"<<endl;
            break;
           }
}


void display(void)
{
        glLightfv(GL_LIGHT0,GL_POSITION,punto_luz);//UBICANDO EL PUNTO DE LUZ en las coordenadas "x", "y" ,"z" en el vector Punto de luz el cual se modificara cuando se de clic en la ventana  
	// "Limpiamos" el frame buffer con el color de "Clear", en este
	// caso negro.
       
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode( GL_MODELVIEW_MATRIX );
	glLoadIdentity();
	glPushMatrix();
	//setMaterial
        
        AplicarMaterial(tipoMaterial);//Aplicando material a la efera 
	glutSolidSphere (0.5, 160, 160);//Dibujando la efera solida

//glutWireSphere(2.0,150,150); 
	glFlush();
}
void raton(int button, int stute, int x,int y){
    GLfloat tras_x1 = -1*(float(ancho)/2-float(x))/(float(ancho)/2);//convirtiendo las coordenadas x a coordenadas entre cero y 1
    GLfloat tras_y1 = (float(alto)/2 - float(y))/(float(alto)/2);//convirtiendo y a coordenadas entre 0 y 1
 cout<<"button: "<<button<<" stute: "<<stute<<" x: "<<x<<" y: "<<y<<endl; 
 if(button == GLUT_LEFT_BUTTON && stute == GLUT_UP){//programando el boton izquierdo de tal forma que cuando de clic en un punto de luz se ubique en la coordenada "x" y "y" que el metodo raton recibe como parametro
    punto_luz[0]=tras_x1;//ubicando la posision y en la posision 0 de el vector punto_luz
    punto_luz[1] = tras_y1;//ubicando la posision y en la posision 1 de el vector punto_luz
    punto_luz[2] = 0.5;//Estableciendo un valor fijo de 0.5 en la posision 2 que le corresponde a la coorenada "Z" 
    display();//llamando a display para que redibuje la efera en el espacio y coloque la luz en las coordenadas obtenidas de raton
   cout<<"punto en x "<<tras_x1<<"punto en y: "<<tras_y1<<endl;
   cout<<"he liberado el boton izquierdo"<<endl;
 }

}

// Función para controlar teclas normales del teclado.
void keyboard(unsigned char key, int x, int y)
{
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {
          case 'c':
	  case 'C':
             tipoMaterial=1;//Modificando variable
             cout<<"Color cooper"<<endl;
          break;
          case 'r':
          case 'R':
             tipoMaterial=2;//Modificando variable
             cout<<"Color Red plastic"<<endl;
          break;
          case 'g':
          case 'G':
             tipoMaterial=3;//Modificando variable
             cout<<"Color gold"<<endl;
          break;
          case 'b':
          case 'B':
            tipoMaterial=4;//Modificando variable
            cout<<"Color Brass"<<endl;
            break;
          case 's':
          case 'S':
            tipoMaterial=5;//Modificando variable
            cout<<"color Silver"<<endl;
          break;
          case 'Q':     
	  case 'q':
          exit(0);			// exit
    }
    glutPostRedisplay();
}
int main(int argc, char **argv)
{
	// Inicializo OpenGL
	glutInit(&argc, argv);
	// Activamos buffer simple y colores del tipo RGB
	glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH);
	// Definimos una ventana de medidas 800 x 600 como ventana
	// de visualizacion en pixels
	glutInitWindowSize (ancho, alto);
	// Posicionamos la ventana en la esquina superior izquierda de
	// la pantalla.
	glutInitWindowPosition (0, 0);
	// Creamos literalmente la ventana y le adjudicamos el nombre que se
	// observara en su barra de titulo.
	glutCreateWindow ("efera de colores con materiales");
	// Inicializamos el sistema
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
        glutKeyboardFunc(keyboard);
        glutMouseFunc(raton);
	glutMainLoop();
	return 0;
}
