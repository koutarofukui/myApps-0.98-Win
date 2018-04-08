#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	dots.init(200, ofGetWidth() / 2, 20);
	cam.enableMouseInput();
	light.setPosition(ofGetWidth(), 100, 400);
	

}

//--------------------------------------------------------------
void ofApp::update(){
	dots.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofDisableAlphaBlending();
	ofBackgroundGradient(ofColor(0, 0, 0), ofColor(90, 90, 90));
	cam.begin();
	ofEnableLighting();
	ofEnableDepthTest();
	light.enable();

	dots.draw();
	cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'r') {
		dots.init(500, ofGetWidth() / 2, 20);
	}
	else if (key == 'l') {
		dots.drawLines = !dots.drawLines;
	}
	else if (key == 't') {
		dots.drawTriangles = !dots.drawTriangles;
	}
	else if (key == 'd') {
		dots.drawDots = !dots.drawDots;
	}
	else if (key >= 49 && key <= 57) {
		dots.init((key - 48) * 30, ofGetWidth() / 2, 20);
	}

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
