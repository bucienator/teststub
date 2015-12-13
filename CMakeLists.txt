cmake_minimum_required(VERSION 2.8)

project (teststub)

set(googletest_SRCS
  googletest/googletest/src/gtest-all.cc
  googletest/googlemock/src/gmock-all.cc
  googletest/googlemock/src/gmock_main.cc
)

set(teststub_SRCS teststub.cpp)

add_executable(teststub ${googletest_SRCS} ${teststub_SRCS})

target_include_directories(teststub
  PUBLIC googletest/googletest/include/
  PUBLIC googletest/googlemock/include/
)
