/*
* @file Test.h
* @brief 
* @author John Taylor
* @date 21-Jul-2022 (18:35:41.279651)
*/


#ifndef TEST_H
#define TEST_H

typedef struct Vector3D
{
 double x;
 double y;
 double z;
}Vector3D;

typedef struct Vector3D *Vector3DHandle

/*
* @brief testFunction
* @param int a 
* @param float b 
* @param void * d 
* @return void 
*/
void testFunction(int a, float b, void * d);

#endif