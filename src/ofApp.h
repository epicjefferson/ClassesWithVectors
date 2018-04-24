#pragma once

#include "ofMain.h"
#include "Node.h"

#define AMOUNT 10


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    // This is an example of various ways of using and setting up Classes.
    
    // We'll be using the Node class, which is located in separate files
    // called Node.cpp and Node.h
    
    
    Node firstNode;     // You can create a single node, this is called
                        // "instantiating an object". 
    
    Node node[AMOUNT];      // If you want to make multiple, and you know
                            // how many, you can create an array,
                            // which is basically like a list of a certain size.
    
    vector <Node> vectorNodes;      // If you don't know how many objects you need,
                                    // you can use vectors. Vectors are like lists
                                    // tha can change size.
    
};
