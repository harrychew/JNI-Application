#include "jni.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

JNIEXPORT jintArray JNICALL Java_Array_generate
(JNIEnv *env, jobject obj, jint size) {
   jintArray result;
   int n = 0;
   int a=0;
   srand(time(0));
   result = (*env)->NewIntArray(env,size);
   if (result == NULL) {
      return NULL;
   }
   int i,j,b=0;
   jint fill[size];
   printf("Unsorted array:");
   for (i = 0; i < size; i++) {
	  n = rand() % 101;
    printf("%d ",n);
    fill[i] = n;
      for(j=i+1;j<size; j++){
        if(fill[i]>fill[j])
        {
          b = fill[i];
          fill[i]=fill[j];
          fill[j]=b;
        }
      }
	  if (n<50){
		  a++;
	  }
   }
  /* printf("Sorted array:");
   for(i=0;i<size;i++){
    printf("%d",fill[i]);
   }*/
    printf("\nThere are %d number/s less than 50 in this array! ",a);
   (*env)->SetIntArrayRegion(env, result, 0, size, fill);
   return result;
}

JNIEXPORT jint JNICALL Java_Array_diff
  (JNIEnv *env, jobject obj, jintArray arr, jint size) {

  jint temp[size];
  jint max = 0;
  jint min = 0;
(*env)->GetIntArrayRegion(env, arr, 0, size, temp);


for(int i = 0; i < size;i++)
		{
            for (int j = i + 1; j < size; j++)  
				{
					if(temp[i] > temp[j])
						{
							max = temp[i];
							temp[i] = temp[j];  
							temp[j] = max;
                        }
				}
		}
for(int i = 0; i < size;i++)
		{
            for (int j = i + 1; j < size; j++)  
				{
					if(temp[i] < temp[j])
						{
								min = temp[i];
                                temp[i] = temp[j];  
                                temp[j] = min;
                        }
				}
		}
jint diff = max - min;
      
return diff;

}
