/*
 * Copyright 2018 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/**************************************************************************************************
 *** This file was autogenerated from GrAARectEffect.fp; do not modify.
 **************************************************************************************************/
#ifndef GrAARectEffect_DEFINED
#define GrAARectEffect_DEFINED
#include "include/core/SkTypes.h"
#include "include/core/SkM44.h"

#include "src/gpu/GrCoordTransform.h"
#include "src/gpu/GrFragmentProcessor.h"
class GrAARectEffect : public GrFragmentProcessor {
public:
    static std::unique_ptr<GrFragmentProcessor> Make(GrClipEdgeType edgeType, SkRect rect) {
        return std::unique_ptr<GrFragmentProcessor>(new GrAARectEffect(edgeType, rect));
    }
    GrAARectEffect(const GrAARectEffect& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "AARectEffect"; }
    GrClipEdgeType edgeType;
    SkRect rect;

private:
    GrAARectEffect(GrClipEdgeType edgeType, SkRect rect)
            : INHERITED(kGrAARectEffect_ClassID,
                        (OptimizationFlags)kCompatibleWithCoverageAsAlpha_OptimizationFlag)
            , edgeType(edgeType)
            , rect(rect) {}
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    typedef GrFragmentProcessor INHERITED;
};
#endif
