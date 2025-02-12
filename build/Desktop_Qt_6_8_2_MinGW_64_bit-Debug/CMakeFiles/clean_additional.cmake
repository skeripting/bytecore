# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "ByteCore_autogen"
  "CMakeFiles\\ByteCore_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ByteCore_autogen.dir\\ParseCache.txt"
  )
endif()
