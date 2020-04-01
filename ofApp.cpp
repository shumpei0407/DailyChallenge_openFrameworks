#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(137, 195, 235);
    ofSetColor(235, 136, 195);
    ofSetFrameRate(100);
    ofSetBoxResolution(100);
    
    move_x = 0;
    move_y = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
//    move_x = move_x + 10;
//    move_y = move_y + 10;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(mouseY/5, mouseX/5, 255,10);
//    ofDrawCircle(move_x, move_y, 100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
