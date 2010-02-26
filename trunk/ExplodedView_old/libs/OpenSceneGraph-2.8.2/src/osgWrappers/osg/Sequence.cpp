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
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Sequence>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::Sequence::LoopMode)
	I_DeclaringFile("osg/Sequence");
	I_EnumLabel(osg::Sequence::LOOP);
	I_EnumLabel(osg::Sequence::SWING);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::Sequence::SequenceMode)
	I_DeclaringFile("osg/Sequence");
	I_EnumLabel(osg::Sequence::START);
	I_EnumLabel(osg::Sequence::STOP);
	I_EnumLabel(osg::Sequence::PAUSE);
	I_EnumLabel(osg::Sequence::RESUME);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Sequence)
	I_DeclaringFile("osg/Sequence");
	I_BaseType(osg::Group);
	I_Constructor0(____Sequence,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Sequence &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Sequence__C5_Sequence_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, x,
	          Properties::VIRTUAL,
	          __void__traverse__NodeVisitor_R1,
	          "Traverse downwards : calls children's accept method with NodeVisitor. ",
	          "");
	I_Method1(bool, addChild, IN, osg::Node *, child,
	          Properties::VIRTUAL,
	          __bool__addChild__Node_P1,
	          "Add Node to Group. ",
	          "If node is not NULL and is not contained in Group then increment its reference count, add it to the child list and dirty the bounding sphere to force it to recompute on next getBound() and return true for success. Otherwise return false. Scene nodes can't be added as child nodes. ");
	I_Method2(bool, addChild, IN, osg::Node *, child, IN, double, t,
	          Properties::VIRTUAL,
	          __bool__addChild__Node_P1__double,
	          "",
	          "");
	I_Method2(bool, insertChild, IN, unsigned int, index, IN, osg::Node *, child,
	          Properties::VIRTUAL,
	          __bool__insertChild__unsigned_int__Node_P1,
	          "Insert Node to Group at specific location. ",
	          "The new child node is inserted into the child list before the node at the specified index. No nodes are removed from the group with this operation. ");
	I_Method3(bool, insertChild, IN, unsigned int, index, IN, osg::Node *, child, IN, double, t,
	          Properties::VIRTUAL,
	          __bool__insertChild__unsigned_int__Node_P1__double,
	          "",
	          "");
	I_Method1(bool, removeChild, IN, osg::Node *, child,
	          Properties::VIRTUAL,
	          __bool__removeChild__Node_P1,
	          "Remove Node from Group. ",
	          "If Node is contained in Group then remove it from the child list, decrement its reference count, and dirty the bounding sphere to force it to recompute on next getBound() and return true for success. If Node is not found then return false and do not change the reference count of the Node. Note, do not override, only override removeChildren(,) is required. ");
	I_Method2(bool, removeChildren, IN, unsigned int, pos, IN, unsigned int, numChildrenToRemove,
	          Properties::VIRTUAL,
	          __bool__removeChildren__unsigned_int__unsigned_int,
	          "Remove children from Group. ",
	          "Note, must be override by subclasses of Group which add per child attributes. ");
	I_Method1(void, setValue, IN, int, value,
	          Properties::NON_VIRTUAL,
	          __void__setValue__int,
	          "value is which child node is to be displayed ",
	          "");
	I_Method0(int, getValue,
	          Properties::NON_VIRTUAL,
	          __int__getValue,
	          "",
	          "");
	I_Method2(void, setTime, IN, unsigned int, frame, IN, double, t,
	          Properties::NON_VIRTUAL,
	          __void__setTime__unsigned_int__double,
	          "Set time in seconds for child. ",
	          "");
	I_Method1(double, getTime, IN, unsigned int, frame,
	          Properties::NON_VIRTUAL,
	          __double__getTime__unsigned_int,
	          "Get time for child. ",
	          "");
	I_Method1(void, setDefaultTime, IN, double, t,
	          Properties::NON_VIRTUAL,
	          __void__setDefaultTime__double,
	          "Set default time in seconds for new child. ",
	          "if t<0, t=0 ");
	I_Method0(double, getDefaultTime,
	          Properties::NON_VIRTUAL,
	          __double__getDefaultTime,
	          "Get default time in seconds for new child. ",
	          "");
	I_Method1(void, setLastFrameTime, IN, double, t,
	          Properties::NON_VIRTUAL,
	          __void__setLastFrameTime__double,
	          "Set time of last frame of last loop, in seconds. ",
	          "if t<= 0, then ignored ");
	I_Method0(double, getLastFrameTime,
	          Properties::NON_VIRTUAL,
	          __double__getLastFrameTime,
	          "Get last frame time in seconds. ",
	          "");
	I_Method0(unsigned int, getNumFrames,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumFrames,
	          "Get number of frames. ",
	          "");
	I_Method3(void, setInterval, IN, osg::Sequence::LoopMode, mode, IN, int, begin, IN, int, end,
	          Properties::NON_VIRTUAL,
	          __void__setInterval__LoopMode__int__int,
	          "Set sequence mode & interval (range of children to be displayed). ",
	          "");
	I_Method3(void, getInterval, IN, osg::Sequence::LoopMode &, mode, IN, int &, begin, IN, int &, end,
	          Properties::NON_VIRTUAL,
	          __void__getInterval__LoopMode_R1__int_R1__int_R1,
	          "Get sequence mode & interval. ",
	          "");
	I_MethodWithDefaults2(void, setDuration, IN, float, speed, , IN, int, nreps, -1,
	                      Properties::NON_VIRTUAL,
	                      __void__setDuration__float__int,
	                      "Set duration: speed-up & number of repeats. ",
	                      "");
	I_Method2(void, getDuration, IN, float &, speed, IN, int &, nreps,
	          Properties::NON_VIRTUAL,
	          __void__getDuration__float_R1__int_R1,
	          "Get duration & number of repeats. ",
	          "");
	I_Method1(void, setMode, IN, osg::Sequence::SequenceMode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMode__SequenceMode,
	          "Set sequence mode. ",
	          "Start/stop & pause/resume. ");
	I_Method0(osg::Sequence::SequenceMode, getMode,
	          Properties::NON_VIRTUAL,
	          __SequenceMode__getMode,
	          "Get sequence mode. ",
	          "");
	I_Method1(void, setSync, IN, bool, sync,
	          Properties::NON_VIRTUAL,
	          __void__setSync__bool,
	          "If false (default), frames will not be sync'd to frameTime. ",
	          "If true, frames will be sync'd to frameTime. ");
	I_Method1(void, getSync, IN, bool &, sync,
	          Properties::NON_VIRTUAL,
	          __void__getSync__bool_R1,
	          "Get sync value. ",
	          "");
	I_Method1(void, setClearOnStop, IN, bool, clearOnStop,
	          Properties::NON_VIRTUAL,
	          __void__setClearOnStop__bool,
	          "If true, show no child nodes after stopping. ",
	          "");
	I_Method1(void, getClearOnStop, IN, bool &, clearOnStop,
	          Properties::NON_VIRTUAL,
	          __void__getClearOnStop__bool_R1,
	          "If true, show no child nodes after stopping. ",
	          "");
	I_ProtectedMethod0(int, _getNextValue,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __int___getNextValue,
	                   "",
	                   "");
	I_ProtectedMethod0(void, _update,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void___update,
	                   "",
	                   "");
	I_SimpleProperty(bool, ClearOnStop, 
	                 0, 
	                 __void__setClearOnStop__bool);
	I_SimpleProperty(double, DefaultTime, 
	                 __double__getDefaultTime, 
	                 __void__setDefaultTime__double);
	I_SimpleProperty(double, LastFrameTime, 
	                 __double__getLastFrameTime, 
	                 __void__setLastFrameTime__double);
	I_SimpleProperty(osg::Sequence::SequenceMode, Mode, 
	                 __SequenceMode__getMode, 
	                 __void__setMode__SequenceMode);
	I_SimpleProperty(bool, Sync, 
	                 0, 
	                 __void__setSync__bool);
	I_IndexedProperty(double, Time, 
	                  __double__getTime__unsigned_int, 
	                  __void__setTime__unsigned_int__double, 
	                  0);
	I_SimpleProperty(int, Value, 
	                 __int__getValue, 
	                 __void__setValue__int);
END_REFLECTOR

