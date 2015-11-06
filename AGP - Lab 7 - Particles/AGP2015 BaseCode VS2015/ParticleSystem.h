#ifndef PARTICLE_SYSTEM_INCLUDE
#define PARTICLE_SYSTEM_INCLUDE

class particleSystem {

	struct particleStruct {
		int numParticles;
		GLfloat pos;
		GLfloat vel;
		GLfloat colour_val;
	};

public:
	particleSystem (const int n);
	
};

#endif //PARTICLE_SYSTEM_INCLUDE
