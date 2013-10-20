/*
 * Copyright 2013 Cagdas Caglak, cagdascaglak@gmail.com, http://expcodes.blogspot.com/
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_cacaosd_I2CHandler */

#ifndef _Included_com_cacaosd_I2CHandler
#define _Included_com_cacaosd_I2CHandler
#ifdef __cplusplus
extern "C" {
#endif

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
    
    const char *path;
    
    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    initialize
     * Signature: ()V
     */
    JNIEXPORT void JNICALL Java_com_cacaosd_I2CHandler_initialize
    (JNIEnv *, jobject);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    writeBit
     * Signature: (BBBB)V
     */
    JNIEXPORT void JNICALL Java_com_cacaosd_I2CHandler_writeBit
    (JNIEnv *, jobject, jbyte, jbyte, jbyte, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    writeBits
     * Signature: (BBBBB)V
     */
    JNIEXPORT void JNICALL Java_com_cacaosd_I2CHandler_writeBits
    (JNIEnv *, jobject, jbyte, jbyte, jbyte, jbyte, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    writeByte
     * Signature: (BBB)V
     */
    JNIEXPORT void JNICALL Java_com_cacaosd_I2CHandler_writeByte
    (JNIEnv *, jobject, jbyte, jbyte, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    writeByteBuffer
     * Signature: (BB[BB)V
     */
    JNIEXPORT void JNICALL Java_com_cacaosd_I2CHandler_writeByteBuffer
    (JNIEnv *, jobject, jbyte, jbyte, jbyteArray, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    writeByteArduino
     * Signature: (BB)V
     */
    JNIEXPORT void JNICALL Java_com_cacaosd_I2CHandler_writeByteArduino
    (JNIEnv *, jobject, jbyte, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    writeByteBufferArduino
     * Signature: (B[BB)V
     */
    JNIEXPORT void JNICALL Java_com_cacaosd_I2CHandler_writeByteBufferArduino
    (JNIEnv *, jobject, jbyte, jbyteArray, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    readByte
     * Signature: (BB)B
     */
    JNIEXPORT jbyte JNICALL Java_com_cacaosd_I2CHandler_readByte
    (JNIEnv *, jobject, jbyte, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    readBit
     * Signature: (BBB)B
     */
    JNIEXPORT jbyte JNICALL Java_com_cacaosd_I2CHandler_readBit
    (JNIEnv *, jobject, jbyte, jbyte, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    readBits
     * Signature: (BBBB)B
     */
    JNIEXPORT jbyte JNICALL Java_com_cacaosd_I2CHandler_readBits
    (JNIEnv *, jobject, jbyte, jbyte, jbyte, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    readByteBuffer
     * Signature: (BB[BB)V
     */
    JNIEXPORT void JNICALL Java_com_cacaosd_I2CHandler_readByteBuffer
    (JNIEnv *, jobject, jbyte, jbyte, jbyteArray, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    readByteBufferArduino
     * Signature: (B[BB)V
     */
    JNIEXPORT void JNICALL Java_com_cacaosd_I2CHandler_readByteBufferArduino
    (JNIEnv *, jobject, jbyte, jbyteArray, jbyte);

    /*
     * Class:     com_cacaosd_I2CHandler
     * Method:    readWord
     * Signature: (BBB)S
     */
    JNIEXPORT jshort JNICALL Java_com_cacaosd_I2CHandler_readWord
    (JNIEnv *, jobject, jbyte, jbyte, jbyte);

#ifdef __cplusplus
}
#endif
#endif
