//
//  component.hpp
//  CompositePattern
//
//  Created by Juri Kern on 24/02/16.
//  Copyright © 2016 Juri Kern. All rights reserved.
//

#pragma once

#include <list>
#include <string>

class Composite;

class Component {
public:
    ~Component();
    virtual Composite* GetComposite();
};

class Composite : public Component {
public:
    ~Composite();
    virtual void Add(Component*);
    Composite* GetComposite();
    std::list<Component*>::iterator Begin();
    std::list<Component*>::iterator End();
private:
    std::list<Component*> _components;
};

class Leaf : public Component {
public:
    std::string GetMessage();
};
