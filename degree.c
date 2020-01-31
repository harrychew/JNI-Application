#include <jni.h>
#include <stdio.h>

JNIEXPORT jstring JNICALL Java_cgpa_checkCGPA2(JNIEnv *env, jobject obj){
    //jclass cls = (*env)->GetObjectClass(env, obj);
    //jmethodID mid = (*env)->GetMethodID(env, cls, "call", "(I)V");
    const char *org;

    double cgpa;
	printf("Enter your cgpa =");
	scanf("%lf",&cgpa);
 
	
	if (cgpa>=3.67 && cgpa<=4.00){
		org="First";
	}else if (cgpa>=3.33 && cgpa<3.67){
		org="Second Upper";
	}else if (cgpa>=2.67 && cgpa<3.33){
		org="Second Lower";
		
	}else if (cgpa>=2.0 && cgpa<2.66){
		org="Third";
	}else if (cgpa>=0 && cgpa<2.0){
		org="Failed!";
	}
	else{
		org="Please try again!";
	}
	return (*env)->NewStringUTF(env,org);

    printf("Calling from native code\n");
    
}
