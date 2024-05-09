add_executable(tinyconfig_test
    "main.c"
)
tinyconfig_setup_target_wall(tinyconfig_test)

target_link_libraries(tinyconfig_test
    PRIVATE
        cutest
        tinyconfig
)

add_test(NAME tinyconfig_test
    COMMAND tinyconfig_test
)
