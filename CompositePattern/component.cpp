//
//  component.cpp
//  CompositePattern
//
//  Created by Juri Kern on 24/02/16.
//  Copyright © 2016 Juri Kern. All rights reserved.
//

#include "component.h"
#include <iostream>

//std::string Component::GetMessage() {
//    return "Component";
//}

Component::~Component() {
    std::cout << "Delete" << std::endl;
}

Composite::~Composite() {
    for (std::list<Component* >::iterator it = _components.begin(); it != _components.end(); it++) {
        delete *it;
    }
}

Composite* Component::GetComposite() {
    return nullptr;
}

Composite* Composite::GetComposite() {
    return this;
}

std::list<Component*>::iterator Composite::Begin() {
    return this->_components.begin();
}

std::list<Component*>::iterator Composite::End() {
    return this->_components.end();
}

void Composite::Add(Component* component) {
    this->_components.push_back(component);
}

std::string Leaf::GetMessage() {
    return "Leaf";
}


