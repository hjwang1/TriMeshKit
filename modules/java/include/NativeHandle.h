#ifndef _NATIVE_HANDLE_H_INCLUDED_
#define _NATIVE_HANDLE_H_INCLUDED_

#include <jni.h>

jfieldID getHandleField(JNIEnv *env, jobject obj);


template <typename T>
T *getHandle(JNIEnv *env, jobject obj)
{
    jlong handle = env->GetLongField(obj, getHandleField(env, obj));
    return reinterpret_cast<T *>(handle);
}

template <typename T>
void setHandle(JNIEnv *env, jobject obj, T *t)
{
    jlong handle = reinterpret_cast<jlong>(t);
    env->SetLongField(obj, getHandleField(env, obj), handle);
}

#endif //_NATIVE_HANDLE_H_INCLUDED_