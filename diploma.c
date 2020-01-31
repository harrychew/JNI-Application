#include <jni.h>
#include <stdio.h>

JNIEXPORT jstring JNICALL Java_cgpa_checkCGPA1(JNIEnv *env, jobject obj){
    //jclass cls = (*env)->GetObjectClass(env, obj);
    //jmethodID mid = (*env)->GetMethodID(env, cls, "call", "(I)V");
    const char *org;

    double cgpa;
	printf("Enter your cgpa =");
	scanf("%lf",&cgpa);
 
	
	if (cgpa>=3.50 && cgpa<=4.00){
		org="Distinction";
	}else if (cgpa>=3.00 && cgpa<3.50){
		org="Credit";
	}else if (cgpa>=2.00 && cgpa<3.00){
		org="Pass";
		
	}else if (cgpa>=0 && cgpa<2.00){
		org="Fail";
	}else{
		org="Please try again!";
	}
	return (*env)->NewStringUTF(env,org);

    printf("Calling from native code\n");
    
}
