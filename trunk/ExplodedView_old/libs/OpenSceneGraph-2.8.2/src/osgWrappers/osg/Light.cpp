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
#include <osg/Light>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Vec3>
#include <osg/Vec4>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::Light)
	I_DeclaringFile("osg/Light");
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____Light,
	               "",
	               "");
	I_Constructor1(IN, unsigned int, lightnum,
	               Properties::NON_EXPLICIT,
	               ____Light__unsigned_int,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Light &, light, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Light__C5_Light_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "Return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "Return the name of the attribute's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "Return the name of the attribute's class type. ",
	          "");
	I_Method0(osg::StateAttribute::Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "Return the Type identifier of the attribute's class type. ",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "Return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method0(unsigned int, getMember,
	          Properties::VIRTUAL,
	          __unsigned_int__getMember,
	          "Return the member identifier within the attribute's class type. ",
	          "Used for light number/clip plane number etc. ");
	I_Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, x,
	          Properties::VIRTUAL,
	          __bool__getModeUsage__StateAttribute_ModeUsage_R1,
	          "Return the modes associated with this StateAttribute. ",
	          "");
	I_Method1(void, setLightNum, IN, int, num,
	          Properties::NON_VIRTUAL,
	          __void__setLightNum__int,
	          "Set which OpenGL light to operate on. ",
	          "");
	I_Method0(int, getLightNum,
	          Properties::NON_VIRTUAL,
	          __int__getLightNum,
	          "Get which OpenGL light this osg::Light operates on. ",
	          "");
	I_Method1(void, setAmbient, IN, const osg::Vec4 &, ambient,
	          Properties::NON_VIRTUAL,
	          __void__setAmbient__C5_Vec4_R1,
	          "Set the ambient component of the light. ",
	          "");
	I_Method0(const osg::Vec4 &, getAmbient,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getAmbient,
	          "Get the ambient component of the light. ",
	          "");
	I_Method1(void, setDiffuse, IN, const osg::Vec4 &, diffuse,
	          Properties::NON_VIRTUAL,
	          __void__setDiffuse__C5_Vec4_R1,
	          "Set the diffuse component of the light. ",
	          "");
	I_Method0(const osg::Vec4 &, getDiffuse,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getDiffuse,
	          "Get the diffuse component of the light. ",
	          "");
	I_Method1(void, setSpecular, IN, const osg::Vec4 &, specular,
	          Properties::NON_VIRTUAL,
	          __void__setSpecular__C5_Vec4_R1,
	          "Set the specular component of the light. ",
	          "");
	I_Method0(const osg::Vec4 &, getSpecular,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getSpecular,
	          "Get the specular component of the light. ",
	          "");
	I_Method1(void, setPosition, IN, const osg::Vec4 &, position,
	          Properties::NON_VIRTUAL,
	          __void__setPosition__C5_Vec4_R1,
	          "Set the position of the light. ",
	          "");
	I_Method0(const osg::Vec4 &, getPosition,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getPosition,
	          "Get the position of the light. ",
	          "");
	I_Method1(void, setDirection, IN, const osg::Vec3 &, direction,
	          Properties::NON_VIRTUAL,
	          __void__setDirection__C5_Vec3_R1,
	          "Set the direction of the light. ",
	          "");
	I_Method0(const osg::Vec3 &, getDirection,
	          Properties::NON_VIRTUAL,
	          __C5_Vec3_R1__getDirection,
	          "Get the direction of the light. ",
	          "");
	I_Method1(void, setConstantAttenuation, IN, float, constant_attenuation,
	          Properties::NON_VIRTUAL,
	          __void__setConstantAttenuation__float,
	          "Set the constant attenuation of the light. ",
	          "");
	I_Method0(float, getConstantAttenuation,
	          Properties::NON_VIRTUAL,
	          __float__getConstantAttenuation,
	          "Get the constant attenuation of the light. ",
	          "");
	I_Method1(void, setLinearAttenuation, IN, float, linear_attenuation,
	          Properties::NON_VIRTUAL,
	          __void__setLinearAttenuation__float,
	          "Set the linear attenuation of the light. ",
	          "");
	I_Method0(float, getLinearAttenuation,
	          Properties::NON_VIRTUAL,
	          __float__getLinearAttenuation,
	          "Get the linear attenuation of the light. ",
	          "");
	I_Method1(void, setQuadraticAttenuation, IN, float, quadratic_attenuation,
	          Properties::NON_VIRTUAL,
	          __void__setQuadraticAttenuation__float,
	          "Set the quadratic attenuation of the light. ",
	          "");
	I_Method0(float, getQuadraticAttenuation,
	          Properties::NON_VIRTUAL,
	          __float__getQuadraticAttenuation,
	          "Get the quadratic attenuation of the light. ",
	          "");
	I_Method1(void, setSpotExponent, IN, float, spot_exponent,
	          Properties::NON_VIRTUAL,
	          __void__setSpotExponent__float,
	          "Set the spot exponent of the light. ",
	          "");
	I_Method0(float, getSpotExponent,
	          Properties::NON_VIRTUAL,
	          __float__getSpotExponent,
	          "Get the spot exponent of the light. ",
	          "");
	I_Method1(void, setSpotCutoff, IN, float, spot_cutoff,
	          Properties::NON_VIRTUAL,
	          __void__setSpotCutoff__float,
	          "Set the spot cutoff of the light. ",
	          "");
	I_Method0(float, getSpotCutoff,
	          Properties::NON_VIRTUAL,
	          __float__getSpotCutoff,
	          "Get the spot cutoff of the light. ",
	          "");
	I_Method0(void, captureLightState,
	          Properties::NON_VIRTUAL,
	          __void__captureLightState,
	          "Capture the lighting settings of the current OpenGL state and store them in this object. ",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "Apply the light's state to the OpenGL state machine. ",
	          "");
	I_ProtectedMethod0(void, init,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__init,
	                   "Initialize the light's settings with some decent defaults. ",
	                   "");
	I_SimpleProperty(const osg::Vec4 &, Ambient, 
	                 __C5_Vec4_R1__getAmbient, 
	                 __void__setAmbient__C5_Vec4_R1);
	I_SimpleProperty(float, ConstantAttenuation, 
	                 __float__getConstantAttenuation, 
	                 __void__setConstantAttenuation__float);
	I_SimpleProperty(const osg::Vec4 &, Diffuse, 
	                 __C5_Vec4_R1__getDiffuse, 
	                 __void__setDiffuse__C5_Vec4_R1);
	I_SimpleProperty(const osg::Vec3 &, Direction, 
	                 __C5_Vec3_R1__getDirection, 
	                 __void__setDirection__C5_Vec3_R1);
	I_SimpleProperty(int, LightNum, 
	                 __int__getLightNum, 
	                 __void__setLightNum__int);
	I_SimpleProperty(float, LinearAttenuation, 
	                 __float__getLinearAttenuation, 
	                 __void__setLinearAttenuation__float);
	I_SimpleProperty(unsigned int, Member, 
	                 __unsigned_int__getMember, 
	                 0);
	I_SimpleProperty(const osg::Vec4 &, Position, 
	                 __C5_Vec4_R1__getPosition, 
	                 __void__setPosition__C5_Vec4_R1);
	I_SimpleProperty(float, QuadraticAttenuation, 
	                 __float__getQuadraticAttenuation, 
	                 __void__setQuadraticAttenuation__float);
	I_SimpleProperty(const osg::Vec4 &, Specular, 
	                 __C5_Vec4_R1__getSpecular, 
	                 __void__setSpecular__C5_Vec4_R1);
	I_SimpleProperty(float, SpotCutoff, 
	                 __float__getSpotCutoff, 
	                 __void__setSpotCutoff__float);
	I_SimpleProperty(float, SpotExponent, 
	                 __float__getSpotExponent, 
	                 __void__setSpotExponent__float);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

