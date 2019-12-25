#pragma once

#include <glew.h>

class IShape
{
public:

	virtual GLuint VGetVao() const = 0;
};
