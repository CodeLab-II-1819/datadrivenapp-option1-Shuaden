#include "ofApp.h"
/*Ran in to an issue I couldn't fix, every so often an error would arise from the chrono page, 
no clue how to fix it but I found havin the chrono page open stopped the error from showing at least temproraroly*/
//--------------------------------------------------------------
void ofApp::setup(){
	//Functions to load in Images on GUI launch.
	twitter.load("Images/Twitter.png");
	totalTweet.load("Images/totalTweet.png");
	money.load("Images/Money.png");
	politics.load("Images/Politics.png");
	paris.load("Images/Paris.png");
	uber.load("Images/Uber.png");
	dreamWorks.load("Images/DreamWorks.png");
	trump.load("Images/Trump.png");
	football.load("Images/Football.png");
	britain.load("Images/Britain.png");
	america.load("Images/America.png");
	console.load("Images/Console.png");
	exit.load("Images/Exit.png");
	ofSetBackgroundColor(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//Main bulk of scriot including rectangles and their parameters and color, as well as images and image size.
	ofSetColor(54, 153, 239);
	ofDrawRectangle(0, 0, 1920, 150);
	twitter.draw(960, 20, 100, 100);
	ofSetColor(54, 153, 239);
	ofDrawRectangle(0,150,200,1080);
	
	ofSetColor(0,0,0);
	ofDrawLine(0,150,200,150);
	ofSetColor(0, 0, 0);
	ofDrawLine(0, 250, 200, 250);
	ofSetColor(0, 0, 0);
	ofDrawLine(0, 350, 200, 350);
	ofSetColor(0, 0, 0);
	ofDrawLine(0, 450, 200, 450);
	ofSetColor(0, 0, 0);
	ofDrawLine(0, 550, 200, 550);
	ofSetColor(0, 0, 0);
	ofDrawLine(0, 650, 200, 650);
	ofSetColor(0, 0, 0);
	ofDrawLine(0, 750, 200, 750); 
	ofSetColor(0, 0, 0);
	ofDrawLine(0, 850, 200, 850);
	ofSetColor(0, 0, 0);
	ofDrawLine(0, 950, 200, 950); 
	ofSetColor(0, 0, 0);
	ofDrawLine(0,1050, 200, 1050);
	ofSetColor(54, 153, 239);
	ofDrawRectangle(250, 200, 1870, 1030);
	totalTweet.draw(0, 150, 200, 100);
	money.draw(0, 250, 200, 100);
	politics.draw(0, 350, 200, 100);
	paris.draw(0, 450, 200, 100);
	uber.draw(0, 550, 200, 100);
	dreamWorks.draw(0, 650, 200, 100);
	trump.draw(0, 750, 200, 100);
	football .draw(0, 850, 200, 100);
	britain.draw(0, 950, 200, 100);
	america.draw(0, 1050, 200, 100);
	console.draw(250, 200, 1870, 300);
	exit.draw(1800, 20, 100, 100);
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
