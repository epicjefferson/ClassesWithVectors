//
//  Node.cpp
//  ClassesWithVectors
//
//  Created by epic on 4/19/18.
//
//

#include "Node.h"

Node::Node(){
}

// this is the default setup function

void Node::setup(){
    
    x = ofRandom(0, ofGetWidth());      // give some random positioning
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 1);           // and random speed and direction
    speedY = ofRandom(-1, 1);
    
    dim = 20;
    
    color.set(ofRandom(255),ofRandom(255),ofRandom(255)); // one way of defining digital color is by addressing its 3 components individually (Red, Green, Blue) in a value from 0-255, in this example we're setting each to a random value
}

// alternatively, you can call this setup function if you want to
// set the position and size externally

void Node::setup(int _x, int _y, int _dim){
    x = _x;
    y = _y;
    dim = _dim;
    
    speedX = ofRandom(-1,1);
    speedY = ofRandom(-1,1);
    
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));
}

// another setup function that let's you set the color too
//

void Node::setup(int _x, int _y, int _dim, ofColor _color){
    x = _x;
    y = _y;
    dim = _dim;
    
    speedX = ofRandom(-1,1);
    speedY = ofRandom(-1,1);
    
    color.set(_color);
}

// update position

void Node::update(){
    if(x < 0 ){
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    x+=speedX;
    y+=speedY;
}

// draw to screen

void Node::draw(){
    ofSetColor(color);
    ofDrawCircle(x, y, dim);
}
