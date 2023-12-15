// Copyright Max & Me 2023

#include <string>
#include <vector>

namespace mam::str_conv {

//--------------------------------------------------------------------
std::wstring string_to_wide_string(const std::string& string);
std::string wide_string_to_string(const std::wstring& wide_string);

//--------------------------------------------------------------------
} // namespace mam::str_conv
