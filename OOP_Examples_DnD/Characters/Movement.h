#ifndef MOVEMENT_H
#define MOVEMENT_H

enum movementType
{
	walk,
	fly,
	swim,
	climb,
	burrow
};

struct Movement
{
	movementType type;
	unsigned int speed;
};

#endif // MOVEMENT_H