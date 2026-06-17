#ifndef EXAMPLE3_H
#define EXAMPLE3_H

struct animal
{
	char name[10];
	float age;
	float height;
};

int writeAnimalFile();
void calculateAverage(int n);
void showAnimalFile();

#endif
#pragma once
