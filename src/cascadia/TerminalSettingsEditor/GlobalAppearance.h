﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "GlobalAppearance.g.h"
#include "Utils.h"

namespace winrt::Microsoft::Terminal::Settings::Editor::implementation
{
    struct GlobalAppearance : GlobalAppearanceT<GlobalAppearance>
    {
    public:
        GlobalAppearance();
        winrt::Microsoft::Terminal::Settings::Model::GlobalAppSettings GlobalSettings();
        winrt::Windows::Foundation::Collections::IObservableVector<winrt::Microsoft::Terminal::Settings::Editor::EnumEntry> ElementThemes();

        winrt::Windows::Foundation::IInspectable CurrentTheme();
        void CurrentTheme(const winrt::Windows::Foundation::IInspectable& enumEntry);

    private:
        winrt::Windows::Foundation::Collections::IObservableVector<winrt::Microsoft::Terminal::Settings::Editor::EnumEntry> _ElementThemes;
        winrt::Windows::Foundation::Collections::IMap<winrt::Windows::UI::Xaml::ElementTheme, winrt::Microsoft::Terminal::Settings::Editor::EnumEntry> _ElementThemeMap;
    };
}

namespace winrt::Microsoft::Terminal::Settings::Editor::factory_implementation
{
    BASIC_FACTORY(GlobalAppearance);
}
