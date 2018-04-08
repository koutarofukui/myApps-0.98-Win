#include "ofApp.h"

//--------------------------------------------------------------
ofApp::ofApp(int argc, char * argv[]) {
	if (argc == 4) {
		windowWidth = ofToInt(argv[1]); // ������(windowWidth)���擾
		windowHeight = ofToInt(argv[2]); // ��O����(windowHeight)���擾
		spoutSenderName = argv[3]; // ��l����(spoutSenderName)���擾
		ofSetWindowShape(windowWidth, windowHeight); // �E�B���h�E�T�C�Y��ύX
	}
}

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetCircleResolution(6);
	spout.init(spoutSenderName, windowWidth, windowHeight);
	fbo.allocate(windowWidth, windowHeight); // Fbo���쐬
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	int linewidth = 50;
	int repeat = 20;

	float time = fmod(ofGetElapsedTimef(), 1.0);

	fbo.begin();
	ofClear(0);
	for (auto i = 0; i < repeat; i++) {
		ofPushStyle();
		ofSetColor((i % 2) * 255, 255);
		ofDrawCircle(fbo.getWidth() / 2, fbo.getHeight() / 2, ofMap(fminf(i + time * 2, repeat), 0, repeat, linewidth * repeat, 0));
		ofPopStyle();
	}
	fbo.end();

	fbo.draw(0, 0);

	// spout��Fbo�̃e�N�X�`���[�𑗐M
	if (spoutSenderName != "") {
		spout.send(fbo.getTexture());
	}
}

//--------------------------------------------------------------
void ofApp::exit() {
	spout.release(); // ofxSpout���I��
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
