// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format off
#include "V8External.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif

const WrapperTypeInfo V8External::wrapperTypeInfo = { gin::kEmbedderBlink, V8External::domTemplate, V8External::refObject, V8External::derefObject, V8External::trace, nullptr, 0, V8External::preparePrototypeObject, V8External::installConditionallyEnabledProperties, "External", nullptr, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::GarbageCollectedObject };

#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in External.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& External::s_wrapperTypeInfo = V8External::wrapperTypeInfo;

// not [ActiveScriptWrappable]
// static_assert(
//     !std::is_base_of<ActiveScriptWrappableBase, External>::value,
//     "External inherits from ActiveScriptWrappable<>, but is not specifying "
//     "[ActiveScriptWrappable] extended attribute in the IDL file.  "
//     "Be consistent.");
// static_assert(
//     std::is_same<decltype(&External::hasPendingActivity),
//                  decltype(&ScriptWrappable::hasPendingActivity)>::value,
//     "External is overriding hasPendingActivity(), but is not specifying "
//     "[ActiveScriptWrappable] extended attribute in the IDL file.  "
//     "Be consistent.");

External* V8External::toImpl(v8::Local<v8::Object> object)
{
    return toScriptWrappable(object)->toImpl<External>();
}

namespace ExternalV8Internal {

static void AddSearchProviderMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    External* impl = V8External::toImpl(info.Holder());

    impl->AddSearchProvider();
}

CORE_EXPORT  void AddSearchProviderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExternalV8Internal::AddSearchProviderMethod(info);
}

static void IsSearchProviderInstalledMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    External* impl = V8External::toImpl(info.Holder());
    impl->IsSearchProviderInstalled();
}

CORE_EXPORT  void IsSearchProviderInstalledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) 
{
    ExternalV8Internal::IsSearchProviderInstalledMethod(info);
}

} // namespace ExternalV8Internal

const V8DOMConfiguration::MethodConfiguration V8ExternalMethods[] = {
    {"AddSearchProvider", ExternalV8Internal::AddSearchProviderMethodCallback,0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"IsSearchProviderInstalled", ExternalV8Internal::IsSearchProviderInstalledMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8ExternalTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    // Initialize the interface object's template.
    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "External", v8::Local<v8::FunctionTemplate>(), V8External::internalFieldCount,
        0, 0,
        nullptr, 0,
        V8ExternalMethods, WTF_ARRAY_LENGTH(V8ExternalMethods));
    //functionTemplate->SetCallHandler(V8FileReader::constructorCallback);
    //functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8External::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ExternalTemplate);
}

bool V8External::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

External* V8External::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8External::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8External::derefObject(ScriptWrappable* scriptWrappable)
{
}

}  // namespace blink
