#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(30);
    ofEnableAlphaBlending();
    ofSetFullscreen(true);
    ofBackground(0);
    ofSetBackgroundAuto(true);
    ofSetCircleResolution(50);
    bgi.loadImage("test.jpg");
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    /* original
     ofSetColor(255);
     bgi.draw(0,0,ofGetWindowWidth(),ofGetWindowHeight());
     ofSetColor(0);
     Circle.draw();
     */
    glEnable(GL_BLEND);
    glColorMask(false, false, false, true);
    glBlendFunc(GL_SRC_ALPHA, GL_ZERO);
    Circle.draw();
    glColorMask(true,true,true,true);
    glBlendFunc(GL_ONE_MINUS_DST_ALPHA, GL_DST_ALPHA);
    ofSetColor(255,255,255);
    bgi.draw(0,0,ofGetWindowWidth(),ofGetWindowHeight());
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    Circle.add(ofRandom(5,40),x,y);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}
