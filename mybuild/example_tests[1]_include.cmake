if(EXISTS "/Users/itsumaden/C++/Repo/mybuild/example_tests[1]_tests.cmake")
  include("/Users/itsumaden/C++/Repo/mybuild/example_tests[1]_tests.cmake")
else()
  add_test(example_tests_NOT_BUILT example_tests_NOT_BUILT)
endif()