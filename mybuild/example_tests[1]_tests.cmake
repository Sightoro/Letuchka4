add_test( GoogleTestCi.Foo [==[/Users/itsumaden/C++/Repo/mybuild/example_tests]==] [==[--gtest_filter=GoogleTestCi.Foo]==] --gtest_also_run_disabled_tests)
set_tests_properties( GoogleTestCi.Foo PROPERTIES WORKING_DIRECTORY [==[/Users/itsumaden/C++/Repo/mybuild]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( example_tests_TESTS GoogleTestCi.Foo)
