// Copyright Max & Me 2023

#include <string>
#include <vector>

namespace utf_8_everywhere {

//--------------------------------------------------------------------
std::wstring convert(const std::string& string);
std::string convert(const std::wstring& wide_string);

//--------------------------------------------------------------------
} // namespace utf_8_everywhere
