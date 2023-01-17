find_package(Threads REQUIRED)

macro(add_test test_name sources)
    set(binary ${test_name}_test)

    add_executable(${binary}
        GoogleTestDriver.cpp
        ${sources}
    )

    target_link_libraries(${binary}
        PRIVATE
        ${CMAKE_PROJECT_NAME}
        gtest
        pthread
    )

    target_include_directories(${binary}
        PRIVATE
        ${OXM_PUBLIC_HEADERS_DIR}
        ${OXM_SOURCE_DIR}
    )
endmacro()

add_test(tmp TestTmp.cpp)