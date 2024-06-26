// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/gl/vsync_provider_win.h"

//#include <dwmapi.h>

#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "base/win/windows_version.h"
#include "ui/gfx/native_widget_types.h"

namespace gfx {

VSyncProviderWin::VSyncProviderWin(gfx::AcceleratedWidget window)
    : window_(window)
{
    use_dwm_ = (base::win::GetVersion() >= base::win::VERSION_WIN7);
}

VSyncProviderWin::~VSyncProviderWin() { }

void VSyncProviderWin::GetVSyncParameters(const UpdateVSyncCallback& callback)
{
    TRACE_EVENT0("gpu", "WinVSyncProvider::GetVSyncParameters");

    base::TimeTicks timebase;
    base::TimeDelta interval;
    bool dwm_active = false;

    // Query the DWM timing info first if available. This will provide the most
    // precise values.
    if (use_dwm_) {
        //     DWM_TIMING_INFO timing_info;
        //     timing_info.cbSize = sizeof(timing_info);
        //     HRESULT result = DwmGetCompositionTimingInfo(NULL, &timing_info);
        //     if (result == S_OK) {
        //       dwm_active = true;
        //
        //       // Calculate an interval value using the rateRefresh numerator and
        //       // denominator.
        //       base::TimeDelta rate_interval;
        //       if (timing_info.rateRefresh.uiDenominator > 0 &&
        //           timing_info.rateRefresh.uiNumerator > 0) {
        //         // Swap the numerator/denominator to convert frequency to period.
        //         rate_interval = base::TimeDelta::FromMicroseconds(
        //             timing_info.rateRefresh.uiDenominator *
        //             base::Time::kMicrosecondsPerSecond /
        //             timing_info.rateRefresh.uiNumerator);
        //       }
        //
        //       if (base::TimeTicks::IsHighResolution()) {
        //         // qpcRefreshPeriod is very accurate but noisy, and must be used with
        //         // a high resolution timebase to avoid frequently missing Vsync.
        //         timebase = base::TimeTicks::FromQPCValue(
        //             static_cast<LONGLONG>(timing_info.qpcVBlank));
        //         interval = base::TimeDelta::FromQPCValue(
        //             static_cast<LONGLONG>(timing_info.qpcRefreshPeriod));
        //         // Check for interval values that are impossibly low. A 29 microsecond
        //         // interval was seen (from a qpcRefreshPeriod of 60).
        //         if (interval < base::TimeDelta::FromMilliseconds(1)) {
        //           interval = rate_interval;
        //         }
        //         // Check for the qpcRefreshPeriod interval being improbably small
        //         // compared to the rateRefresh calculated interval, as another
        //         // attempt at detecting driver bugs.
        //         if (!rate_interval.is_zero() && interval < rate_interval / 2) {
        //           interval = rate_interval;
        //         }
        //       } else {
        //         // If FrameTime is not high resolution, we do not want to translate
        //         // the QPC value provided by DWM into the low-resolution timebase,
        //         // which would be error prone and jittery. As a fallback, we assume
        //         // the timebase is zero and use rateRefresh, which may be rounded but
        //         // isn't noisy like qpcRefreshPeriod, instead. The fact that we don't
        //         // have a timebase here may lead to brief periods of jank when our
        //         // scheduling becomes offset from the hardware vsync.
        //         interval = rate_interval;
        //       }
        //     }
        DebugBreak();
    }

    if (!dwm_active) {
        // When DWM compositing is active all displays are normalized to the
        // refresh rate of the primary display, and won't composite any faster.
        // If DWM compositing is disabled, though, we can use the refresh rates
        // reported by each display, which will help systems that have mis-matched
        // displays that run at different frequencies.
        //     HMONITOR monitor = MonitorFromWindow(window_, MONITOR_DEFAULTTONEAREST);
        //     MONITORINFOEX monitor_info;
        //     monitor_info.cbSize = sizeof(MONITORINFOEX);
        //     BOOL result = GetMonitorInfo(monitor, &monitor_info);
        //     if (result) {
        //       DEVMODE display_info;
        //       display_info.dmSize = sizeof(DEVMODE);
        //       display_info.dmDriverExtra = 0;
        //       result = EnumDisplaySettings(monitor_info.szDevice, ENUM_CURRENT_SETTINGS,
        //                                    &display_info);
        //       if (result && display_info.dmDisplayFrequency > 1) {
        //         interval = base::TimeDelta::FromMicroseconds(
        //             (1.0 / static_cast<double>(display_info.dmDisplayFrequency)) *
        //             base::Time::kMicrosecondsPerSecond);
        //       }
        //     }
        DebugBreak();
    }

    if (interval.ToInternalValue() != 0) {
        callback.Run(timebase, interval);
    }
}

} // namespace gfx
