// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGFEDisplacementMapElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGAnimatedEnumeration.h"
#include "bindings/core/v8/V8SVGAnimatedLength.h"
#include "bindings/core/v8/V8SVGAnimatedNumber.h"
#include "bindings/core/v8/V8SVGAnimatedString.h"
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
const WrapperTypeInfo V8SVGFEDisplacementMapElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGFEDisplacementMapElement::domTemplate, V8SVGFEDisplacementMapElement::refObject, V8SVGFEDisplacementMapElement::derefObject, V8SVGFEDisplacementMapElement::trace, 0, 0, V8SVGFEDisplacementMapElement::preparePrototypeObject, V8SVGFEDisplacementMapElement::installConditionallyEnabledProperties, "SVGFEDisplacementMapElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGFEDisplacementMapElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGFEDisplacementMapElement::s_wrapperTypeInfo = V8SVGFEDisplacementMapElement::wrapperTypeInfo;

namespace SVGFEDisplacementMapElementV8Internal {

static void SVG_CHANNEL_UNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 0);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_CHANNEL_RConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 1);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_CHANNEL_GConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 2);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_CHANNEL_BConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 3);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void SVG_CHANNEL_AConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    v8SetReturnValueInt(info, 4);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void in1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDisplacementMapElement* impl = V8SVGFEDisplacementMapElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->in1()), impl);
}

static void in1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFEDisplacementMapElementV8Internal::in1AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void in2AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDisplacementMapElement* impl = V8SVGFEDisplacementMapElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->in2()), impl);
}

static void in2AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFEDisplacementMapElementV8Internal::in2AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void scaleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDisplacementMapElement* impl = V8SVGFEDisplacementMapElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->scale()), impl);
}

static void scaleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFEDisplacementMapElementV8Internal::scaleAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void xChannelSelectorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDisplacementMapElement* impl = V8SVGFEDisplacementMapElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->xChannelSelector()), impl);
}

static void xChannelSelectorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFEDisplacementMapElementV8Internal::xChannelSelectorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void yChannelSelectorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDisplacementMapElement* impl = V8SVGFEDisplacementMapElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->yChannelSelector()), impl);
}

static void yChannelSelectorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFEDisplacementMapElementV8Internal::yChannelSelectorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDisplacementMapElement* impl = V8SVGFEDisplacementMapElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->x()), impl);
}

static void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFEDisplacementMapElementV8Internal::xAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDisplacementMapElement* impl = V8SVGFEDisplacementMapElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->y()), impl);
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFEDisplacementMapElementV8Internal::yAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDisplacementMapElement* impl = V8SVGFEDisplacementMapElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->width()), impl);
}

static void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFEDisplacementMapElementV8Internal::widthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDisplacementMapElement* impl = V8SVGFEDisplacementMapElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->height()), impl);
}

static void heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFEDisplacementMapElementV8Internal::heightAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void resultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDisplacementMapElement* impl = V8SVGFEDisplacementMapElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->result()), impl);
}

static void resultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFEDisplacementMapElementV8Internal::resultAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGFEDisplacementMapElementV8Internal

static void installV8SVGFEDisplacementMapElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGFEDisplacementMapElement", V8SVGElement::domTemplate(isolate), V8SVGFEDisplacementMapElement::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"in1", SVGFEDisplacementMapElementV8Internal::in1AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"in2", SVGFEDisplacementMapElementV8Internal::in2AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"scale", SVGFEDisplacementMapElementV8Internal::scaleAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"xChannelSelector", SVGFEDisplacementMapElementV8Internal::xChannelSelectorAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"yChannelSelector", SVGFEDisplacementMapElementV8Internal::yChannelSelectorAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"x", SVGFEDisplacementMapElementV8Internal::xAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"y", SVGFEDisplacementMapElementV8Internal::yAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"width", SVGFEDisplacementMapElementV8Internal::widthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"height", SVGFEDisplacementMapElementV8Internal::heightAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"result", SVGFEDisplacementMapElementV8Internal::resultAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_CHANNEL_UNKNOWN", SVGFEDisplacementMapElementV8Internal::SVG_CHANNEL_UNKNOWNConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_CHANNEL_R", SVGFEDisplacementMapElementV8Internal::SVG_CHANNEL_RConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_CHANNEL_G", SVGFEDisplacementMapElementV8Internal::SVG_CHANNEL_GConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_CHANNEL_B", SVGFEDisplacementMapElementV8Internal::SVG_CHANNEL_BConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, functionTemplate, prototypeTemplate, "SVG_CHANNEL_A", SVGFEDisplacementMapElementV8Internal::SVG_CHANNEL_AConstantGetterCallback);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SVGFEDisplacementMapElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGFEDisplacementMapElementTemplate);
}

bool V8SVGFEDisplacementMapElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGFEDisplacementMapElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGFEDisplacementMapElement* V8SVGFEDisplacementMapElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGFEDisplacementMapElement::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGFEDisplacementMapElement>()->ref();
#endif
}

void V8SVGFEDisplacementMapElement::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGFEDisplacementMapElement>()->deref();
#endif
}

} // namespace blink
