
cmake_minimum_required(VERSION 3.16)
project(rtow LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

add_executable(oneWeekend main.cpp
vec3.h color.h)

# Chạy Win32 , ko hiện console

#set_target_properties(dx11 PROPERTIES WIN32_EXECUTABLE YES)

# unicode(khong dung ansi)
#target_compile_definitions(dx11 PRIVATE UNICODE _UNICODE)

# Link Direct3D + Win32 + D3DCompiler



