//
//  Node.hpp
//  ClassesWithVectors
//
//  Created by epic on 4/19/18.
//
//

#ifndef Node_h
#define Node_h

#include "ofMain.h"

class Node {
public:
    void setup();
    void setup(int _x, int _y, int _dim);
    void setup(int _x, int _y, int _dim, ofColor _color);
    void update();
    void draw();
    
    // variables
    float x;
    float y;
    float speedX;
    float speedY;
    int dim;
    ofColor color;
    
    Node();
    
private:
};

#endif /* Node_h */
