#include "jni.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

JNIEXPORT jintArray JNICALL Java_numArray_print
(JNIEnv *env, jobject obj, jint size) {
   jintArray result;
   jint n = 0;
   result = (*env)->NewIntArray(env,size);
   if (result == NULL) {
      return NULL;
   }
   jint i;
   jint fill[size],lessthan50[];
   for (i = 0; i < size; i++) {
	  n = rand() % 100 + 1;
    fill[i] = nl
    if (n<50){
      lessthan50[i] = n;
    }
   }
   
   (*env)->SetIntArrayRegion(env, result, 0, size, fill);
   return result;
}

JNIEXPORT jintArray JNICALL Java_numArray_diff
  (JNIEnv *env, jobject obj, jintArray arr, jint size) {

  jint buf[size];
  jint max = 0;
  jint min = 0;
(*env)->GetIntArrayRegion(env, arr, 0, size, buf);


for(int i = 0; i < size;i++)
		{
                      for (int j = i + 1; j < size; j++)  {
			if(buf[i] > buf[j])
			{
				max = buf[i];
        buf[i] = buf[j];  
        buf[j] = max;
                             }
			}
		}
for(int i = 0; i < size;i++)
		{
                      for (int j = i + 1; j < size; j++)  {
			if(buf[i] < buf[j])
			{
				min = buf[i];
                                buf[i] = buf[j];  
                                buf[j] = min;
                             }
			}
		}
buf[0] = max - min;
      (*env)->SetIntArrayRegion(env, arr, 0, size, buf);


	  return 0;

}
