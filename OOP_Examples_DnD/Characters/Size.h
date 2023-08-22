#ifndef SIZE_H
#define SIZE_H

enum class Size
{
	TINY,
	SMALL,
	MEDIUM,
	LARGE,
	HUGE,
	GARGANTUAN
};

struct SizeInfo
{
	Size size;
	unsigned int length;
	unsigned int width;
};

#endif // SIZE_H