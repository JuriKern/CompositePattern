//
//  main.cpp
//  CompositePattern
//
//  Created by Juri Kern on 24/02/16.
//  Copyright © 2016 Juri Kern. All rights reserved.
//

#include <iostream>
#include "component.h"
#include <list>

int main(int argc, const char * argv[]) {
    Composite *c = new Composite();
    
    for (int i = 0; i < 10; i++) {
        Leaf* l = new Leaf();
        c->Add(l);
    }
    
    if (c->GetComposite()) {
        for (std::list<Component*>::iterator it = c->Begin(); it != c->End(); it++) {
            std::cout << ((Leaf*)(*it))->GetMessage() << std::endl;
        }
    }
    
    delete c;
    
    return 0;
}
