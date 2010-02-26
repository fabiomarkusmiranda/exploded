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

#include <osg/Camera>
#include <osg/CopyOp>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/State>
#include <osg/Vec4>
#include <osgSim/OverlayNode>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgSim::OverlayNode::OverlayTechnique)
	I_DeclaringFile("osgSim/OverlayNode");
	I_EnumLabel(osgSim::OverlayNode::OBJECT_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY);
	I_EnumLabel(osgSim::OverlayNode::VIEW_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY);
	I_EnumLabel(osgSim::OverlayNode::VIEW_DEPENDENT_WITH_PERSPECTIVE_OVERLAY);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgSim::OverlayNode)
	I_DeclaringFile("osgSim/OverlayNode");
	I_BaseType(osg::Group);
	I_ConstructorWithDefaults1(IN, osgSim::OverlayNode::OverlayTechnique, technique, osgSim::OverlayNode::OBJECT_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY,
	                           Properties::NON_EXPLICIT,
	                           ____OverlayNode__OverlayTechnique,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, const osgSim::OverlayNode &, es, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____OverlayNode__C5_OverlayNode_R1__C5_osg_CopyOp_R1,
	                           "",
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
	          __void__traverse__osg_NodeVisitor_R1,
	          "Traverse downwards : calls children's accept method with NodeVisitor. ",
	          "");
	I_Method1(void, setOverlayTechnique, IN, osgSim::OverlayNode::OverlayTechnique, technique,
	          Properties::NON_VIRTUAL,
	          __void__setOverlayTechnique__OverlayTechnique,
	          "",
	          "");
	I_Method0(osgSim::OverlayNode::OverlayTechnique, getOverlayTechnique,
	          Properties::NON_VIRTUAL,
	          __OverlayTechnique__getOverlayTechnique,
	          "",
	          "");
	I_Method1(void, setRenderTargetImplementation, IN, osg::Camera::RenderTargetImplementation, impl,
	          Properties::NON_VIRTUAL,
	          __void__setRenderTargetImplementation__osg_Camera_RenderTargetImplementation,
	          "Set the implementation to be used when creating the overlay texture. ",
	          "");
	I_Method1(void, setOverlaySubgraph, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__setOverlaySubgraph__osg_Node_P1,
	          "Set the overlay subgraph which will be rendered to texture. ",
	          "");
	I_Method0(osg::Node *, getOverlaySubgraph,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__getOverlaySubgraph,
	          "Get the overlay subgraph which will be rendered to texture. ",
	          "");
	I_Method0(const osg::Node *, getOverlaySubgraph,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Node_P1__getOverlaySubgraph,
	          "Get the const overlay subgraph which will be render to texture. ",
	          "");
	I_Method0(void, dirtyOverlayTexture,
	          Properties::NON_VIRTUAL,
	          __void__dirtyOverlayTexture,
	          "Inform the OverlayNode that the overlay texture needs to be updated. ",
	          "");
	I_Method1(void, setContinuousUpdate, IN, bool, update,
	          Properties::NON_VIRTUAL,
	          __void__setContinuousUpdate__bool,
	          "Set whether the OverlayNode should update the overlay texture on every frame. ",
	          "");
	I_Method0(bool, getContinuousUpdate,
	          Properties::NON_VIRTUAL,
	          __bool__getContinuousUpdate,
	          "Get whether the OverlayNode should update the overlay texture on every frame. ",
	          "");
	I_Method1(void, setOverlayBaseHeight, IN, double, baseHeight,
	          Properties::NON_VIRTUAL,
	          __void__setOverlayBaseHeight__double,
	          "Set the base height that the overlay subgraph will be projected down to. ",
	          "Normally you'll set this to just below ground level, if you set it too high then the overlay texture can end up being clipped in certain viewing directions, while if its too low then there will be a limit to how close you can get to the terrain before pixaltion becomes an issue. ");
	I_Method0(double, getOverlayBaseHeight,
	          Properties::NON_VIRTUAL,
	          __double__getOverlayBaseHeight,
	          "Get the base height that the overlay subgraph will be projected down to. ",
	          "");
	I_Method1(void, setOverlayClearColor, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setOverlayClearColor__C5_osg_Vec4_R1,
	          "Set the clear color to use when rendering the overlay subgraph. ",
	          "");
	I_Method0(const osg::Vec4 &, getOverlayClearColor,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec4_R1__getOverlayClearColor,
	          "Get the clear color to use when rendering the overlay subgraph. ",
	          "");
	I_Method1(void, setTexEnvMode, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__setTexEnvMode__GLenum,
	          "Set the TexEnv mode used to combine the overlay texture with the base color/texture of the OverlayNode's decorate subgraph. ",
	          "");
	I_Method0(GLenum, getTexEnvMode,
	          Properties::NON_VIRTUAL,
	          __GLenum__getTexEnvMode,
	          "Get the TexEnv mode used to combine the overlay texture with the base color/texture of the OverlayNode's decorate subgraph. ",
	          "");
	I_Method1(void, setOverlayTextureUnit, IN, unsigned int, unit,
	          Properties::NON_VIRTUAL,
	          __void__setOverlayTextureUnit__unsigned_int,
	          "Set the texture unit that the texture should be assigned to. ",
	          "");
	I_Method0(unsigned int, getOverlayTextureUnit,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getOverlayTextureUnit,
	          "Get the texture unit that the texture should be assigned to. ",
	          "");
	I_Method1(void, setOverlayTextureSizeHint, IN, unsigned int, size,
	          Properties::NON_VIRTUAL,
	          __void__setOverlayTextureSizeHint__unsigned_int,
	          "Set the texture size hint. ",
	          "The size hint is used to request a texture of specified size. ");
	I_Method0(unsigned int, getOverlayTextureSizeHint,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getOverlayTextureSizeHint,
	          "Get the texture size hint. ",
	          "");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ",
	          "");
	I_Method1(void, resizeGLObjectBuffers, IN, unsigned, int,
	          Properties::VIRTUAL,
	          __void__resizeGLObjectBuffers__unsigned,
	          "Resize any per context GLObject buffers to specified size. ",
	          "");
	I_MethodWithDefaults1(void, releaseGLObjects, IN, osg::State *, x, 0,
	                      Properties::VIRTUAL,
	                      __void__releaseGLObjects__osg_State_P1,
	                      "If State is non-zero, this function releases any associated OpenGL objects for the specified graphics context. ",
	                      "Otherwise, releases OpenGL objexts for all graphics contexts. ");
	I_ProtectedMethod0(void, init,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__init,
	                   "",
	                   "");
	I_ProtectedMethod0(void, init_OBJECT_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__init_OBJECT_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY,
	                   "",
	                   "");
	I_ProtectedMethod0(void, init_VIEW_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__init_VIEW_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY,
	                   "",
	                   "");
	I_ProtectedMethod0(void, init_VIEW_DEPENDENT_WITH_PERSPECTIVE_OVERLAY,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__init_VIEW_DEPENDENT_WITH_PERSPECTIVE_OVERLAY,
	                   "",
	                   "");
	I_ProtectedMethod1(void, traverse_OBJECT_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY, IN, osg::NodeVisitor &, nv,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__traverse_OBJECT_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY__osg_NodeVisitor_R1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, traverse_VIEW_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY, IN, osg::NodeVisitor &, nv,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__traverse_VIEW_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY__osg_NodeVisitor_R1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, traverse_VIEW_DEPENDENT_WITH_PERSPECTIVE_OVERLAY, IN, osg::NodeVisitor &, nv,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__traverse_VIEW_DEPENDENT_WITH_PERSPECTIVE_OVERLAY__osg_NodeVisitor_R1,
	                   "",
	                   "");
	I_ProtectedMethod0(void, updateMainSubgraphStateSet,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__updateMainSubgraphStateSet,
	                   "",
	                   "");

	I_SimpleProperty(bool, ContinuousUpdate, 
	                 __bool__getContinuousUpdate, 
	                 __void__setContinuousUpdate__bool);
	I_SimpleProperty(double, OverlayBaseHeight, 
	                 __double__getOverlayBaseHeight, 
	                 __void__setOverlayBaseHeight__double);
	I_SimpleProperty(const osg::Vec4 &, OverlayClearColor, 
	                 __C5_osg_Vec4_R1__getOverlayClearColor, 
	                 __void__setOverlayClearColor__C5_osg_Vec4_R1);
	I_SimpleProperty(osg::Node *, OverlaySubgraph, 
	                 __osg_Node_P1__getOverlaySubgraph, 
	                 __void__setOverlaySubgraph__osg_Node_P1);
	I_SimpleProperty(osgSim::OverlayNode::OverlayTechnique, OverlayTechnique, 
	                 __OverlayTechnique__getOverlayTechnique, 
	                 __void__setOverlayTechnique__OverlayTechnique);
	I_SimpleProperty(unsigned int, OverlayTextureSizeHint, 
	                 __unsigned_int__getOverlayTextureSizeHint, 
	                 __void__setOverlayTextureSizeHint__unsigned_int);
	I_SimpleProperty(unsigned int, OverlayTextureUnit, 
	                 __unsigned_int__getOverlayTextureUnit, 
	                 __void__setOverlayTextureUnit__unsigned_int);
	I_SimpleProperty(osg::Camera::RenderTargetImplementation, RenderTargetImplementation, 
	                 0, 
	                 __void__setRenderTargetImplementation__osg_Camera_RenderTargetImplementation);
	I_SimpleProperty(GLenum, TexEnvMode, 
	                 __GLenum__getTexEnvMode, 
	                 __void__setTexEnvMode__GLenum);
	I_SimpleProperty(bool, ThreadSafeRefUnref, 
	                 0, 
	                 __void__setThreadSafeRefUnref__bool);
END_REFLECTOR

