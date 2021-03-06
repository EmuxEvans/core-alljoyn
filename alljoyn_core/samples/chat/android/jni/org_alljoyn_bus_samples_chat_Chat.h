/******************************************************************************
 * Copyright AllSeen Alliance. All rights reserved.
 *
 *    Permission to use, copy, modify, and/or distribute this software for any
 *    purpose with or without fee is hereby granted, provided that the above
 *    copyright notice and this permission notice appear in all copies.
 *
 *    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *    WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *    MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *    ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *    ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 ******************************************************************************/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_alljoyn_bus_samples_chat_Chat */

#ifndef _Included_org_alljoyn_bus_samples_chat_Chat
#define _Included_org_alljoyn_bus_samples_chat_Chat
#ifdef __cplusplus
extern "C" {
#endif
#undef org_alljoyn_bus_samples_chat_Chat_DIALOG_CONNECT
#define org_alljoyn_bus_samples_chat_Chat_DIALOG_CONNECT 1L
#undef org_alljoyn_bus_samples_chat_Chat_DIALOG_ADVERTISE
#define org_alljoyn_bus_samples_chat_Chat_DIALOG_ADVERTISE 2L
#undef org_alljoyn_bus_samples_chat_Chat_DIALOG_JOIN_SESSION
#define org_alljoyn_bus_samples_chat_Chat_DIALOG_JOIN_SESSION 3L
/*
 * Class:     org_alljoyn_bus_samples_chat_Chat
 * Method:    jniOnCreate
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_alljoyn_bus_samples_chat_Chat_jniOnCreate
    (JNIEnv *, jobject, jstring);

/*
 * Class:     org_alljoyn_bus_samples_chat_Chat
 * Method:    jniOnDestroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_samples_chat_Chat_jniOnDestroy
    (JNIEnv *, jobject);

/*
 * Class:     org_alljoyn_bus_samples_chat_Chat
 * Method:    sendChatMsg
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_alljoyn_bus_samples_chat_Chat_sendChatMsg
    (JNIEnv *, jobject, jstring);

/*
 * Class:     org_alljoyn_bus_samples_chat_Chat
 * Method:    advertise
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_alljoyn_bus_samples_chat_Chat_advertise
    (JNIEnv *, jobject, jstring);

/*
 * Class:     org_alljoyn_bus_samples_chat_Chat
 * Method:    joinSession
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_alljoyn_bus_samples_chat_Chat_joinSession
    (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
