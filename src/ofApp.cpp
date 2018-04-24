#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Here we call the setup function for our single Node.
    // Notice how the setup includes X/Y coordinates, size, and color.
    firstNode.setup(ofGetWidth()/2, ofGetHeight()/2, 100, 0);
    
    // For the array of Nodes, we'll use a for() loop to run through
    // and set up all of the nodes in the array.
    for(int i = 0; i< AMOUNT; i++){
        
        //set up variables for each Node
        int size = (i + 1) * 1.5;
        int randomX = ofRandom(0, ofGetWidth());
        int randomY = ofRandom(0, ofGetHeight());
        
        // call setup function for each node in the array
        // This setup only has XY coordinates and size.
        node[i].setup(randomX, randomY, size);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // For an individual object, you can call the update function on it
    firstNode.update();
    
    // For both arrays and vectors, we can use for() loops
    for(int i = 0; i< AMOUNT; i++){
        node[i].update();
    }
    
    for(int j = 0;j<vectorNodes.size();j++){
        vectorNodes[j].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // You can call the draw function on an individual object
    firstNode.draw();
    
    // For both arrays and vectors, we can use for() loops
    for(int i = 0; i< AMOUNT; i++){
        node[i].draw();
    }
    
    for(int j = 0; j<vectorNodes.size(); j++){
        vectorNodes[j].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    // delete the first Node in the vector
    if(vectorNodes.size() > 0)
        vectorNodes.erase(vectorNodes.begin());
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    // If the mouse is dragged, create a new Node, set it up,
    // and add it to the vector.
    Node newNode;
    newNode.setup(x, y, 5);
    vectorNodes.push_back(newNode);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    // If you click on a Node from the vector, delecte it.
    for (int i =0; i < vectorNodes.size(); i++) {
        
        // a method oF gives us to check the distance between two coordinates
        float distance = ofDist(x,y, vectorNodes[i].x, vectorNodes[i].y);
        
        if (distance < vectorNodes[i].dim) {
            
            // we need to use an iterator/ reference to the vector position we want to delete
            vectorNodes.erase(vectorNodes.begin()+i);
        }
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
