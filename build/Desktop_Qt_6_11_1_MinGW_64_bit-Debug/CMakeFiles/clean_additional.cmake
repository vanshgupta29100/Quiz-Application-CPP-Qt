# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QuizApplication_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QuizApplication_autogen.dir\\ParseCache.txt"
  "QuizApplication_autogen"
  )
endif()
