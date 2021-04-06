#pragma once

#include <random>

std::random_device rd;
std::mt19937 rng(rd());
std::uniform_int_distribution<int> xDist(0,700);
std::uniform_int_distribution<int> yDist(0,500);
std::uniform_int_distribution<int> startDir(-2,2);