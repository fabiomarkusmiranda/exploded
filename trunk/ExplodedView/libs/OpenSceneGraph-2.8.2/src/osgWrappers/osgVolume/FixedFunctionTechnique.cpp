// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osgUtil/CullVisitor>
#include <osgUtil/UpdateVisitor>
#include <osgVolume/FixedFunctionTechnique>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgVolume::FixedFunctionTechnique)
	I_DeclaringFile("osgVolume/FixedFunctionTechnique");
	I_BaseType(osgVolume::VolumeTechnique);
	I_Constructor0(____FixedFunctionTechnique,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgVolume::FixedFunctionTechnique &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____FixedFunctionTechnique__C5_FixedFunctionTechnique_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(void, init,
	          Properties::VIRTUAL,
	          __void__init,
	          "",
	          "");
	I_Method1(void, update, IN, osgUtil::UpdateVisitor *, nv,
	          Properties::VIRTUAL,
	          __void__update__osgUtil_UpdateVisitor_P1,
	          "",
	          "");
	I_Method1(void, cull, IN, osgUtil::CullVisitor *, nv,
	          Properties::VIRTUAL,
	          __void__cull__osgUtil_CullVisitor_P1,
	          "",
	          "");
	I_Method1(void, setNumSlices, IN, unsigned int, numSlices,
	          Properties::NON_VIRTUAL,
	          __void__setNumSlices__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getNumSlices,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumSlices,
	          "",
	          "");
	I_Method0(void, cleanSceneGraph,
	          Properties::VIRTUAL,
	          __void__cleanSceneGraph,
	          "Clean scene graph from any terrain technique specific nodes. ",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__traverse__osg_NodeVisitor_R1,
	          "Traverse the terrain subgraph. ",
	          "");
	I_SimpleProperty(unsigned int, NumSlices, 
	                 0, 
	                 __void__setNumSlices__unsigned_int);
END_REFLECTOR

