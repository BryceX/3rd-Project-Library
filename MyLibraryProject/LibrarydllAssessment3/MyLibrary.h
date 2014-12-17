#include "Matrix3x3.h"
#include "Matrix4x4.h"
#include "Vector2D.h"
#include "Vector3D.h"
#include "Vector4D.h"
#ifdef DLL
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

//ALL TESTS COMPLETED



//done
DLLEXPORT float Lerp(float var1, float var2, float percentvalue);
//done
DLLEXPORT float GetRadians(float degrees);
//done
DLLEXPORT float GetDegrees(float radians);
//done
DLLEXPORT unsigned int NextPow2(unsigned int input);
