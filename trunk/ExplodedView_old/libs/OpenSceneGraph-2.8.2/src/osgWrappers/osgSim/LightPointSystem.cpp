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
#include <osg/Object>
#include <osgSim/LightPointSystem>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgSim::LightPointSystem::AnimationState)
	I_DeclaringFile("osgSim/LightPointSystem");
	I_EnumLabel(osgSim::LightPointSystem::ANIMATION_ON);
	I_EnumLabel(osgSim::LightPointSystem::ANIMATION_OFF);
	I_EnumLabel(osgSim::LightPointSystem::ANIMATION_RANDOM);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgSim::LightPointSystem)
	I_DeclaringFile("osgSim/LightPointSystem");
	I_BaseType(osg::Object);
	I_Constructor0(____LightPointSystem,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgSim::LightPointSystem &, lps, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____LightPointSystem__C5_LightPointSystem_R1__C5_osg_CopyOp_R1,
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
	I_Method1(void, setIntensity, IN, float, intensity,
	          Properties::NON_VIRTUAL,
	          __void__setIntensity__float,
	          "",
	          "");
	I_Method0(float, getIntensity,
	          Properties::NON_VIRTUAL,
	          __float__getIntensity,
	          "",
	          "");
	I_Method1(void, setAnimationState, IN, osgSim::LightPointSystem::AnimationState, state,
	          Properties::NON_VIRTUAL,
	          __void__setAnimationState__LightPointSystem_AnimationState,
	          "",
	          "");
	I_Method0(osgSim::LightPointSystem::AnimationState, getAnimationState,
	          Properties::NON_VIRTUAL,
	          __LightPointSystem_AnimationState__getAnimationState,
	          "",
	          "");
	I_SimpleProperty(osgSim::LightPointSystem::AnimationState, AnimationState, 
	                 __LightPointSystem_AnimationState__getAnimationState, 
	                 __void__setAnimationState__LightPointSystem_AnimationState);
	I_SimpleProperty(float, Intensity, 
	                 __float__getIntensity, 
	                 __void__setIntensity__float);
END_REFLECTOR

