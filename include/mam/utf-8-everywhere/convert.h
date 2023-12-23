// Copyright Max & Me 2023

#include <string>
#include <vector>

namespace mam::utf_8_everywhere {

//--------------------------------------------------------------------
std::wstring convert(const std::string& string);
std::string convert(const std::wstring& wide_string);

//--------------------------------------------------------------------
} // namespace mam::utf_8_everywhere
