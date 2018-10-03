#pragma once

#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include "glm/glm.hpp"
#include "utilities.h"
#include "sceneStructs.h"

using namespace std;

class Scene {
private:
    ifstream fp_in;
    int loadMaterial(string materialid);
    int loadGeom(string objectid);
    int loadCamera();
public:
    Scene(string filename);
	~Scene();

    std::vector<Geom> geoms;
	std::vector<Triangle*> objs; // vector of indexes of geoms that are OBJs
    std::vector<Material> materials;
    RenderState state;
};
