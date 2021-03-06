/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_trimeshkit_meshprocessing_TriMesh */

#ifndef _Included_com_trimeshkit_meshprocessing_TriMesh
#define _Included_com_trimeshkit_meshprocessing_TriMesh

#include <TriMesh.h>
#include "NativeHandle.h"

#ifdef __cplusplus
extern "C" {
#endif

using namespace TriMeshKit::MeshProcessing;

/*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    getVerticesPoints
 * Signature: ()Ljava/util/ArrayList;
 */
JNIEXPORT jfloatArray JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_getInternalVerticesPoints
  (JNIEnv * _env, jobject _obj)
  {
	  TriMesh *inst = getHandle<TriMesh>(_env, _obj);
	  auto pointsVector = inst->getVerticesPoints();

      std::vector<jfloat> pointsJavaVector;

      for (auto const& coordinate : pointsVector) {
           pointsJavaVector.push_back(coordinate);
      }

      jfloatArray result;
      result = _env->NewFloatArray(pointsVector.size());
      if (result == NULL) {
          return NULL; /* out of memory error thrown */
      }

      // move from the temp structure to the java structure
      _env->SetFloatArrayRegion(result, 0, pointsJavaVector.size(), pointsJavaVector.data());
      return result;
  }

/*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    getVerticesNormals
 * Signature: ()Ljava/util/ArrayList;
 */
JNIEXPORT jfloatArray JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_getInternalVerticesNormals
  (JNIEnv * _env, jobject _obj)
  {
	  TriMesh *inst = getHandle<TriMesh>(_env, _obj);
	  
	  auto normalsVector = inst->getVerticesNormals();

      std::vector<jfloat> normalsVectorJavaVector;

      for (auto const& normal : normalsVector) {
          normalsVectorJavaVector.push_back(normal);
      }

      jfloatArray result;
      result = _env->NewFloatArray(normalsVector.size());
      if (result == NULL) {
          return NULL; /* out of memory error thrown */
      }

      // move from the temp structure to the java structure
      _env->SetFloatArrayRegion(result, 0, normalsVectorJavaVector.size(), normalsVectorJavaVector.data());
      return result;
  }

/*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    getFacesIndices
 * Signature: ()Ljava/util/ArrayList;
 */
JNIEXPORT jintArray JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_getInternalFacesIndices
  (JNIEnv * _env, jobject _obj)
  {
	  TriMesh *inst = getHandle<TriMesh>(_env, _obj);
	  auto facesIndices = inst->getFacesIndices();

      std::vector<jint> facesIndicesJavaVector;
      
      for (auto const& vertexIndex : facesIndices) {
          facesIndicesJavaVector.push_back(vertexIndex);
      }
      
      jintArray result;
      result = _env->NewIntArray(facesIndices.size());
      if (result == NULL) {
          return NULL; /* out of memory error thrown */
      }
      
      // move from the temp structure to the java structure
      _env->SetIntArrayRegion(result, 0, facesIndicesJavaVector.size(), facesIndicesJavaVector.data());
      return result;
  }

/*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    getCenter
 * Signature: ()Lcom/trimeshkit/math/Vec3;
 */
JNIEXPORT jfloatArray JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_getCenter
  (JNIEnv * _env, jobject _obj)
  {
	  TriMesh *inst = getHandle<TriMesh>(_env, _obj);
	  
	  auto centerPoint = inst->getCenter();

      jfloatArray result;
      result = _env->NewFloatArray(3);
      if (result == NULL) {
          return NULL; /* out of memory error thrown */
      }
      
      // move from the temp structure to the java structure
      _env->SetFloatArrayRegion(result, 0, centerPoint.size(), centerPoint.data());
      return result;
  }

/*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    getBoundingBox
 * Signature: ()[Lcom/trimeshkit/math/Vec3;
 */
JNIEXPORT jfloatArray JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_getBoundingBox
  (JNIEnv * _env, jobject _obj)
  {
	   TriMesh *inst = getHandle<TriMesh>(_env, _obj);
	   auto boundingBox = inst->getBoundingBox();

       jfloatArray result;
       result = _env->NewFloatArray(6);
       if (result == NULL) {
           return NULL; /* out of memory error thrown */
       }
       
       // move from the temp structure to the java structure
       _env->SetFloatArrayRegion(result, 0, boundingBox.at(0).size(), boundingBox.at(0).data());
       _env->SetFloatArrayRegion(result, 3, boundingBox.at(1).size(), boundingBox.at(1).data());
       
       return result;
  }

/*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    updateVerticesNormals
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_updateVerticesNormals
  (JNIEnv * _env, jobject _obj)
  {
      TriMesh *inst = getHandle<TriMesh>(_env, _obj);
      inst->updateVerticesNormals();
  }

/*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    refresh
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_refresh
  (JNIEnv * _env, jobject _obj, jboolean _refresh)
  {
      TriMesh *inst = getHandle<TriMesh>(_env, _obj);
      inst->refresh(_refresh);
  }

/*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    setDirty
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_setDirty
  (JNIEnv * _env, jobject _obj, jboolean _dirty)
  {
      TriMesh *inst = getHandle<TriMesh>(_env, _obj);
      inst->setDirty(_dirty);
  }

 /*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    getNumberOfFaces
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_getNumberOfFaces
  (JNIEnv* _env, jobject _obj)
  {
      TriMesh *inst = getHandle<TriMesh>(_env, _obj);
      return inst->n_faces();
  }

  
 /*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    isDirty
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_isDirty
(JNIEnv* _env, jobject _obj)
{
    TriMesh *inst = getHandle<TriMesh>(_env, _obj);
    return inst->isDirty();
}
  
/*
 * Class:     com_trimeshkit_meshprocessing_TriMesh
 * Method:    initialise
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_trimeshkit_meshprocessing_TriMesh_initialise
(JNIEnv * _env, jobject _obj)
  {
      TriMesh *inst = new TriMesh();
      setHandle(_env, _obj, inst);
  }

#ifdef __cplusplus
}
#endif
#endif
