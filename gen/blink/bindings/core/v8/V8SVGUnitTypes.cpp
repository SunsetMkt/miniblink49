// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGUnitTypes.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8SVGUnitTypes::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGUnitTypes::domTemplate, V8SVGUnitTypes::refObject, V8SVGUnitTypes::derefObject, V8SVGUnitTypes::trace, 0, 0, V8SVGUnitTypes::preparePrototypeObject, V8SVGUnitTypes::installConditionallyEnabledProperties, "SVGUnitTypes", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGUnitTypes.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGUnitTypes::s_wrapperTypeInfo = V8SVGUnitTypes::wrapperTypeInfo;

namespace SVGUnitTypesV8Internal {

static void SVG_UNIT_TYPE_UNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 0);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_UNIT_TYPE_USERSPACEONUSEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 1);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_UNIT_TYPE_OBJECTBOUNDINGBOXConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 2);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGUnitTypesV8Internal

static void installV8SVGUnitTypesTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGUnitTypes", v8::Local<v8::FunctionTemplate>(), V8SVGUnitTypes::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_UNIT_TYPE_UNKNOWN", SVGUnitTypesV8Internal::SVG_UNIT_TYPE_UNKNOWNConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_UNIT_TYPE_USERSPACEONUSE", SVGUnitTypesV8Internal::SVG_UNIT_TYPE_USERSPACEONUSEConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_UNIT_TYPE_OBJECTBOUNDINGBOX", SVGUnitTypesV8Internal::SVG_UNIT_TYPE_OBJECTBOUNDINGBOXConstantGetterCallback);
    static_assert(0 == SVGUnitTypes::SVG_UNIT_TYPE_UNKNOWN, "the value of SVGUnitTypes_SVG_UNIT_TYPE_UNKNOWN does not match with implementation");
    static_assert(1 == SVGUnitTypes::SVG_UNIT_TYPE_USERSPACEONUSE, "the value of SVGUnitTypes_SVG_UNIT_TYPE_USERSPACEONUSE does not match with implementation");
    static_assert(2 == SVGUnitTypes::SVG_UNIT_TYPE_OBJECTBOUNDINGBOX, "the value of SVGUnitTypes_SVG_UNIT_TYPE_OBJECTBOUNDINGBOX does not match with implementation");

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SVGUnitTypes::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGUnitTypesTemplate);
}

bool V8SVGUnitTypes::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGUnitTypes::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGUnitTypes* V8SVGUnitTypes::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGUnitTypes::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGUnitTypes>()->ref();
#endif
}

void V8SVGUnitTypes::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGUnitTypes>()->deref();
#endif
}

} // namespace blink
