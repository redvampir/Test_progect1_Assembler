#include "pch.h"
#include "Asm_Tools.h"
#if __has_include("Asm_Tools.g.cpp")
#include "Asm_Tools.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::Testprogect1Assembler::implementation
{
    int32_t Asm_Tools::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Asm_Tools::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void Asm_Tools::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
