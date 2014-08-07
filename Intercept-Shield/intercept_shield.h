#ifndef INTERCEPT_SHIELD_H_
#define INTERCEPT_SHIELD_H_

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>

#include "coordinate.h"
#include "safe_zone.h"
#include "rocket.h"

void inputDetails(safe_zone &safe, rocket &incoming_rocket, std::vector<rocket> &patriots);
// Inputs the details of safe zone & incoming rocket & patriot batteries
// Later can incorporate to handle a combination of incoming rockets through use of a vector
// Currently use cin for details then adjust to ifstream




#endif
