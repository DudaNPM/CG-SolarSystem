#include <stdio.h>
#include <vector>

#include "ponto.h"

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glew.h>
#include "GL/glut.h"
#endif

using namespace std;

class VBO {
private:
	GLuint vertices;
	GLuint verticeCount;
public:
	VBO(vector<Ponto> pontos);
	void prepareData(vector<Ponto> pontos);
	void draw();
};