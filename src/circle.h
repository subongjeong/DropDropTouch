//
//  circle.h
//  DropDropTouch
//
//  Created by Subong Jeong on 2014. 2. 28..
//
//

#ifndef __DropDropTouch__circle__
#define __DropDropTouch__circle__

#include <ofMain.h>

struct circleStr{
    float radius;
    float life;
    int alpha;
    int x;
    int y;
};

class circle{
public:
    circle();
    void add(float radius, int x, int y);
    void update();
    void draw();
private:
    vector<circleStr> vecList;
};

#endif /* defined(__DropDropTouch__circle__) */
