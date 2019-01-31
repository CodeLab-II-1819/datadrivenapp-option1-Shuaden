#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	//Declaration of my Images
	ofImage twitter;
	ofImage totalTweet;
	ofImage money;
	ofImage politics;
	ofImage paris;
	ofImage uber;
	ofImage dreamWorks;
	ofImage trump;
	ofImage britain;
	ofImage america;
	ofImage football;
	ofImage console;
	ofImage exit;

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
		
};
