//
//  circle.cpp
//  DropDropTouch
//
//  Created by Subong Jeong on 2014. 2. 28..
//
//

#include "circle.h"

circle::circle(){

}

void circle::add(float radius, int x, int y){
    circleStr tmp;
    tmp.radius = radius;
    tmp.alpha  = ofRandom(0, 150);//ofRandom(230, 255);
    tmp.life   = ofGetElapsedTimeMillis();
    tmp.x      = x+ofRandom(-40,40);
    tmp.y      = y+ofRandom(-40,40);
    vecList.push_back(tmp);
}

void circle::draw(){
    if(vecList.size() > 0){
        for(int i=0; i<vecList.size(); i++){
            if(ofGetElapsedTimeMillis() - vecList[i].life >= 5000 &&
               vecList[i].alpha <= 255){
                vecList[i].alpha += 5;
                
                /*
                 vecList[i].alpha => 0){
                 vecList[i].alpha -= 5;
                 */
            }
            ofSetColor(255,255,255,vecList[i].alpha);
            ofCircle(vecList[i].x, vecList[i].y, vecList[i].radius);
        }
    }
}

