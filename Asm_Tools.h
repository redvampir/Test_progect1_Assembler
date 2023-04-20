#pragma once

#include "Asm_Tools.g.h"

namespace winrt::Testprogect1Assembler::implementation
{
    struct Asm_Tools : Asm_ToolsT<Asm_Tools>
    {
        Asm_Tools() 
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::Testprogect1Assembler::factory_implementation
{
    struct Asm_Tools : Asm_ToolsT<Asm_Tools, implementation::Asm_Tools>
    {
    };
}
