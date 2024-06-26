// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SharedArrayBuffer.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8SharedArrayBuffer::wrapperTypeInfo = { gin::kEmbedderBlink, V8SharedArrayBuffer::domTemplate, V8SharedArrayBuffer::refObject, V8SharedArrayBuffer::derefObject, V8SharedArrayBuffer::trace, 0, 0, V8SharedArrayBuffer::preparePrototypeObject, V8SharedArrayBuffer::installConditionallyEnabledProperties, "SharedArrayBuffer", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMSharedArrayBuffer.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DOMSharedArrayBuffer::s_wrapperTypeInfo = V8SharedArrayBuffer::wrapperTypeInfo;

namespace DOMSharedArrayBufferV8Internal {

static void byteLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMSharedArrayBuffer* impl = V8SharedArrayBuffer::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->byteLength());
}

static void byteLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMSharedArrayBufferV8Internal::byteLengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace DOMSharedArrayBufferV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8SharedArrayBufferAccessors[] = {
    {"byteLength", DOMSharedArrayBufferV8Internal::byteLengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SharedArrayBufferTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::sharedArrayBufferEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SharedArrayBuffer", v8::Local<v8::FunctionTemplate>(), V8SharedArrayBuffer::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SharedArrayBuffer", v8::Local<v8::FunctionTemplate>(), V8SharedArrayBuffer::internalFieldCount,
            0, 0,
            V8SharedArrayBufferAccessors, WTF_ARRAY_LENGTH(V8SharedArrayBufferAccessors),
            0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SharedArrayBuffer::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SharedArrayBufferTemplate);
}

bool V8SharedArrayBuffer::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SharedArrayBuffer::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMSharedArrayBuffer* V8SharedArrayBuffer::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SharedArrayBuffer::refObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<DOMSharedArrayBuffer>()->ref();
}

void V8SharedArrayBuffer::derefObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<DOMSharedArrayBuffer>()->deref();
}

} // namespace blink
