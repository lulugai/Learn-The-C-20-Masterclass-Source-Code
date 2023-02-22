#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(){

    Shape * shape_ptr = new Circle(10,"Circle1");
    shape_ptr->draw();

    return 0;
}