#ifndef PARTICLE
#define PARTICLE

#include "ofMain.h"

class Particle : public ofPoint {
public:
    
    Particle();
    
    void    addForce( ofPoint _force );
    
    void    addRepulsionForce(ofPoint p, float radius, float scale);
    void    addAttractionForce(ofPoint p, float radius, float scale);
    void    addRepulsionForce(Particle *p, float radius, float scale);
    void    addAttractionForce(Particle *p, float radius, float scale);
    void    addClockwiseForce(Particle *p, float radius, float scale);
    void    addCounterClockwiseForce(Particle *p, float radius, float scale);
    
    void    update();
    void    draw();

    float   damping;
    float   size;
    
    bool    bFixed;
    
private:
    ofPoint vel;
    ofPoint acc;
};

#endif
