// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#pragma once

#include "JavascriptObject.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeJavascriptObject final : ::djinni::JniInterface<::JavascriptObject, NativeJavascriptObject> {
public:
    using CppType = std::shared_ptr<::JavascriptObject>;
    using CppOptType = std::shared_ptr<::JavascriptObject>;
    using JniType = jobject;

    using Boxed = NativeJavascriptObject;

    ~NativeJavascriptObject();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeJavascriptObject>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeJavascriptObject>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeJavascriptObject();
    friend ::djinni::JniClass<NativeJavascriptObject>;
    friend ::djinni::JniInterface<::JavascriptObject, NativeJavascriptObject>;

};

}  // namespace djinni_generated
