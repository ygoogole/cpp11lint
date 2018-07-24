cpp11lint - improved google cpplint supporting C++11 features and idioms.
=====================================

Details of new files:
-------

* CPPLINT.cfg - default configuration which turns off most cpplint checking (with cpp11 check on)
* Sample code as input of cpp11lint - test.cpp test2.cpp test3.h


Output example
-----------

.. code-block:: bash

  ./cpplint.py test.cpp test2.cpp test3.h 
  test.cpp:5:  "delete" should be used for non-defined private ctor/dtor/assignment  [c++11/delete] [4]

  test.cpp:8:  "delete" should be used for non-defined private ctor/dtor/assignment  [c++11/delete] [4]

test.cpp:24:  "NULL" should be replaced by nullptr  [c++11/nullptr] [5]
test.cpp:25:  "boost::mutex" should be replaced by std::mutex  [c++11/boost] [5]
test.cpp:25:  use mutable together with mutex  [c++11/mutable_mutex] [5]
test.cpp:26:  "boost::thread" should be replaced by std::thread  [c++11/boost] [5]
test.cpp:27:  "boost::lock_guard" should be replaced by std::lock_guard  [c++11/boost] [5]
test.cpp:28:  "typedef" should be replaced by "using"  [c++11/type_alias] [5]
test.cpp:29:  "enum" should be replaced by scoped enum "enum class"  [c++11/enum] [5]
test.cpp:39:  consider unique_ptr instead of shared_ptr  [c++11/shared_ptr] [3]
Done processing test.cpp
test2.cpp:5:  use constexpr instead of inline  [c++11/constexpr] [5]
test2.cpp:5:  "delete" should be used for non-defined private ctor/dtor/assignment  [c++11/delete] [4]
test2.cpp:8:  "delete" should be used for non-defined private ctor/dtor/assignment  [c++11/delete] [4]
test2.cpp:21:  use noexcept to indicate function throw no exception  [c++11/noexcept] [5]
test2.cpp:22:  use noexcept to indicate function throw no exception  [c++11/noexcept] [5]
test2.cpp:23:  use lambda instead of bind  [c++11/lambda] [4]
test2.cpp:25:  consider using emplace* method instead of push(|_back)/insert for STL containers  [c++11/emplace] [4]
Done processing test2.cpp
test3.h:1:  do not import namespace in header file  [c++/namespace] [5]
test3.h:10:  operation within assert will be ignored in release mode  [c++/assert] [4]
Done processing test3.h
Total errors found: 19
