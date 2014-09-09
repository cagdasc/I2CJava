/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "BBB_I2C.h"
using namespace cacaosd_bbb_i2c;

/* Header for class com_cacaosd_i2cjava_core_I2C */
#define US8 (uint8_t)
#define US8P (uint8_t*)
#ifndef _Included_com_cacaosd_i2cjava_core_I2C
#define _Included_com_cacaosd_i2cjava_core_I2C
#ifdef __cplusplus
uint8_t _DEV_ADD;
BBB_I2C i2c;
extern "C" {
#endif
/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    setDeviceAddress
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_com_cacaosd_i2cjava_core_I2C_setDeviceAddress(
		JNIEnv *, jobject, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    getDeviceAddress
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_com_cacaosd_i2cjava_core_I2C_getDeviceAddress(
		JNIEnv *, jobject);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    setBusAddress
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_com_cacaosd_i2cjava_core_I2C_setBusAddress(JNIEnv *,
		jobject, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    getBusAddress
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_com_cacaosd_i2cjava_core_I2C_getBusAddress(
		JNIEnv *, jobject);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    writeBit
 * Signature: (BBB)V
 */
JNIEXPORT void JNICALL Java_com_cacaosd_i2cjava_core_I2C_writeBit(JNIEnv *,
		jobject, jbyte, jbyte, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    writeMoreBits
 * Signature: (BBBB)V
 */
JNIEXPORT void JNICALL Java_com_cacaosd_i2cjava_core_I2C_writeMoreBits(JNIEnv *,
		jobject, jbyte, jbyte, jbyte, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    writeByte
 * Signature: (BB)V
 */
JNIEXPORT void JNICALL Java_com_cacaosd_i2cjava_core_I2C_writeByte(JNIEnv *,
		jobject, jbyte, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    writeByteBuffer
 * Signature: (B[B)V
 */
JNIEXPORT void JNICALL Java_com_cacaosd_i2cjava_core_I2C_writeByteBuffer(
		JNIEnv *, jobject, jbyte, jbyteArray);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    writeByteArduino
 * Signature: (B)V
 */
JNIEXPORT void JNICALL Java_com_cacaosd_i2cjava_core_I2C_writeByteArduino(
		JNIEnv *, jobject, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    writeByteBufferArduino
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_cacaosd_i2cjava_core_I2C_writeByteBufferArduino(
		JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    readBit
 * Signature: (BB)B
 */
JNIEXPORT jbyte JNICALL Java_com_cacaosd_i2cjava_core_I2C_readBit(JNIEnv *,
		jobject, jbyte, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    readMoreBits
 * Signature: (BBB)B
 */
JNIEXPORT jbyte JNICALL Java_com_cacaosd_i2cjava_core_I2C_readMoreBits(JNIEnv *,
		jobject, jbyte, jbyte, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    readByte
 * Signature: (B)B
 */
JNIEXPORT jbyte JNICALL Java_com_cacaosd_i2cjava_core_I2C_readByte(JNIEnv *,
		jobject, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    readByteBuffer
 * Signature: (BB)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_cacaosd_i2cjava_core_I2C_readByteBuffer(
		JNIEnv *, jobject, jbyte, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    readByteBufferArduino
 * Signature: (B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_cacaosd_i2cjava_core_I2C_readByteBufferArduino(
		JNIEnv *, jobject, jbyte);

/*
 * Class:     com_cacaosd_i2cjava_core_I2C
 * Method:    readWord
 * Signature: (BB)S
 */
JNIEXPORT jshort JNICALL Java_com_cacaosd_i2cjava_core_I2C_readWord(JNIEnv *,
		jobject, jbyte, jbyte);

#ifdef __cplusplus
}
#endif
#endif
